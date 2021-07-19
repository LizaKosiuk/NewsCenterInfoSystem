#include <iostream>
using namespace std;

class B{
	
public:	

int b, bb;

};


class A{
	
	protected:
		B obb;	
		int B::*pb=&B::b;
		int B::*pbb=&B::bb;
		
		void ob(){
				cout<<"hello A from protected"<<endl;
		}
		
	private:
	
		//oe o e o ii caaaie? a private, oi ?aaeecaoey static i?aiu nei?ia, n ?ac?aoaiey i?aiiaaaaoaey ?aaeeciaaii aac static
	 static	float x;
	 static	float y;
		
		void dlx()	{
				cout<<"hello A from privat dlx()"<<endl;	
		}
		
		void dly()	{
				cout<<"hello A from privat dly()"<<endl;
		}
		
		void FF()	{
			cout<<"hello A from private"<<endl;
		}
	public:
		
    float *mas[2]={&A::x, &A::y}; 
    
		void F ()
		{
			ob();
			dlx();	
		}
		
		void F1(){
			FF();
			dly();	
		}
		
		void F2(){
			cout<<"hello A from public"<<endl;	
		}		
};
float A::x= 500;
float A::y= 100;
int main(){
	
		A *a = new A;
		
		a->F();
		a->F1();
		a->F2();
		delete a;
		
	return 0;
}
