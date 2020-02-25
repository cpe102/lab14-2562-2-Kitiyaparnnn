#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c, int &d){
	
	/*int *num[4]={&a,&b,&c,&d};

	for(int i=0;i<5;i++){
		int p=rand()%4,l=rand()%4;	
		int first=*num[p];
			*num[p]=*num[l];
			*num[l]=first;
	}*/
	int num[4]={a,b,c,d};
	for(int i=0;i<5;i++){
		int p=rand()%4,l=rand()%4;	
		int first=num[p];
			num[p]=num[l];
			num[l]=first;
	}
	a=num[0];
	b=num[1];
	c=num[2];
	d=num[3];	
}