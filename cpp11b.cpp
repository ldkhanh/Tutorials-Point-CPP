#include <iostream>
using namespace std;

extern int count2;

void write_extern(void) {
	cout << "Count2 is " << count2 << endl;
}