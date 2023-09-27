#include <iostream>
#include "Container.h"
using namespace std;

int main()
{
	//int values[] = { 6, 1, 3, 9, 5 };
	//int size = sizeof(values) / sizeof(values[0]);
	//Container<int> intContainer(values, size);

	//intContainer.addValue(8);

	//intContainer.getValue();

	//intContainer.deleteValue(3);

	//intContainer.getValue();

	//intContainer.searchValues(5);

	//intContainer.sortValues();

	//intContainer.getValue();

	//double values[] = { 6.2, 1.6, 3.9, 9.1, 5.4 };
	//int size = sizeof(values) / sizeof(values[0]);
	//Container<double> doubleContainer(values, size);

	//doubleContainer.addValue(8.7);

	//doubleContainer.getValue();

	//doubleContainer.deleteValue(3.9);

	//doubleContainer.getValue();

	//doubleContainer.searchValues(5.4);

	//doubleContainer.sortValues();

	//doubleContainer.getValue();

	const char* values[] = { "c", "d", "a", "e", "b"};
	int size = sizeof(values) / sizeof(values[0]);
	Container<const char*> charContainer(values, size);

	charContainer.addValue("g");

	charContainer.getValue();

	charContainer.deleteValue("e");

	charContainer.getValue();

	charContainer.searchValues("d");

	charContainer.sortValues();

	charContainer.getValue();


}
