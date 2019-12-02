#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <plog/Log.h>

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
  static plog::RollingFileAppender<plog::CsvFormatter> fileAppender("MultiAppender.csv", 8000, 3); // Create the 1st appender.
//  static plog::ConsoleAppender<plog::TxtFormatter> consoleAppender; // Create the 2nd appender.
//  plog::init(plog::debug, &fileAppender).addAppender(&consoleAppender); // Initialize the logger with the both appenders.
  plog::init(plog::debug, &fileAppender); // Initialize the logger with the both appenders.

  ui::MainFrameHandlers *frame = new ui::MainFrameHandlers(nullptr);
  frame->Show(true);
  wxMenuBar::MacSetCommonMenuBar(frame->m_menubar);

  std::string versionString = "IMAPSync Version: " + VersionFinder::getIMAPSyncVersion();
  frame->SetStatusText(wxString(versionString), 0);
  frame->SetStatusText(wxT("Status: idle"), 1);

  frame->AddLineToLog("Some text log message");
  frame->AddLineToLog("Some text log message 2");
  frame->AddLineToLog("Some text log message 3");
  frame->AddLineToLog("Some text log message 4");

  return true;
}
