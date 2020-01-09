			// the task
//  What happens if you draw a shape?
// window ? What happens if you draw a window ?
// on the screen ? Write two programs illustrating these effects.

#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 4654 , 2160, "My window" }; // Простое окно

	Rectangle_BS r1{ Point{0 ,100} , 5280 , 300 }; // Левый верхний угол, ширина , высота
	win.attach(r1);
	r1.set_fill_color(Color::yellow);

	Rectangle_BS r2{ Point{340 ,2260} , 1280 , 300 }; // Левый верхний угол, ширина , высота
	win.attach(r2);
	r2.set_color(Color::red);
	r2.set_style(Line_style(Line_style::solid, 30.5));
	win.wait_for_button();

};