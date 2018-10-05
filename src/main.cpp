/**
 */

#include "Bridges.h"
#include "Array.h"
#include "DataSource.h"

using namespace bridges;

int main () {

	Bridges::initialize(1, "YOUR_USER_NAME", "YOUR_API_KEY");

	Array<int> *a = new Array<int>(10);

	Bridges::setDataStructure(a);
	Bridges::visualize();
}
