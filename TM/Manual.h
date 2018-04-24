#ifndef MANUAL_H
#define MANUAL_H

//(*Headers(Manual)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
//*)

class Manual: public wxDialog
{
	public:

		Manual(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Manual();

		//(*Declarations(Manual)
		wxButton* Button1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBox* StaticBox1;
		wxStaticBox* StaticBox2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(Manual)
		static const long ID_STATICBOX1;
		static const long ID_BUTTON1;
		static const long ID_STATICBOX2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICBITMAP1;
		//*)

	private:

		//(*Handlers(Manual)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
