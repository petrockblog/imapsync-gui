//
// Created by Florian Müller on 26.11.19.
//
#include <wx/filedlg.h>
#include <wx/log.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <nlohmann/json.hpp>
#include <wx/wx.h>

#include "MainFrameHandlers.h"

ui::MainFrameHandlers::MainFrameHandlers(wxWindow *parent,
                                         wxWindowID id,
                                         const wxString &title,
                                         const wxPoint &pos,
                                         const wxSize &size,
                                         long style) : MainFrame(parent, id, title, pos, size, style) {
  m_text_log_->SetPage("Hello!<br>");
}

void ui::MainFrameHandlers::OnOpen(wxCommandEvent &event) {
  wxFileDialog
      openFileDialog(this, _("Open IMAPSync-UI Configuration"), "", "",
                     "IMAPSync-UI Config (*.isg)|*.isg", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
  if (openFileDialog.ShowModal() == wxID_CANCEL)
    return;     // the user changed idea...

  // proceed loading the file chosen by the user;
  try {
    std::ifstream inputConfigFile(std::string(openFileDialog.GetPath().mb_str()));
    nlohmann::json configData;
    inputConfigFile >> configData;
    source_name_->SetValue(wxString(configData["source"]["name"].get<std::string>()));
    source_password_->SetValue(wxString(encryptDecrypt(configData["source"]["password"].get<std::string>())));
    source_server_->SetValue(wxString(configData["source"]["server"].get<std::string>()));

    destination_name_->SetValue(wxString(configData["destination"]["name"].get<std::string>()));
    destination_password_->SetValue(wxString(encryptDecrypt(configData["destination"]["password"].get<std::string>())));
    destination_server_->SetValue(wxString(configData["destination"]["server"].get<std::string>()));

    m_checkBox_dryrun->SetValue(configData["parameters"]["dryrun"].get<bool>());
    m_checkBox_foldersonly->SetValue(configData["parameters"]["onlyfolderssync"].get<bool>());
    m_checkBox_foldersizes->SetValue(configData["parameters"]["onlyfoldersizes"].get<bool>());
    m_checkBox_loginonly->SetValue(configData["parameters"]["loginonly"].get<bool>());
  } catch (std::exception exc) {
    wxLogError("Cannot open file '%s'.", openFileDialog.GetPath());
  }
}

std::string ui::MainFrameHandlers::encryptDecrypt(std::string toEncrypt) {
  const char key[7] = {'I', 'M', 'A', 'P', 'G', 'U', 'I'}; //Any chars will work
  std::string output = toEncrypt;

  for (int i = 0; i < toEncrypt.size(); i++)
    output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

  return output;
}

void ui::MainFrameHandlers::OnSave(wxCommandEvent &event) {
  wxFileDialog saveFileDialog(this, _("Save IMAPSync-UI Configuration"), "", "", "IMAPSync-UI Config (*.isg)|*.isg", wxFD_SAVE);
  if (saveFileDialog.ShowModal() == wxID_CANCEL)
    return;

  try {
    const nlohmann::json toBesafed = {
        {"source", {
            {"name", std::string(source_name_->GetValue().mb_str())},
            {"password", encryptDecrypt(std::string(source_password_->GetValue().mb_str()))},
            {"server", std::string(source_server_->GetValue().mb_str())}
        }},
        {"destination", {
            {"name", std::string(destination_name_->GetValue().mb_str())},
            {"password", encryptDecrypt(std::string(destination_password_->GetValue().mb_str()))},
            {"server", std::string(destination_server_->GetValue().mb_str())}
        }},
        {"parameters", {
            {"dryrun", m_checkBox_dryrun->GetValue()},
            {"loginonly", m_checkBox_loginonly->GetValue()},
            {"onlyfoldersizes", m_checkBox_foldersizes->GetValue()},
            {"onlyfolderssync", m_checkBox_foldersonly->GetValue()}
        }}
    };

    std::ofstream configFile(saveFileDialog.GetPath());
    configFile << std::setw(4) << toBesafed << std::endl;
    configFile.close();

    wxMessageBox("Successfully saved configuration to file.", "Info", wxOK_DEFAULT, this);
  } catch (std::exception exc) {
    wxMessageBox("Something went wrong while saving the configuration to file.", "ERROR", wxOK_DEFAULT, this);
  }
}
void ui::MainFrameHandlers::AddLineToLog(std::string logMessage) {
  m_text_log_->AppendToPage(wxString(logMessage + "<br>"));
}
