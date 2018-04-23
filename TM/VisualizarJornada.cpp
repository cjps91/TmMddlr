#include "VisualizarJornada.h"

//(*InternalHeaders(VisualizarJornada)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(VisualizarJornada)
const long VisualizarJornada::ID_LISTVIEW1 = wxNewId();
const long VisualizarJornada::ID_STATICBOX1 = wxNewId();
const long VisualizarJornada::ID_STATICBOX2 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT1 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT2 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT3 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT4 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT5 = wxNewId();
const long VisualizarJornada::ID_STATICTEXT6 = wxNewId();
const long VisualizarJornada::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(VisualizarJornada,wxFrame)
	//(*EventTable(VisualizarJornada)
	//*)
END_EVENT_TABLE()

VisualizarJornada::VisualizarJornada(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(VisualizarJornada)
	Create(parent, wxID_ANY, _("TimeMeddler - Visor"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(640,412));
	SetFocus();
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T(".\\images\\icon.png"))));
		SetIcon(FrameIcon);
	}
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(144,168), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	ListView1 = new wxListView(Panel1, ID_LISTVIEW1, wxPoint(40,32), wxSize(552,200), wxLC_REPORT|wxLC_AUTOARRANGE, wxDefaultValidator, _T("ID_LISTVIEW1"));
	StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("VISOR DE TIEMPOS DE LA JORNADA"), wxPoint(8,8), wxSize(624,232), 0, _T("ID_STATICBOX1"));
	StaticBox2 = new wxStaticBox(Panel1, ID_STATICBOX2, _("RESULTADO"), wxPoint(8,240), wxSize(624,152), 0, _T("ID_STATICBOX2"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Porcentaje de Trabajo"), wxPoint(56,272), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Porcentaje de Descanso"), wxPoint(56,312), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Porcentaje de Procastinacion "), wxPoint(56,352), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("0%"), wxPoint(216,272), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("0%"), wxPoint(216,312), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("0%"), wxPoint(216,352), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	Center();
	//*)

    ListView1->AppendColumn("Nombre");
    ListView1->AppendColumn("Tipo");
    ListView1->AppendColumn("Tiempo");
    ListView1->AppendColumn("F. Inicio");
    ListView1->AppendColumn("F. Fin");
}

VisualizarJornada::~VisualizarJornada()
{
	//(*Destroy(VisualizarJornada)
	//*)
}


