#pragma once
#include "wx\wx.h"
#include "Window.h"
class SWE_App : public wxApp
{

	Window* window = nullptr;

    public: 

		virtual bool OnInit();


};

