#pragma once
#include <wx/string.h>
#include "Window.h"
#include <cstring>
#include <iostream>
#include <wx/tokenzr.h>
#include <wx/textctrl.h>
#include <vector>
#include <cmath>

class CalculatorProcessor
{
private:
	static CalculatorProcessor* _calculatorProcessor;
	
	CalculatorProcessor() {}

public:
	CalculatorProcessor(CalculatorProcessor* other) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor& other) = delete;

	static CalculatorProcessor* GetInstance();
	
	

	int Mod(int num1, int num2);
	float Sin(float num);
	float Cos(float num);
	float Tan(float num);
	double Opp(std::string  exp);
};

