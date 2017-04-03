//============================================================================
// Name        : firstProj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <pthread.h>

using namespace std;

void foo()
{
	cout<<"hello from thread"<<endl;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "first change"<<endl;
	std::thread first (foo);
	//thread first(foo);
	first.join();
	//pthread_t inc;
	return 0;
}
