/***************************************************************
 * Name:      TMApp.cpp
 * Purpose:   Code for Application Class
 * Author:    iCarlos ()
 * Created:   2018-01-27
 * Copyright: iCarlos ()
 * License:
 **************************************************************/

#include "TMApp.h"

//(*AppHeaders
#include "TMMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(TMApp);

bool TMApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	TMFrame* Frame = new TMFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
