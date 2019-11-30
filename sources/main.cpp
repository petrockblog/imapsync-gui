#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

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
  frame->SetStatusText(wxT("Status: idle"), 1);

  return true;
}
