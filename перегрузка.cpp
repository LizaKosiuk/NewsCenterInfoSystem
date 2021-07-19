#include <iostream>
#define SIZE 255 //����������������������
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;

class X{
	
char *str;
char *str_return;
size_t length;

public:
	
X(); //�������������-���������
X(char*); //�����������, �������� ����� ���������� ��������
~X(); //����������
char* Run(); //�����, ����������� ������������ ������.
void Set(char*);
friend void print(X&); //�������-���� ������
friend ostream& operator<<(ostream&,X&); //���������� ��������� ������
friend istream& operator>>(istream&,X&); //���������� ��������� �����
friend char* Run(X&); //�������-����, ����������� ������������ ������.
X& operator= (const X& t);
};
X& X::operator= (const X& t)
{
	length = strlen (t.str) + 1;
	str = new char[length];
	strcpy (str, t.str);
	str[length-1] = '\0';

	return *this;
}


X::X(){
	str=new char[SIZE];
	str[0]='\0';
	str_return=new char[SIZE];
	str_return[0]='\0';
};

X::X(char *s){
	str=new char[SIZE];
	strcpy(str,s);
	str_return=new char[SIZE];
	str_return[0]='\0';
};
 
X::~X(){
	delete[] str;
	cout<<"...����������..."<<endl;
};

void X::Set(char *s){
	int i;
	for (i=0; i<strlen(s); i++)
		str[i]=s[i];
		str[i]='\0';
	
};

char* X::Run(){ /*�����, ������������������������, ������������� - ��������������������������, ����������������������������������, ����������������������������� 10*/
int j=0;
	if (strlen(str)==10) {
		for (unsigned int i=0; i<strlen(str); i++)
			if ( ((int)str[i]<65) || ((int)str[i]>90) ) {
					str_return[j]=str[i]; 
					j++;
			}
			str_return[j]='\0';
		}
		else
		 strcpy(str_return,str);
		
		return str_return;
};

char* Run(X &obj){
	return obj.Run();
};

void print(X &obj){
	cout<<obj.str<<" "<<obj.str_return<<endl;
};

ostream& operator<<(ostream&stream,X&ob) {
	stream <<ob.str ;
	return stream;
};

istream&operator>>(istream&stream,X&ob){
	stream >>ob.str;
	return stream;
};
  
ofstream out("zadanie.txt");

int main (){
	
setlocale(LC_ALL, "Russian");

char s[265];

cout<<" ������� ������ ��� �������� ���������"<<endl;
cin.getline(s, 256);
X strl(s), str2;
str2=strl;
cout<<str2<<endl;
cout<<"������� ���-������ � ������� \"Enter\":"<<endl;
cin.getline(s,256); //���������������������������

X str(s); //��������������������������������������������������,
//����������������������������������������������
out<<"� ��� ����:"<<endl;
out<<str<<endl;
;
out<<"�������� ������:"<<endl;
out<<Run(str)<<endl;

cout<<"������� ���-������ � ������� \"Enter\":"<<endl;
cin.getline(s,256);

X *pstr; //����������������������������������
pstr=new X();
pstr->Set(s);
out<<"� ��� ����:"<<endl;

out<<*pstr<<endl;
out<<"�������� ������:"<<endl;
out<<Run(*pstr)<<endl;

delete pstr;

};

