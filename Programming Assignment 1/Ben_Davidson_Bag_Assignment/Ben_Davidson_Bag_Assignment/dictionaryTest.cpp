#include "BDictionary.h"
#include "ABag.h"
#include <iostream>
#include <array>

using namespace std;


int main()
{
	int item = 5;
	ABag<int> Hello;
	cout << Hello.addItem(item);
	cout << Hello.remove(item);
	cout << Hello.removeTop(item);
	cout << Hello.find(item);
	cout << Hello.inspectTop(item);
	Hello.emptyBag();
	cout << Hello.find(item);

	system("pause");
	return 0;
}