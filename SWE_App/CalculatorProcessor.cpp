#include "CalculatorProcessor.h"
#include <cmath>
#include <stack>
#include <iostream>

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance() {

	if (_calculatorProcessor == nullptr)
	{
		_calculatorProcessor = new CalculatorProcessor();

	}

	return _calculatorProcessor;

}



int CalculatorProcessor::Mod(int num1, int num2)
{

	return num1 % num2;
};

float CalculatorProcessor::Sin(float num)
{

	return sin(num);
};

float CalculatorProcessor::Cos(float num)
{

	return cos(num);
};

float CalculatorProcessor::Tan(float num)
{

	return tan(num);
};

double CalculatorProcessor::Opp(std::string  exp)
{

    std::stack<double> operands;

    std::stack<char> operators;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];

       
        if (isdigit(c)) {
            std::string operand_string;
            while (i < exp.length() && isdigit(exp[i])) {
                operand_string += exp[i];
                i++;
            }
            i--;
            operands.push(std::stod(operand_string));
        }
      
        else {
            while (!operators.empty() && (operators.top() == '*' || operators.top() == '/' || operators.top() == '+' || operators.top() == '-')) {
                double op2 = operands.top();
                operands.pop();
                double op1 = operands.top();
                operands.pop();

                char op = operators.top();
                operators.pop();

                if (op == '*') {
                    operands.push(op1 * op2);
                }
                else if (op == '/') {
                    operands.push(op1 / op2);
                }
                else if (op == '+') {
                    operands.push(op1 + op2);
                }
                else if (op == '-') {
                    operands.push(op1 - op2);
                }
            }
            operators.push(c);
        }
    }

    
    while (!operators.empty()) {
        double op2 = operands.top();
        operands.pop();
        double op1 = operands.top();
        operands.pop();

        char op = operators.top();
        operators.pop();

        if (op == '*') {
            operands.push(op1 * op2);
        }
        else if (op == '/') {
            operands.push(op1 / op2);
        }
        else if (op == '+') {
            operands.push(op1 + op2);
        }
        else if (op == '-') {
            operands.push(op1 - op2);
        }
    }

    return operands.top();
};

