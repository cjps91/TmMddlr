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
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class TMFrame: public wxFrame
{


    public:

        TMFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~TMFrame();

    private:

        vector<actividad> *actividades;
        FileHandler *fh;
        ActivityHandler *ah;

        //(*Handlers(TMFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(TMFrame)
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_MENUITEM1;
        static const long Acercade;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TMFrame)
        wxButton* BotonDescanso;
        wxButton* BotonProcrast;
        wxButton* BotonStop;
        wxButton* BotonTrabajo;
        wxButton* BotonVisualizador;
        wxMenuItem* MenuItem2;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TMMAIN_H
