// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <iostream>
#include <fstream>
#include <iomanip>
#include <nlohmann/json.hpp>

#include "MainFrameHandlers.h"
#include "VersionFinder.h"

class MyApp : public wxApp
{
 public:
  virtual bool OnInit();
};

enum
{
  ID_Hello = 1
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
  ui::MainFrameHandlers *frame = new ui::MainFrameHandlers(nullptr);
  frame->Show(true);
  wxMenuBar::MacSetCommonMenuBar(frame->m_menubar);

  std::string versionString = "IMAPSync Version: " + VersionFinder::getIMAPSyncVersion();
  frame->SetStatusText(wxString(versionString), 0);
  frame->SetStatusText(wxT("Status: not available"), 1);

  nlohmann::json j2 = {
      {"pi", 3.141},
      {"happy", true},
      {"name", "Niels"},
      {"nothing", nullptr},
      {"answer", {
          {"everything", 42}
      }},
      {"list", {1, 0, 2}},
      {"object", {
          {"currency", "USD"},
          {"value", 42.99}
      }}
  };

  std::ofstream configFile("pretty.json");
  configFile << std::setw(4) << j2 << std::endl;
  configFile.close();

  return true;
}
