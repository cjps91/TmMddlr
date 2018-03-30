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
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

//(*InternalHeaders(TMFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
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
const long TMFrame::ID_BITMAPBUTTON4 = wxNewId();
const long TMFrame::ID_BITMAPBUTTON1 = wxNewId();
const long TMFrame::ID_BITMAPBUTTON5 = wxNewId();
const long TMFrame::ID_BITMAPBUTTON2 = wxNewId();
const long TMFrame::ID_BITMAPBUTTON3 = wxNewId();
const long TMFrame::ID_PANEL1 = wxNewId();
const long TMFrame::id_Nueva_Jornada = wxNewId();
const long TMFrame::id_Guardar_Jornada = wxNewId();
const long TMFrame::id_Exportar = wxNewId();
const long TMFrame::id_Salir = wxNewId();
const long TMFrame::ID_MENUITEM1 = wxNewId();
const long TMFrame::id_Mostrar_Historico = wxNewId();
const long TMFrame::id_Manual = wxNewId();
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

    Create(parent, wxID_ANY, _("TimeMeddler"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxNO_BORDER, _T("wxID_ANY"));
    SetClientSize(wxSize(450,550));
    SetMinSize(wxSize(450,550));
    SetMaxSize(wxSize(-1,-1));
    SetFocus();
    SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVEBORDER));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\TM_icon.png"))));
    	SetIcon(FrameIcon);
    }
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(8,16), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BotonStop = new wxBitmapButton(Panel1, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\boton_stop.png"))), wxPoint(32,24), wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    BotonTrabajo = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\boton_trabajo.png"))), wxPoint(136,112), wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    BotonVisor = new wxBitmapButton(Panel1, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\boton_visor.png"))), wxPoint(320,24), wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    BotonDescanso = new wxBitmapButton(Panel1, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\boton_descanso.png"))), wxPoint(32,296), wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    BotonProcastinacion = new wxBitmapButton(Panel1, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\boton_procast.png"))), wxPoint(240,296), wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, id_Nueva_Jornada, _("Nueva Jornada"), _("Iniciar una nueva jornada"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem5 = new wxMenuItem(Menu1, id_Guardar_Jornada, _("Guardar Jornada"), _("Guarda la jornada actual"), wxITEM_NORMAL);
    Menu1->Append(MenuItem5);
    MenuItem8 = new wxMenuItem(Menu1, id_Exportar, _("Exportar a CSV"), _("Exportar a CSV"), wxITEM_NORMAL);
    Menu1->Append(MenuItem8);
    MenuItem1 = new wxMenuItem(Menu1, id_Salir, _("Salir\tAlt-F4"), _("Salir de la aplicación"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("Archivo"));
    MenuDatos = new wxMenu();
    MenuItem6 = new wxMenuItem(MenuDatos, ID_MENUITEM1, _("Mostrar Jornada"), wxEmptyString, wxITEM_NORMAL);
    MenuDatos->Append(MenuItem6);
    MenuItem7 = new wxMenuItem(MenuDatos, id_Mostrar_Historico, _("Cargar Historico"), wxEmptyString, wxITEM_NORMAL);
    MenuDatos->Append(MenuItem7);
    MenuBar1->Append(MenuDatos, _("Datos"));
    Menu2 = new wxMenu();
    MenuItem4 = new wxMenuItem(Menu2, id_Manual, _("Manual de Time Meddler"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(MenuItem4);
    MenuItem2 = new wxMenuItem(Menu2, Acercade, _("Acerca de\tAlt-\?"), _("Menu de acerca de"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Ayuda"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[3] = { -8, -8, -8 };
    int __wxStatusBarStyles_1[3] = { wxSB_NORMAL, wxSB_NORMAL, wxSB_NORMAL };
    StatusBar1->SetFieldsCount(3,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(3,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnBotonStopClick);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnBotonTrabajoClick);
    Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnBotonVisorClick);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnBotonDescansoClick1);
    Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TMFrame::OnBotonProcastinacionClick);
    Connect(id_Nueva_Jornada,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnMenuNuevaJornadaSelected);
    Connect(id_Guardar_Jornada,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnMenuGuardarJornadaSelected);
    Connect(id_Salir,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnQuit);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnBotonVisorClick);
    Connect(Acercade,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TMFrame::OnMenuAboutSelected);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&TMFrame::OnClose);
    //*)

    About = new Acerca_de(this);
    fh = new FileHandler(this->actividades);
    ah = new ActivityHandler(this->actividades);

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

void TMFrame::OnClose(wxCloseEvent& event){

        wxMessageBox("Hasta luego\nGracias por utilizar TimeMeddler.");
        delete(fh);
        delete(ah);
        Destroy();

}

void TMFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void TMFrame::OnMenuGuardarJornadaSelected(wxCommandEvent& event)
{
    fh->EscribirFichero(actividades,"prueba.dat");
}

void TMFrame::OnMenuAboutSelected(wxCommandEvent& event)
{
    About->Show();
}

void TMFrame::OnBotonStopClick(wxCommandEvent& event)
{
    ah->FinalizarJornada();
    BotonTrabajo->Disable();
    BotonDescanso->Disable();
    BotonProcastinacion->Disable();
    BotonVisor->Enable();
}

void TMFrame::OnBotonVisorClick(wxCommandEvent& event)
{
    VJ = new VisualizarJornada(this);
    VJ->Show();

    if(ah->cantidad_actividades() == 0){
        wxMessageBox("Aun no hay actividades.");
    }
    else{
        for(int i = 0 ; i < ah->cantidad_actividades() ; i++){
            VJ->ListView1->InsertItem(i,ah->mostrarNombre(i));
            VJ->ListView1->SetItem(i,1,ah->mostrarTipo(i));
            VJ->ListView1->SetItem(i,2,ah->mostrarTiempo(i));
            VJ->ListView1->SetItem(i,3,ah->mostrarFechaInicio(i));
            VJ->ListView1->SetItem(i,4,ah->mostrarFechaFin(i));
        }

        VJ->StaticText4->SetLabel(ah->porcentajeActividad(TRABAJO));
        VJ->StaticText5->SetLabel(ah->porcentajeActividad(DESCANSO));
        VJ->StaticText6->SetLabel(ah->porcentajeActividad(PROCRASTINACION));
    }
}

void TMFrame::OnBotonTrabajoClick(wxCommandEvent& event)
{
    BotonVisor->Disable();
    ah->cambiarActividad(TRABAJO);
    BotonTrabajo->Disable();
    BotonDescanso->Enable();
    BotonProcastinacion->Enable();
    //sndPlaySound(TEXT("sounds\\wine_glass.wav"),0);
    //PlaySound(TEXT("sounds\\wine_glass.wav"), NULL ,SND_ASYNC | SND_FILENAME);
    PlaySound(TEXT("sounds\\Wololo.wav"), NULL ,SND_ASYNC | SND_FILENAME);
}

void TMFrame::OnBotonProcastinacionClick(wxCommandEvent& event)
{
    BotonVisor->Disable();
    ah->cambiarActividad(PROCRASTINACION);
    BotonTrabajo->Enable();
    BotonDescanso->Enable();
    BotonProcastinacion->Disable();
}

void TMFrame::OnBotonDescansoClick1(wxCommandEvent& event)
{
    BotonVisor->Disable();
    ah->cambiarActividad(DESCANSO);
    BotonTrabajo->Enable();
    BotonDescanso->Disable();
    BotonProcastinacion->Enable();

}

void TMFrame::OnMenuNuevaJornadaSelected(wxCommandEvent& event)
{
    ah->ReiniciarJornada();
    BotonTrabajo->Enable();
    BotonDescanso->Enable();
    BotonProcastinacion->Enable();
}
