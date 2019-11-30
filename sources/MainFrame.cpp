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

	wxStaticBoxSizer* sbSizer_source;
	sbSizer_source = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("IMAP Source Mailbox") ), wxVERTICAL );

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


	bSizer3->Add( sbSizer_source, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxStaticBoxSizer* sbSizer_destination;
	sbSizer_destination = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("IMAP Destination Mailbox") ), wxVERTICAL );

	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText11 = new wxStaticText( sbSizer_destination->GetStaticBox(), wxID_ANY, wxT("Login Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer11->Add( m_staticText11, 0, wxALL, 5 );

	destination_name_ = new wxTextCtrl( sbSizer_destination->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_name_, 0, wxALL|wxEXPAND, 5 );

	m_staticText21 = new wxStaticText( sbSizer_destination->GetStaticBox(), wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer11->Add( m_staticText21, 0, wxALL, 5 );

	destination_password_ = new wxTextCtrl( sbSizer_destination->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_password_, 0, wxALL|wxEXPAND, 5 );

	m_staticText31 = new wxStaticText( sbSizer_destination->GetStaticBox(), wxID_ANY, wxT("Server"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	gSizer11->Add( m_staticText31, 0, wxALL, 5 );

	destination_server_ = new wxTextCtrl( sbSizer_destination->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gSizer11->Add( destination_server_, 0, wxALL|wxEXPAND, 5 );


	sbSizer_destination->Add( gSizer11, 1, wxEXPAND, 5 );


	bSizer3->Add( sbSizer_destination, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxStaticBoxSizer* sbSizer_parameters;
	sbSizer_parameters = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Parameters") ), wxVERTICAL );

	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBox_dryrun = new wxCheckBox( sbSizer_parameters->GetStaticBox(), wxID_ANY, wxT("Dry run"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gbSizer1->Add( m_checkBox_dryrun, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_checkBox_loginonly = new wxCheckBox( sbSizer_parameters->GetStaticBox(), wxID_ANY, wxT("Login only"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gbSizer1->Add( m_checkBox_loginonly, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_checkBox_foldersizes = new wxCheckBox( sbSizer_parameters->GetStaticBox(), wxID_ANY, wxT("Just folder sizes"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gbSizer1->Add( m_checkBox_foldersizes, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_checkBox_foldersonly = new wxCheckBox( sbSizer_parameters->GetStaticBox(), wxID_ANY, wxT("Sync folders only"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	gbSizer1->Add( m_checkBox_foldersonly, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );


	sbSizer_parameters->Add( gbSizer1, 1, wxEXPAND, 5 );


	bSizer3->Add( sbSizer_parameters, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	m_button_syncabort = new wxButton( this, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button_syncabort, 0, wxALL|wxEXPAND, 5 );

	m_gauge_progress = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH );
	m_gauge_progress->SetValue( 0 );
	bSizer3->Add( m_gauge_progress, 0, wxALL|wxEXPAND, 5 );


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
}

MainFrame::~MainFrame()
{
	// Disconnect Events

}
