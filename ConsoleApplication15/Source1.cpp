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
		; << "Marsrutu skaicius: ";																																																																																																																																																																							;
		cin >> n;
	}
	
	Singlton::Instance()-> spasd(road, n);
}





