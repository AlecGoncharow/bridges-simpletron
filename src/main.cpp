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
	string user_name;
	string api_key;
	int assignment = 1;
	if (argc > 1) {
		assignment = std::stoi(argv[1]);
	}
	if (argc > 3) {
		user_name = argv[2];
		api_key = argv[3];
	} else {
		user_name = std::getenv("BRIDGES_USER_NAME");
		api_key = std::getenv("BRIDGES_API_KEY");
	}


	auto br = new bridges::Bridges();

	br->initialize(assignment, user_name, api_key);
	br->setServer("clone");
	br->setVisualizeJSONFlag(false);

	try {
	Simpletron comp = Simpletron();
	comp.enterSML();
	comp.execute(br);
	} catch (const char* s) {
		cout << s;
	}

	cin.get();
}
