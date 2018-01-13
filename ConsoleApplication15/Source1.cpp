#include "Singleton.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int road[12];
	int n;
	cout << "Marsrutu skaicius: ";
	cin >> n;
	if (n > 12)
	{
		cout << "Marsrutu skaicius: ";
		cin >> n;
	}
	
	Singleton::Instance()-> spasd(road, n);
}





