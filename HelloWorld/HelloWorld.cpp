// HelloWorld.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	if (argc > 1) {
		cout << "Hello " << argv[1] << endl;
	}
	else {
		cout << "Hello World!" << endl;
	}
	
	return 0;

}

