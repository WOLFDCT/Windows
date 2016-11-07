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

	cout << "adding this line in order to create a change in the example code" << endl;
	
	return 0;

}

