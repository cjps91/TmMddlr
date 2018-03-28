#ifndef VISUALIZARJORNADA_H
#define VISUALIZARJORNADA_H

//(*Headers(VisualizarJornada)
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
//*)

class VisualizarJornada: public wxFrame
{
	public:

		VisualizarJornada(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~VisualizarJornada();

		//(*Declarations(VisualizarJornada)
		wxListView* ListView1;
		wxPanel* Panel1;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		//*)

	protected:

		//(*Identifiers(VisualizarJornada)
		static const long ID_LISTVIEW1;
		static const long ID_STATICBOX1;
		static const long ID_STATICBOX2;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(VisualizarJornada)
		void OnPanel1Paint(wxPaintEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnListView1BeginDrag(wxListEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
