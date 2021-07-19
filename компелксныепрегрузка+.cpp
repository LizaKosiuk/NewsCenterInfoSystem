#include<iostream>
#include<cmath>
using namespace std;

class Complex {
		double real, img;
	public:
	
		
		Complex(double r, double i){
			real = r;
			img = i;
		}
		 
		Complex & operator=(const Complex &c){
			real = c.real;
			img = c.img;
			
			return (*this);
		}	
		
		void get(){
			if(img>=0)
				cout <<real<<"+"<< img<<"i"<<endl;
			else
					cout <<real<<"-"<< abs(img)<<"i"<<endl;
	
				
		}
		bool operator==(Complex &a);
	
}; 

bool Complex::operator==(Complex &a){
		if ((real==a.real) && (img==a.img))
			return 1;
		else
			return 0;
}
 
int main(){
	
	setlocale(LC_ALL, "Rus");
	
	Complex b(3, 4);
	Complex a(3, 4);

	b.get();
	a.get();
	
	if (a==b)
		cout << "они равны!!!!!!!!!!!!!!"<<endl;
	
	else 
		cout << "они не равны!!!!!!!!!!!!!!"<<endl;	
	
	return 0;
}
