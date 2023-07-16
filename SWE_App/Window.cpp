#include <wx/string.h>
#include "Window.h"
#include <cstring>
#include <iostream>
#include <wx/tokenzr.h>
#include <wx/textctrl.h>
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(2,Window::OnButtonClick)
EVT_BUTTON(3, Window::OnButtonClick)
EVT_BUTTON(4, Window::OnButtonClick)
EVT_BUTTON(5, Window::OnButtonClick)
EVT_BUTTON(6, Window::OnButtonClick)
EVT_BUTTON(7, Window::OnButtonClick)
EVT_BUTTON(8, Window::OnButtonClick)
EVT_BUTTON(9, Window::OnButtonClick)
EVT_BUTTON(10, Window::OnButtonClick)
EVT_BUTTON(11, Window::OnButtonClick)
EVT_BUTTON(12, Window::OnButtonClick)
EVT_BUTTON(13, Window::OnButtonClick)
EVT_BUTTON(14, Window::OnButtonClick)
EVT_BUTTON(15, Window::OnButtonClick)
EVT_BUTTON(16, Window::OnButtonClick)
EVT_BUTTON(17, Window::OnButtonClick)
EVT_BUTTON(18, Window::OnButtonClick)
EVT_BUTTON(19, Window::OnButtonClick)
EVT_BUTTON(20, Window::OnButtonClick)
EVT_BUTTON(21, Window::OnButtonClick)
EVT_BUTTON(22, Window::OnButtonClick)
EVT_BUTTON(23, Window::OnButtonClick)
EVT_BUTTON(24, Window::OnButtonClick)

wxEND_EVENT_TABLE()


CalculatorProcessor* operation = CalculatorProcessor::GetInstance();
float result = 0;
Window::Window() :
	wxFrame(nullptr, 0,"Calculator", wxPoint(400, 200), wxSize(416, 390))
{
	wxFont f(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	textInput = new wxTextCtrl(this, 1, "", wxPoint(0, 0), wxSize(400,50));
	textInput->SetFont(f);
	zeroButton = ButtonFactory::CreateZeroButton(this, 2, "0", wxPoint(0, 50), wxSize(100, 50));
	oneButton = ButtonFactory::CreateButtonOne(this, 3, "1", wxPoint(100, 50), wxSize(100, 50)); 
	twoButton = ButtonFactory::CreateButtonTwo(this, 4, "2", wxPoint(200, 50), wxSize(100, 50));
	threeButton = ButtonFactory::CreateButtonThree(this, 5, "3", wxPoint(0, 100), wxSize(100, 50));
	fourButton = ButtonFactory::CreateButtonFour(this, 6, "4", wxPoint(100, 100), wxSize(100, 50));
	fiveButton = ButtonFactory::CreateButtonFive(this, 7, "5", wxPoint(200, 100), wxSize(100, 50));
	sixButton = ButtonFactory::CreateButtonSix(this, 8, "6", wxPoint(0, 150), wxSize(100, 50));
	sevenButton = ButtonFactory::CreateButtonSeven(this, 9, "7", wxPoint(100, 150), wxSize(100, 50));
	eightButton = ButtonFactory::CreateButtonEight(this, 10, "8", wxPoint(200, 150), wxSize(100, 50));
	nineButton = ButtonFactory::CreateButtonNine(this, 11, "9", wxPoint(0, 200), wxSize(100, 50));
	equalsButton = ButtonFactory::CreateEqualsButton(this, 12, "=", wxPoint(200, 200), wxSize(100, 50));
	negativeButton = ButtonFactory::CreateNegButton(this, 13, "-( )", wxPoint(100, 200), wxSize(100, 50));
	cButton = ButtonFactory::CreateClearButton(this, 14, "C", wxPoint(300, 50), wxSize(100, 50));
	addButton = ButtonFactory::CreateAddButton(this, 15, "+", wxPoint(300, 100), wxSize(100, 50));
	subtractButton = ButtonFactory::CreateSubButton(this, 16, "-", wxPoint(300, 150), wxSize(100, 50));
	multiplyButton = ButtonFactory::CreateMultiButton(this, 17, "*", wxPoint(300, 200), wxSize(100, 50));
	divideButton = ButtonFactory::CreateDivideButton(this, 18, "/", wxPoint(300, 250), wxSize(100, 50));
	modButton = ButtonFactory::CreateModButton(this, 19, "%", wxPoint(200, 250), wxSize(100, 50));
	dotButton = ButtonFactory::CreateDotsButton(this, 20, ".", wxPoint(100, 250), wxSize(100, 50));
	backspaceButton = ButtonFactory::CreateBackButton(this, 21, "<-", wxPoint(0, 250), wxSize(100, 50));
	sinButton = ButtonFactory::CreateSinButton(this, 22, "sin", wxPoint(0, 300), wxSize(100, 50));
	cosButton = ButtonFactory::CreateCosButton(this, 23, "cos", wxPoint(100, 300), wxSize(100, 50));
	tanButton = ButtonFactory::CreateTanButton(this, 24, "tan", wxPoint(200, 300), wxSize(100, 50));
	
	negativeButton->Disable();
	
}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	
	int charLength = textInput->GetLastPosition();
	int id = evt.GetId();
	std::string s = textInput->GetValue().ToStdString();
	

	switch (id)
	{

	case 2:
		textInput->AppendText("0");
		break;
	case 3:
		textInput->AppendText("1");
		break;
	case 4:
		textInput->AppendText("2");
		break;
	case 5:
		textInput->AppendText("3");
		break;
	case 6:
		textInput->AppendText("4");
		break;
	case 7:
		textInput->AppendText("5");
		break;
	case 8:
		textInput->AppendText("6");
		break;
	case 9:
		textInput->AppendText("7");
		break;
	case 10:
		textInput->AppendText("8");
		break;
	case 11:
		textInput->AppendText("9");
		break;
	case 12:
		if (!s.empty()) {
			textInput->SetValue(std::to_string(operation->Opp(s)));

		}
		break;
	case 13:

		break;
	case 14:
		textInput->Clear();
		break;
	case 15:
		textInput->AppendText("+");
		break;
	case 16:
		textInput->AppendText("-");
		break;

	case 17:
		textInput->AppendText("*");
		break;
	case 18:
		textInput->AppendText("/");
		break;
	case 19:
		textInput->AppendText("%");
		break;
	case 20:
		textInput->AppendText(".");
		break;
	case 21:

		textInput->Remove(charLength - 1, charLength);
		break;
	case 22:
		
		if (!s.empty()) {
			double value_in_radians = std::stof(s) * M_PI / 180;
			result = operation->Sin(value_in_radians);


			textInput->SetValue(std::to_string(result));
		}
			
				
	
		break;
	case 23:
		if (!s.empty()) {
			double value_in_radians = std::stof(s) * M_PI / 180;
			result = operation->Cos(value_in_radians);

			
			textInput->SetValue(std::to_string(result));
		}
		
		break;
	case 24:
		if (!s.empty()) {
			double value_in_radians = std::stof(s) * M_PI / 180;
			result = operation->Tan(value_in_radians);

			textInput->SetValue(std::to_string(result));
		}
		
		break;

	default:
		break;

	}

	
	
	

	
}


