#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int n, k_pol=0, k_nul=0, k_ot=0, *A,*B;
	
	setlocale(LC_ALL,"rus");

	cout<<"Введите размер(от 5 до 20) массива А"<<endl;
	cin>>n;	
	
	while ((n>20)||(n<5)){
		cout<<"Вы ввели некоррекное значение, попробуйте снова : ";
		cin>>n;
	}
	
	A= (int*)malloc(sizeof(int[n]));
	
	cout<<"Введите элементы массива А(значения в диапазоне от -100 до 100)"<<endl;
	for (int i=0; i<n; i++){ 
		int a;
		cin>>a;
		while ((a > 100)||(a < -100)){
			cout<<"Вы ввели некорректное значение, попробуйте снова"<<endl;
			cin>>a;
		}
		*(A+i)=a;
			
		if(*(A+i)>0)
			k_pol++;
			
		if(*(A+i)<0)
			k_ot++;
			
		if(*(A+i)==0)
			k_nul++;
}	
int ind=0;	
	B=(int*)malloc(sizeof(int[n]));
		for (int k=0; k<n; k++)	
			*(B+k)=0;
			
		for (int k=0; k<n; k++)
			if (*(A+k)>0){
				*(B+ind)=*(A+k);
				ind++;
			}
		ind=n-1;
		for (int k=n-1; k>=0; k--)
			if (*(A+k)<0){
				*(B+ind)=*(A+k);
				ind--;
			}
			
	for (int k=0;k<n; k++)
		cout<<*(B+k)<<"  ";
	cout<<endl;
	
	free(A);

	return 0;
}
	
