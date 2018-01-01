#include "PopUpWindow.h"
#include "AppWindow.h"


PopUpWindow::PopUpWindow()
{

}


PopUpWindow::~PopUpWindow()
{
}

void PopUpWindow::ShowWindow()
{

	AppWindow window;
	window.IndependentStart();
}
