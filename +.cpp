#include <iostream>
#include <iomanip>

using namespace std;

void zadanie(int v, int *C);

int main() {
	int n, m, *A, *B;
	
	setlocale(LC_ALL,"rus");
	
	cout<<"Введите размер массива А"<<endl;
	cin>>n;
	A= new int [n];
	cout<<"Введите элементы массива А"<<endl;
	for (int i=0; i<n; i++)
		cin>>*(A + i);
		
	cout<<"Введите размер массива B"<<endl;
	cin>>m;	
	B= new int [m];
	cout<<"Введите элементы массива B"<<endl;
	for (int i=0; i<m; i++)
		cin>>*(B + i);
		
	system("cls");
	
	cout<<"МАCСИВ А: "<<endl;
	zadanie(n, A);
	
	cout<<"МАССИВ B: "<<endl;
	zadanie(m, B);
	
	delete[] A;
	delete [] B;
	return 0;
}

void zadanie(int v, int *C){	
	int	max=C[0];
	for (int i=0; i<v; i++)
		if (C[i] >= max)
			max=C[i];
				
	cout<<"Элементы массива :  "<<endl;
	for (int i=0; i<v; i++)
		cout<<*(C + i)<<"   ";
	cout<<endl;
	
	cout<<"Максимально значение элемента массива  :   "<<max<<endl;	
	if (max==0)
		cout<<"НА 0 ДЕЛИТЬ НЕЛЬЗЯ"<<endl;
	else{
		cout<<"Значение эл-ов массива после деления: "<<endl;
		for (int k=0; k<v; k++)
			cout<<*(C + k)/max<<"  ";
		cout<<endl;
		cout<<endl;
  }
}
