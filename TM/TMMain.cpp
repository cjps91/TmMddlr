/***************************************************************
 * Name:      TMMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    iCarlos ()
 * Created:   2018-01-27
 * Copyright: iCarlos ()
 * License:
 **************************************************************/

#include "TMMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(TMFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(TMFrame)
const long TMFrame::ID_BUTTON1 = wxNewId();
const long TMFrame::ID_BUTTON2 = wxNewId();
const long TMFrame::ID_BUTTON3 = wxNewId();
const long TMFrame::ID_BUTTON4 = wxNewId();
const long TMFrame::ID_BUTTON5 = wxNewId();
const long TMFrame::ID_BUTTON6 = wxNewId();
const long TMFrame::ID_MENUITEM1 = wxNewId();
const long TMFrame::Acercade = wxNewId();
const long TMFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TMFrame,wxFrame)
    //(*EventTable(TMFrame)
    //*)
END_EVENT_TABLE()

TMFrame::TMFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(TMFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;

    Create(parent, wxID_ANY, _("TimeMeddler"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(350,250));
    SetMinSize(wxSize(350,250));
    SetFocus();
    SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVEBORDER));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(8,-136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Trabajo"), wxPoint(136,72), wxSize(75,50), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetBackgroundColour(wxColour(0,255,0));
    wxFont Button2Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Gill Sans MT Condensed"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    Button3 = new wxButton(this, ID_BUTTON3, _("Procrastinaci�n"), wxPoint(208,128), wxSize(100,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetBackgroundColour(wxColour(255,255,0));
    wxFont Button3Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Gill Sans MT Condensed"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    Button4 = new wxButton(this, ID_BUTTON4, _("Descanso"), wxPoint(72,128), wxSize(70,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button4->SetBackgroundColour(wxColour(0,128,255));
    wxFont Button4Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Gill Sans MT Condensed"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    Button5 = new wxButton(this, ID_BUTTON5, _("STOP"), wxPoint(144,16), wxSize(60,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button5->SetBackgroundColour(wxColour(255,0,0));
    wxFont Button5Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Gill Sans MT Condensed"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button6 = new wxButton(this, ID_BUTTON6, _("Visualizador"), wxPoint(256,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, Acercade, _("Acercade1\tAlt-\?"), _("Menu de acerca de"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnButton2Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnButton5Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnQuit);
    //*)
}

TMFrame::~TMFrame()
{
    //(*Destroy(TMFrame)
    //*)
}

void TMFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void TMFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


void TMFrame::OnButton1Click(wxCommandEvent& event)
{
}

void TMFrame::OnButton2Click(wxCommandEvent& event)
{
}

void TMFrame::OnButton5Click(wxCommandEvent& event)
{
}
