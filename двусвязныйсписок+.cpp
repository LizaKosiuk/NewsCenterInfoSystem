#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
    
struct Node {
	Node *next, *prev;
	char str;	
};

Node *Tail =NULL;
Node *Head =NULL;
int size=0;

void showw();
void zadanie(char x, char y);
void Add(int p);

int main(){
	
	 setlocale(LC_ALL, "Rus");
	 
	 int n;
	 
	 char ch, zp, z;
	 
	 cout<<"Введите количство элементов"<<endl;
	 cin>>n;
	 cout<<"Введите символы:"<<endl;
	 for (int i=0; i<n; i++){
		cin>>ch;
	 	Add(ch);
	}
	cout<<"Введи символ, который будем добавлять"<<endl;
	cin>>z;
	cout<<"Введи ЧИСЛО, после которого необходимо добавить элемент"<<endl;
	cin>>zp;
	
	int k= int (zp); 
	cout<<k<<endl;
	while ((k<48)&&(k>57)){
		cout<<"Надо ввести число от 0 до 9!!!"<<endl;
		cout<<"Введи ЧИСЛО, после которого необходимо добавить элемент"<<endl;
		cin>>zp;
		k= int (zp);
	}
//	cout<<"Я готов запускать задание!!!"<<endl;
	zadanie(zp, z);	
	showw();
	return 0;
}

void Add(int p){
	
    Node *temp = new Node;
   
    temp->next = Head;
    temp->str = p;

    if (size != 0)
    { 
        temp->prev = Tail;
        Tail->next = temp;
        Tail = temp;
        Head->prev=temp;
    }
    else
    { 
        temp->prev = Head;
        Head = Tail = temp;
    }
    
     size++;
  //  cout<<"ДОБАВЛЯЮ ТУТ ПОТИХОНЬКУ  "<<size<<endl;
}


void zadanie(char x, char y){
	
//	cout<<"Я запустил задание!!!"<<endl;

	Node *temp=Head;
	
	int m=0; 
	
	while ((temp->str!=x)&&(m!=size)){	
	//	cout<<"  я в вайле задания"<<endl;
		temp=temp->next;
		m++;
	}
	 
	if (temp->str==x){
		
	    Node* NewNode = new Node;
        NewNode->str = y;
        NewNode->prev = temp;
        NewNode->next = temp->next;
        temp->next = NewNode;
        
        if (NewNode->next)
            NewNode->next->prev = NewNode;
        size++;
	}
	else
		cout<<"ТЫ ВВЕЛ ЧИСЛО, КОТОРОГО НЕТ!! ЗАЧЕМ???"<<endl;
			
}

void showw(){
//	cout<<"Ща как выведу"<<endl;
	Node *temp = Head;
	int m;
    while (m != size)
    {
        cout << fixed << setprecision(2) << setw(7) << left << temp->str;
        cout << setw(7) << left << "Next = " << setw(10) << left << temp->next;
        cout << setw(7) << left << "Prev = " << setw(10) << left << temp->prev;
        cout << setw(7) << left << "Temp = " << setw(10) << left << temp << endl << endl;
        temp = temp->next;
        m++;
    }
    
}

