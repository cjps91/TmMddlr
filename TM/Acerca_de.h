#ifndef ACERCA_DE_H
#define ACERCA_DE_H

//(*Headers(Acerca_de)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/hyperlink.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Acerca_de: public wxDialog
{
	public:

		Acerca_de(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Acerca_de();

		//(*Declarations(Acerca_de)
		wxButton* Button1;
		wxHyperlinkCtrl* HyperlinkCtrl1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Acerca_de)
		static const long ID_HYPERLINKCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Acerca_de)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
