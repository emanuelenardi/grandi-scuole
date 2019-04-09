#include <iostream>
using namespace std;

double f(double x) {
	return 3*(x*x)+2;
}

int main(){
	double x1=1;
	double y1=f(x1);
	double x2=x1+0.01;
	double y2=f(x2);
	double m=(y2-y1)/(x2-x1);
	double q=y1-m*x1;
	cout<<"y = "<<m<<"x + "<<q<<endl;
	return 0;
}
