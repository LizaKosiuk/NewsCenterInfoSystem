#include <iostream>

using namespace std;

class A
{
	public:
		A(){
 			cout<<"constr A"<<endl;
		 }
		f(){
		 	cout<<"f out A"<<endl;
		}
		~A(){
 			cout<<"destr A"<<endl;
		 }
};

class B: public virtual A
{
	public: 
		B(){
 			cout<<"constr B"<<endl;
		 }
		f(){
			cout<<"f out B"<<endl;
		}
		
		~B(){
 			cout<<"destr B"<<endl;
		 }
};

class C: public virtual A
{
	public: 
		C(){
 			cout<<"constr C"<<endl;
		 }
		f(){
			cout<<"f outC"<<endl;
		}
		
		~C(){
 			cout<<"destr C"<<endl;
		 }
};

class E: public virtual A, public virtual B, public C{
	public:
		E(){
 			cout<<"constr E"<<endl;
		 }
		 
 		f(){
		 	cout<<"f out E"<<endl;
 		}
 		
 		~E(){
 			cout<<"destr E"<<endl;
		 }
 };
 
class D: public virtual B, public virtual E
{
	public:
		D(){
 			cout<<"constr D"<<endl;
		 }
		f(){
			cout<<"f out D"<<endl;
		}
		
		~D(){
 			cout<<"destr D"<<endl;
		 }
};

class F:public D, public virtual E{
	public:
		F(){
 			cout<<"constr F"<<endl;
		 }
		 
 		f(){
		 	cout<<"f out F"<<endl;
 		}
 		
 		~F(){
 			cout<<"destr F"<<endl;
		 }
};

int main(){	
C ob;
ob.f();

return 0;

}

