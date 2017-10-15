#include <iostream>
using namespace std;

int count2;
extern void write_extern();

int main() {
	count2 = 5;
	write_extern();
}