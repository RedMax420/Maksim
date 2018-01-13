#include <string>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	int ivedimas(int road[12], int n);
	int mid(int road[12], int n);
	void spasd(int road[12], int n);
private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};