//
// CS2024 -- Assignment 4
// Exercise 8.19, Deitel & Deitel's "Visual C++ 2008: How to Program"
// main function that creates a Simpletron
//

#include <iostream>
#include <string>
#include <exception>
#include "SimpletronH.h"

#include "Bridges.h"
#include "DataSource.h"
#include "SymbolCollection.h"
#include "Symbol.h"

using namespace std;

// Main method to begin inputing and executing code.
int main (int argc, char *argv[])
{
	const string user_name = std::getenv("BRIDGES_USER_NAME");
	const string api_key = std::getenv("BRIDGES_API_KEY");

	auto br = new bridges::Bridges();

	br->initialize(1, user_name, api_key);
	br->setServer("clone");
<<<<<<< HEAD
	br->setVisualizeJSONFlag(true);
=======

	auto sl = new bridges::SymbolCollection();
	sl->addSymbol(new bridges::Symbol("circle"));
	br->setDataStructure(sl);
	br->visualize();
>>>>>>> 6a1a6ebd7fb74371f0f72c45bebbf52905429ad9

	try {
	Simpletron comp = Simpletron();
	comp.enterSML();
	comp.execute(br);
	} catch (const char* s) {
		cout << s;
	}

	cin.get();
}
