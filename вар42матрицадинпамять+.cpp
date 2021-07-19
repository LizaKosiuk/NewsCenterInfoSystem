#include <iostream>

using namespace std ;

int main() {
	int n, a, *B,k=0;
	setlocale(LC_ALL,"rus");
	
	cout<<"Введите размер матрицы А (n x m)"<<endl;
	cin>>n>>a; 
		
	int **A= new int *[n];
	for (int i=0; i<a;i++)
		*(A + i)=new int[a];
	cout << "Введите элементы матрицы A ("<<n<<" * "<<a<<")"<<endl;
	for (int i=0; i<n; i++)
		for (int m=0; m<a; m++){
			cin>>*(*(A+i)+m);
			if ((*(*(A+i)+m)) % 3 ==0)
				k++;
	}	
	
	B=new int [k];
	int t=0;
		for (int i=0; i<n; i++)
			for (int m=0; m<n; m++)	
				if( (*(*(A+i)+m) % 3 ==0) && (t<=(k-1))){			
					*(B + t)=*(*(A+i)+m); 
					t++;
			}
			
	system("cls");
	
	cout<<" Элементы матрицы A: "<<endl;
	for (int i=0; i<n; i++) {{
			for (int m=0; m<a; m++)
				cout<<*(*(A+i)+m)<<"  ";	
	}
		cout<<endl;
	}
	
	cout<<" Количество элементов массива A, которые деляться на 3: "<<k<<endl;
	
	cout<<" Элементы массива B: ";	
	for (int p=0; p<k; p++)
		cout<<*(B + p)<<"  ";
		cout<<endl;
		
	for (int i = 0; i < n; i++)
        delete[] *(A + i);
    delete[] A;
    delete[] B;
	return 0;
}
