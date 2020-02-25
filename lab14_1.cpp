#include <iostream>
using namespace std;

int main(){
	//Write your code here.
	int a = 5;
	string b = "A";
	string &c = b ;
	int *x = &a, *z=x;
	string *y = &b;

	cout<<"a = "<<a<<" &a = "<<&a<<"\n";
	cout<<"b = "<<b<<" &b = "<<&b<<"\n";
	cout<<"c = "<<c<<" &c = "<<&c<<"\n";
	cout<<"x = "<<x<<" &x = "<<&x<<"\n";
	cout<<"y = "<<y<<" &y = "<<&y<<"\n";
	cout<<"z = "<<z<<" &z = "<<&z<<"\n";

	c="F";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";
	cout<<"z = "<<z<<"\n";

	*y="W";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";
	cout<<"z = "<<z<<"\n";


	*x=6;

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";
	cout<<"z = "<<z<<"\n";


	*z=7;

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";
	cout<<"z = "<<z<<"\n";


	return 0;
}
