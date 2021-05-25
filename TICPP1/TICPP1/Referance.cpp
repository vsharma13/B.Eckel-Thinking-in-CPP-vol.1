//: C11: Referance.cpp
// Simple C++ Referances

#include <iostream>

int* f(int* x) {
	(*x)++;
	return x; // Safe, x is outside this scope
}

int& g(int& x) {
	x++;  // same effect as in f()
	return x; // Safe, outside this scope
}

int& h() {
	int q;
	//! return q; //Error
	static int x;
	return x; // Safe x lives outside this scope
}

int main() {
	int a = 0;
	f(&a); // Ugly but explicit
	g(a); //clean but hidden
	h();
} ///:~