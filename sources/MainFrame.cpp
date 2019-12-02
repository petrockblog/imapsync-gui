///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainFrame.h"

///////////////////////////////////////////////////////////////////////////
using namespace ui;

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 473,398 ), wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_LIVE_UPDATE|wxSP_THIN_SASH );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( MainFrame::m_splitter1OnIdle ), NULL, this );
	m_splitter1->SetMinimumPaneSize( 20 );

	m_panel1 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_source;
	sbSizer_source = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxT("IMAP Source Mailbox") ), wxVERTICAL );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText1 = new wxStaticText( sbSizer_source->GetStaticBox(), wxID_ANY, wxT("Login Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	gSizer1->Add( m_staticText1, 0, wxALL, 5 );

	source_name_ = new wxTextCtrl( sbSizer_source->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer1->Add( source_name_, 0, wxALL|wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( sbSizer_source->GetStaticBox(), wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gSizer1->Add( m_staticText2, 0, wxALL, 5 );

	source_password_ = new wxTextCtrl( sbSizer_source->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTAB_TRAVERSAL );
	gSizer1->Add( source_password_, 0, wxALL|wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( sbSizer_source->GetStaticBox(), wxID_ANY, wxT("Server"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	gSizer1->Add( m_staticText3, 0, wxALL, 5 );

	source_server_ = new wxTextCtrl( sbSizer_source->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer1->Add( source_server_, 0, wxALL|wxEXPAND, 5 );


	sbSizer_source->Add( gSizer1, 1, wxEXPAND, 5 );


	bSizer8->Add( sbSizer_source, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_destinatino;
	sbSizer_destinatino = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxT("IMAP Destination Mailbox") ), wxVERTICAL );

	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText11 = new wxStaticText( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxT("Login Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer11->Add( m_staticText11, 0, wxALL, 5 );

	destination_name_ = new wxTextCtrl( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_name_, 0, wxALL|wxEXPAND, 5 );

	m_staticText21 = new wxStaticText( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer11->Add( m_staticText21, 0, wxALL, 5 );

	destination_password_ = new wxTextCtrl( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_password_, 0, wxALL|wxEXPAND, 5 );

	m_staticText31 = new wxStaticText( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxT("Server"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	gSizer11->Add( m_staticText31, 0, wxALL, 5 );

	destination_server_ = new wxTextCtrl( sbSizer_destinatino->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_server_, 0, wxALL|wxEXPAND, 5 );


	sbSizer_destinatino->Add( gSizer11, 1, wxEXPAND, 5 );


	bSizer8->Add( sbSizer_destinatino, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxT("Parameters") ), wxHORIZONTAL );

	m_checkBox_dryrun = new wxCheckBox( sbSizer11->GetStaticBox(), wxID_ANY, wxT("Dry run"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer11->Add( m_checkBox_dryrun, 0, wxALL, 5 );

	m_checkBox_loginonly = new wxCheckBox( sbSizer11->GetStaticBox(), wxID_ANY, wxT("Login only"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer11->Add( m_checkBox_loginonly, 0, wxALL, 5 );

	m_checkBox_foldersizes = new wxCheckBox( sbSizer11->GetStaticBox(), wxID_ANY, wxT("Folder sizes only"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer11->Add( m_checkBox_foldersizes, 0, wxALL, 5 );

	m_checkBox_foldersonly = new wxCheckBox( sbSizer11->GetStaticBox(), wxID_ANY, wxT("Sync folders only"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer11->Add( m_checkBox_foldersonly, 0, wxALL, 5 );


	bSizer8->Add( sbSizer11, 1, wxALIGN_CENTER|wxEXPAND, 5 );

	m_button_syncabort1 = new wxButton( m_panel1, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button_syncabort1, 0, wxALL|wxEXPAND, 5 );

	m_gauge_progress1 = new wxGauge( m_panel1, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH );
	m_gauge_progress1->SetValue( 0 );
	bSizer8->Add( m_gauge_progress1, 0, wxALL|wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer8 );
	m_panel1->Layout();
	bSizer8->Fit( m_panel1 );
	m_panel2 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_text_log_ = new wxHtmlWindow( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	bSizer2->Add( m_text_log_, 0, wxALIGN_BOTTOM|wxALIGN_LEFT|wxALIGN_RIGHT|wxALIGN_TOP|wxEXPAND, 5 );


	m_panel2->SetSizer( bSizer2 );
	m_panel2->Layout();
	bSizer2->Fit( m_panel2 );
	m_splitter1->SplitHorizontally( m_panel1, m_panel2, 0 );
	bSizer3->Add( m_splitter1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();
	m_statusBar = this->CreateStatusBar( 2, wxSTB_SIZEGRIP, wxID_ANY );
	m_menubar = new wxMenuBar( 0 );
	m_menu_file = new wxMenu();
	wxMenuItem* m_menuItem_open;
	m_menuItem_open = new wxMenuItem( m_menu_file, wxID_OPEN, wxString( wxT("Load settings") ) + wxT('\t') + wxT("Ctrl+o"), wxT("Loads settings from a file"), wxITEM_NORMAL );
	m_menu_file->Append( m_menuItem_open );

	wxMenuItem* m_menuItem_save;
	m_menuItem_save = new wxMenuItem( m_menu_file, wxID_SAVE, wxString( wxT("Save settings") ) + wxT('\t') + wxT("Ctrl+s"), wxT("Saves the current settings to a file"), wxITEM_NORMAL );
	m_menu_file->Append( m_menuItem_save );

	m_menu_file->AppendSeparator();

	wxMenuItem* m_menuItem_preferences;
	m_menuItem_preferences = new wxMenuItem( m_menu_file, wxID_ANY, wxString( wxT("Preferences") ) + wxT('\t') + wxT("Ctrl+p"), wxT("Open preferences window"), wxITEM_NORMAL );
	m_menu_file->Append( m_menuItem_preferences );

	m_menu_file->AppendSeparator();

	wxMenuItem* m_menuItem_exit;
	m_menuItem_exit = new wxMenuItem( m_menu_file, wxID_EXIT, wxString( wxT("Close") ) + wxT('\t') + wxT("Ctrl+q"), wxT("Exits the program"), wxITEM_NORMAL );
	m_menu_file->Append( m_menuItem_exit );

	m_menubar->Append( m_menu_file, wxT("File") );

	m_menu_about = new wxMenu();
	wxMenuItem* m_menuItem_about;
	m_menuItem_about = new wxMenuItem( m_menu_about, wxID_ABOUT, wxString( wxT("Info") ) + wxT('\t') + wxT("F1"), wxEmptyString, wxITEM_NORMAL );
	m_menu_about->Append( m_menuItem_about );

	m_menubar->Append( m_menu_about, wxT("About") );

	this->SetMenuBar( m_menubar );


	this->Centre( wxBOTH );

	// Connect Events
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnOpen ), this, m_menuItem_open->GetId());
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnSave ), this, m_menuItem_save->GetId());
	m_menu_about->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::OnAbout ), this, m_menuItem_about->GetId());
}

MainFrame::~MainFrame()
{
	// Disconnect Events

}
