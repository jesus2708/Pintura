#include "stdafx.h"  //________________________________________ Pintura.cpp
#include "Pintura.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Pintura app;
	return app.BeginDialog(IDI_Pintura, hInstance);
}

void Pintura::Window_Open(Win::Event& e)
{
}

void Pintura::btConvertir_Click(Win::Event& e)
{
	double x = tbxGalones.DoubleValue;
	double y = 20.0;
	double resul = x*y;
	tbxLitros.DoubleValue = resul;
}

