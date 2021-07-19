#include <iostream>
#include <iomanip>

using namespace std;

void zadanie(int v, int *C);

int main() {
	int n, m, *A, *B;
	
	setlocale(LC_ALL,"rus");
	
	cout<<"������� ������ ������� �"<<endl;
	cin>>n;
	A= new int [n];
	cout<<"������� �������� ������� �"<<endl;
	for (int i=0; i<n; i++)
		cin>>*(A + i);
		
	cout<<"������� ������ ������� B"<<endl;
	cin>>m;	
	B= new int [m];
	cout<<"������� �������� ������� B"<<endl;
	for (int i=0; i<m; i++)
		cin>>*(B + i);
		
	system("cls");
	
	cout<<"��C��� �: "<<endl;
	zadanie(n, A);
	
	cout<<"������ B: "<<endl;
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
				
	cout<<"�������� ������� :  "<<endl;
	for (int i=0; i<v; i++)
		cout<<*(C + i)<<"   ";
	cout<<endl;
	
	cout<<"����������� �������� �������� �������  :   "<<max<<endl;	
	if (max==0)
		cout<<"�� 0 ������ ������"<<endl;
	else{
		cout<<"�������� ��-�� ������� ����� �������: "<<endl;
		for (int k=0; k<v; k++)
			cout<<*(C + k)/max<<"  ";
		cout<<endl;
		cout<<endl;
  }
}
