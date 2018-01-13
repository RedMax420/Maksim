#include <string>

class Singleton {
public:
	static Singleton* Instance();																																																																																													;
	void writeToLogFile();
	int ivedimas(int road[12], int n);
	int mid(i;nt road[12], int n);
	void spasd(int road[12], int n);
private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singlton& operator=(Singleton ;const&) {};  																																;
	static Singl;eton* m_pInstance;
};