/***************************************************************
 * Name:      TMMain.h
 * Purpose:   Defines Application Frame
 * Author:    iCarlos ()
 * Created:   2018-01-27
 * Copyright: iCarlos ()
 * License:
 **************************************************************/

#ifndef TMMAIN_H
#define TMMAIN_H

//(*Headers(TMFrame)
#include <wx/bmpbuttn.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
//*)

#include "VisualizarJornada.h"
#include "FileHandler.h"
#include "ActivityHandler.h"
#include "Acerca_de.h"

class TMFrame: public wxFrame
{
    public:

        TMFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~TMFrame();

    private:

        vector<actividad> actividades;
        FileHandler *fh;
        ActivityHandler *ah;
        VisualizarJornada *VJ;
        Acerca_de *About;

        //(*Handlers(TMFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBotonProcrastClick(wxCommandEvent& event);
        void OnBotonDescansoClick(wxCommandEvent& event);
        void OnBotonVisualizadorClick(wxCommandEvent& event);
        void OnBotonTrabajoClick(wxCommandEvent& event);
        void OnMenuItem5Selected(wxCommandEvent& event);
        void OnMenuGuardarJornadaSelected(wxCommandEvent& event);
        void OnMenuAboutSelected(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnBotonTrabajoClick1(wxCommandEvent& event);
        void OnBitmapButton2Click(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnBitmapButton3Click(wxCommandEvent& event);
        void OnBitmapButton4Click(wxCommandEvent& event);
        void OnBotonStopClick(wxCommandEvent& event);
        void OnBotonVisorClick(wxCommandEvent& event);
        void OnBotonProcastinacionClick(wxCommandEvent& event);
        void OnBotonDescansoClick1(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnClose1(wxCloseEvent& event);
        void OnMenuNuevaJornadaSelected(wxCommandEvent& event);
        //*)

        //(*Identifiers(TMFrame)
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON5;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_PANEL1;
        static const long id_Nueva_Jornada;
        static const long id_Guardar_Jornada;
        static const long id_Salir;
        static const long ID_MENUITEM1;
        static const long id_Mostrar_Historico;
        static const long id_Manual;
        static const long Acercade;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TMFrame)
        wxBitmapButton* BotonDescanso;
        wxBitmapButton* BotonProcastinacion;
        wxBitmapButton* BotonStop;
        wxBitmapButton* BotonTrabajo;
        wxBitmapButton* BotonVisor;
        wxMenu* MenuDatos;
        wxMenuItem* MenuItem2;
        wxMenuItem* MenuItem3;
        wxMenuItem* MenuItem4;
        wxMenuItem* MenuItem5;
        wxMenuItem* MenuItem6;
        wxMenuItem* MenuItem7;
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TMMAIN_H
