#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
	
	wxButton* zeroButton = nullptr;
	wxButton* oneButton = nullptr;
	wxButton* twoButton = nullptr;
	wxButton* threeButton = nullptr;
	wxButton* fourButton = nullptr;
	wxButton* fiveButton = nullptr;
	wxButton* sixButton = nullptr;
	wxButton* sevenButton = nullptr;
	wxButton* eightButton = nullptr;
	wxButton* nineButton = nullptr;
	wxButton* equalsButton = nullptr;
	wxButton* addButton = nullptr;
	wxButton* subtractButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* cButton = nullptr;
	wxButton* backspaceButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* dotButton = nullptr;
	wxButton* sinButton = nullptr;
	wxButton* cosButton = nullptr;
	wxButton* tanButton = nullptr;
	wxButton* negativeButton = nullptr;
	wxTextCtrl* textInput = nullptr;

public:
	Window();
	void OnButtonClick(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();


	

};

static class ButtonFactory
{
public:

	

	static wxButton* CreateZeroButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateButtonOne(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonTwo(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonThree(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonFour(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonFive(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonSix(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonSeven(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateButtonEight(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateButtonNine(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateEqualsButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateNegButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateClearButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateAddButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateSubButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateMultiButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateDivideButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateDotsButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}


	static wxButton* CreateModButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}

	static wxButton* CreateBackButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateTanButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateSinButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
	static wxButton* CreateCosButton(wxWindow* parent, int id, const wxString& label, const wxPoint& pos, const wxSize& size)
	{
		return new wxButton(parent, id, label, pos, size);
	}
};


 




