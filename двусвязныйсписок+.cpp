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
	 
	 cout<<"������� ��������� ���������"<<endl;
	 cin>>n;
	 cout<<"������� �������:"<<endl;
	 for (int i=0; i<n; i++){
		cin>>ch;
	 	Add(ch);
	}
	cout<<"����� ������, ������� ����� ���������"<<endl;
	cin>>z;
	cout<<"����� �����, ����� �������� ���������� �������� �������"<<endl;
	cin>>zp;
	
	int k= int (zp); 
	cout<<k<<endl;
	while ((k<48)&&(k>57)){
		cout<<"���� ������ ����� �� 0 �� 9!!!"<<endl;
		cout<<"����� �����, ����� �������� ���������� �������� �������"<<endl;
		cin>>zp;
		k= int (zp);
	}
//	cout<<"� ����� ��������� �������!!!"<<endl;
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
  //  cout<<"�������� ��� ����������  "<<size<<endl;
}


void zadanie(char x, char y){
	
//	cout<<"� �������� �������!!!"<<endl;

	Node *temp=Head;
	
	int m=0; 
	
	while ((temp->str!=x)&&(m!=size)){	
	//	cout<<"  � � ����� �������"<<endl;
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
		cout<<"�� ���� �����, �������� ���!! �����???"<<endl;
			
}

void showw(){
//	cout<<"�� ��� ������"<<endl;
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

