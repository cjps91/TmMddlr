#include "Acerca_de.h"

//(*InternalHeaders(Acerca_de)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Acerca_de)
const long Acerca_de::ID_HYPERLINKCTRL1 = wxNewId();
const long Acerca_de::ID_BUTTON1 = wxNewId();
const long Acerca_de::ID_STATICBITMAP1 = wxNewId();
const long Acerca_de::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Acerca_de,wxDialog)
	//(*EventTable(Acerca_de)
	//*)
END_EVENT_TABLE()

Acerca_de::Acerca_de(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Acerca_de)
	Create(parent, wxID_ANY, _("Acerca de TimeMeddler"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(320,492));
	SetMinSize(wxSize(320,420));
	SetMaxSize(wxSize(320,420));
	SetFocus();
	HyperlinkCtrl1 = new wxHyperlinkCtrl(this, ID_HYPERLINKCTRL1, _("https://thetimemeddler.wordpress.com/"), wxEmptyString, wxPoint(64,344), wxDefaultSize, wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE|wxNO_BORDER, _T("ID_HYPERLINKCTRL1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Aceptar"), wxPoint(104,376), wxSize(112,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\Hannibal\\Desktop\\PROYECTOS\\TmMddlr\\TM\\bin\\Release\\images\\gnu.png")).Rescale(wxSize(120,168).GetWidth(),wxSize(120,168).GetHeight())), wxPoint(96,16), wxSize(120,168), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("TimeMeddler es Sotfware Libre\ndistribuido con licencia GNU\n\nAutores:\nCarlos Pérez Sánchez\nAejandro Vizcaino Castilla\nOscar Chaves Navarro\n"), wxPoint(64,200), wxSize(192,128), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Acerca_de::OnButton1Click);
	//*)
}

Acerca_de::~Acerca_de()
{
	//(*Destroy(Acerca_de)
	//*)
}


void Acerca_de::OnButton1Click(wxCommandEvent& event)
{
    Close();
}
