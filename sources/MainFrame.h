///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/gbsizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/gauge.h>
#include <wx/statusbr.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace ui
{

	///////////////////////////////////////////////////////////////////////////////
	/// Class MainFrame
	///////////////////////////////////////////////////////////////////////////////
	class MainFrame : public wxFrame
	{
		private:

		protected:
			wxStaticText* m_staticText1;
			wxTextCtrl* source_name_;
			wxStaticText* m_staticText2;
			wxTextCtrl* source_password_;
			wxStaticText* m_staticText3;
			wxTextCtrl* source_server_;
			wxStaticText* m_staticText11;
			wxTextCtrl* destination_name_;
			wxStaticText* m_staticText21;
			wxTextCtrl* destination_password_;
			wxStaticText* m_staticText31;
			wxTextCtrl* destination_server_;
			wxCheckBox* m_checkBox_dryrun;
			wxCheckBox* m_checkBox_loginonly;
			wxCheckBox* m_checkBox_foldersizes;
			wxCheckBox* m_checkBox_foldersonly;
			wxButton* m_button_syncabort;
			wxGauge* m_gauge_progress;
			wxStatusBar* m_statusBar;
			wxMenu* m_menu_file;
			wxMenu* m_menu_about;

			// Virtual event handlers, overide them in your derived class
			virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
			virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }


		public:
			wxMenuBar* m_menubar;

			MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("IMAP Sync GUI  -  by petrockblock.com"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 473,466 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrame();

	};

} // namespace ui

