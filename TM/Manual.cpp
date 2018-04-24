#include "Manual.h"

//(*InternalHeaders(Manual)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Manual)
const long Manual::ID_STATICBOX1 = wxNewId();
const long Manual::ID_BUTTON1 = wxNewId();
const long Manual::ID_STATICBOX2 = wxNewId();
const long Manual::ID_TEXTCTRL1 = wxNewId();
const long Manual::ID_STATICBITMAP1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Manual,wxDialog)
	//(*EventTable(Manual)
	//*)
END_EVENT_TABLE()

Manual::Manual(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Manual)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(493,592));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Manual"), wxPoint(16,16), wxSize(464,248), 0, _T("ID_STATICBOX1"));
	Button1 = new wxButton(this, ID_BUTTON1, _("Cerrar"), wxPoint(208,528), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Atajos de teclado"), wxPoint(16,272), wxSize(464,232), 0, _T("ID_STATICBOX2"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("�ndice\n1. Introducci�n\n1.1 �Qu� es TimeMeddler\?\n1.2 Fundamentos b�sicos\n2. Operaciones b�sicas\n3. Comentarios\n1. Introducci�n\n\n1.1 �Qu� es TimeMeddler\?\nTimeMeddler es una sencilla herramienta para controlar el tiempo de trabajo, descanso y\nprocrastinaci�n. Ha sido concebida para facilitar la gesti�n del tiempo de forma\ntotalmente transparente para el usuario y sin comprometer su privacidad.\nLa privacidad es una prioridad.\n\n1.2 Fundamentos b�sicos\n\nSe definen 3 estados posibles:\nTrabajo: El usuario est� desarrollando una actividad productiva relacionada con su\nprofesi�n. \nDescanso: El usuario no desarrolla actividad alguna.\nProcrastinaci�n: El usuario desarrolla actividades no productivas en horario que se supone de trabajo.\nLa herramienta recopilar� esos datos, pero bajo ning�n concepto saldr�n de su equipo ni ser�n empleados por empresas externas.\n\nLos datos recopilados se usar�n para analizar la productividad, el descanso y la felicidad del usuario, en funci�n de una serie de m�tricas.\n\nEl funcionamiento normal de TimeMeddler viene dado en la siguiente secuencia:\n\n1. Iniciar Jornada. Simplemente pulsar el tipo de actividad que se vaya a realizar.\n2. Cambiar de Tipo de Actividad. Pulsar un tipo de actividad diferente a la actual.\n3. Fin de Jornada. Pulsar el bot�n de Stop.\n4. Revisi�n de Jornada. Pulsar el Visor para ver el informe sobre la jornada.\n\nUna jornada no podr� ser revisada salvo que esta haya finalizado.\n\n3. Comentarios\nPuede que algunas funciones no se encuentren disponibles en el momento de lectura de este manual."), wxPoint(64,56), wxSize(376,192), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("images/Atajos.png")).Rescale(wxSize(376,192).GetWidth(),wxSize(376,192).GetHeight())), wxPoint(64,296), wxSize(376,192), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Manual::OnButton1Click);
	//*)
}

Manual::~Manual()
{
	//(*Destroy(Manual)
	//*)
}


void Manual::OnButton1Click(wxCommandEvent& event)
{
    Close();
}
