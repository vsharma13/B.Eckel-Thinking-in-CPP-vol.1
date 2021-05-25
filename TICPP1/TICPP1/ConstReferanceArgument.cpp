//: C11: ConstReferanceArgument.cpp
// Passing Referance as const

void f(int &) {};
void g(const int&) {};

int main() {
	//! f(1); //ERROR
	g(1);
}///:~