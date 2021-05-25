//: C11: FreeStandingReferance.cpp 
#include <iostream>
using namespace std;

// ordiany free-standing referance
int y;
int& r = y;

// When referance is created, it must be 
// initialized to a live object;

const int& q = 12;

// Referance are tied to someone's else storage
int x = 0;
int& a = x;

//int main() {
//	cout << "X = " << x << ", a = " << a << endl;
//	a++;
//	cout << "X = " << x << ", a = " << a << endl;
//}