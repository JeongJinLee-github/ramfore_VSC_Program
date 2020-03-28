#include "Adder.h"
Adder::Adder(int a, int b) {
	op1 = a;
	op2 = b;
}

int Adder::processor() {
	return op1 + op2;
}