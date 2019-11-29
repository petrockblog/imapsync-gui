//
// Created by Florian Müller on 26.11.19.
//
#include <wx/filedlg.h>
#include <wx/log.h>
#include <wx/wfstream.h>

#include "MainFrameHandlers.h"

ui::MainFrameHandlers::MainFrameHandlers(wxWindow *parent,
                                         wxWindowID id,
                                         const wxString &title,
                                         const wxPoint &pos,
                                         const wxSize &size,
                                         long style) : MainFrame(parent, id, title, pos, size, style) {}

void ui::MainFrameHandlers::OnOpen(wxCommandEvent &event) {
  wxFileDialog
      openFileDialog(this, _("Open IMAPSync-UI Configuration"), "", "",
                     "IMAPSync-UI Config (*.cfg.json)|*.cfg.json", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
  if (openFileDialog.ShowModal() == wxID_CANCEL)
    return;     // the user changed idea...

  // proceed loading the file chosen by the user;
  // this can be done with e.g. wxWidgets input streams:
  wxFileInputStream input_stream(openFileDialog.GetPath());
  if (!input_stream.IsOk()) {
    wxLogError("Cannot open file '%s'.", openFileDialog.GetPath());
    return;
  }
}
void ui::MainFrameHandlers::OnSave(wxCommandEvent &event) {
  wxFileDialog saveFileDialog(this, _("Save IMAPSync-UI Configuration"), "", "", "IMAPSync-UI Config (*.cfg.json)|*.cfg.json", wxFD_SAVE);
  if (saveFileDialog.ShowModal() == wxID_CANCEL)
    return;
}
