#include<iostream>
#include<cmath>
using namespace std;

class A{
	double x, y, z, q;
	public:
	void seT (double, double, double);
	void print();
	void run();
		
};

void A:: seT(double X, double Y, double Z){
	x=X;
	y=Y;
	z=Z;
}

void A::run(){
	q=pow(2, pow(y,x))+pow(pow(3, x), y)-(y*(atan(z)-M_PI/6)/(abs(x)+1/(pow(y,2)+1)));
}

void A::print(){
	cout<<"q="<<q<<endl;	
} 

int main(){
	//прямой
	A aa;
	aa.seT(3.251, 0.325,  0.466*pow(10, -4));
	aa.run();
	aa.print();
	//косвенный
	A *aa1=&aa;
	aa1->seT(3.251, 0.325,  0.466*pow(10, -4));
	aa1->run();
	aa1->print();
	//косвенный
	A *aa2=new A;
	aa2->seT(3.251, 0.325,  0.466*pow(10, -4));
	aa2->run();
	aa2->print();
	//прямой 
	(*aa2).seT(3.251, 0.325,  0.0000466);
	(*aa2).run();
	(*aa2).print();
	
	delete aa2;
	return 0;
}
