//Menu inicial do pip-boy
//Chama .h
#include "Initial-Menu.h"

#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

using namespace ftxui;

int InitialMenu() {

	auto screen = Screen::Create(
		ftxui::Dimension::Full(),   // Use full terminal width
		ftxui::Dimension::Fixed(10) // Fixed height of 10 rows
	);

	auto& cell = screen.CellAt(3, 3);
	cell.character = "Testando cores de texto";
	cell.bold = true;
	cell.foreground_color = ftxui::Color::Green1;

	screen.Print();

	return 0;
}