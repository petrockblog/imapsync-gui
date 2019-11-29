//
// Created by Florian Müller on 26.11.19.
//

#ifndef IMAPSYNC_UI__MAINFRAMEHANDLERS_H_
#define IMAPSYNC_UI__MAINFRAMEHANDLERS_H_

#include "MainFrame.h"

namespace ui {

class MainFrameHandlers : public MainFrame {
 public:
  MainFrameHandlers(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("IMAP Sync GUI  -  by petrockblock.com"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 473,466 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL);

 private:
  virtual void OnOpen( wxCommandEvent& event ) override;
  virtual void OnSave( wxCommandEvent& event ) override;
};

}

#endif //IMAPSYNC_UI__MAINFRAMEHANDLERS_H_
