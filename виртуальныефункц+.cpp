#include <iostream>


using namespace std;

class X{
	protected:
		
		int *x1, *x2;
		
	public:
			
		X(int a, int b){
			x1= new int;
			x2= new int;
			*x1 = a;
	        *x2 = b;
	        cout<<"? ei?????e?i? ?"<<endl;
		}
		~X(){
			delete x1;
			delete x2;
			cout<<"? ??????e?i? ?"<<endl;
		}
		virtual void show()
	        {
	            cout << "x1=" << *x1 << " x2=" << *x2 << endl;
	        }
	    virtual void sett()
	    {
	    	cout<<"?a??e?? x1:"<<endl;
	    	cin>>*x1;
	    	cout<<"?a??e?? x2:"<<endl;
	    	cin>>*x2;	
		}
		
	
};
class Y: public X{
	
	private:
		
		int *y;
	
	public:
		
		Y(int a, int b, int c):X(a, b){
			y= new int;
			*y=c;;
			cout<<"? ei?????e?i? ?"<<endl;
		}
		~Y(){
			delete y;
			cout<<"? ??????e?i? ?"<<endl;
		}
		virtual void show()
        {
            cout << "x1=" << *x1 << " x2=" << *x2 << " y=" << *y << endl;
        }
        virtual void sett(){
        	cout << "?a??e?? x1: ";
            cin >> *x1;
            cout << "?a??e?? x2: ";
            cin >> *x2;
            cout << "?a??e?? y(?? ?aa?ue 0): ";
            cin >> *y;
        	
		}
	
		void Rez()
        {
        	while (*y==0){
        	cout<<"?a??e?? y ca?iai"<<endl;
        	cin>>*y;
        	}
            cout << "??c?eu?a?: " << ( *x1 * *x2 ) / *y << endl;
            
        }
	
};

int main(){
	setlocale(LC_ALL, "Russian");
	
	X *t;
	t= new X(3,5);
	t->show();
	t->sett();
	t->show();
	
	delete t;
	
	Y *p;
	p = new Y(100, 50, 2);
	p->show();
	p->sett();
	p->show();	
	p->Rez();  
	
	delete p;
	
}
