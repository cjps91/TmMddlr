/***************************************************************
 * Name:      TMMain.h
 * Purpose:   Defines Application Frame
 * Author:    iCarlosPro ()
 * Created:   2018-01-26
 * Copyright: iCarlosPro ()
 * License:
 **************************************************************/

#ifndef TMMAIN_H
#define TMMAIN_H

//(*Headers(TMFrame)
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

        //(*Handlers(TMFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(TMFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TMFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TMMAIN_H
