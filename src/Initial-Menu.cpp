//Menu inicial do pip-boy

#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

using namespace ftxui;

static int Initialmenu() {

	Element document = hbox({
		text("left") | border
	});

	auto screen = Screen::Create(
		Dimension::Full(),       // Width
		Dimension::Fit(document) // Height
	);

	Render(screen, document);

	screen.Print();

	return 0;
}


