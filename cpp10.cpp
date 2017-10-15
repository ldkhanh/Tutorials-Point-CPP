#include <iostream>
using namespace std;

//Function declaration
void func(void);

static int count2=10; /* Global variable */

int main() {
	while(count2--) {
      func();
   	}

	return 0;
}

// Function definition
void func( void ) {
	static int i = 5;	// local static variable
	i++;
	cout << "i is " << i;
	cout << " and count is " << count2 << endl;
}