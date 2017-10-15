#include <iostream>
using namespace std;

// This program shows the different between
// signed and unsigned integers.

int main() {
	short int i;		// a signed short integer
	short unsigned int j; 		// an unsigned short integer

	j = 50000;
	i = j;
	cout << i << " " << j;

	return 0;
}