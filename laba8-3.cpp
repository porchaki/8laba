#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
int dist, A,B,C;
setlocale (LC_ALL,"russian");
cout<<"������� �����"<<endl;
cin>>A>>B>>C;
if(abs(A-C)<abs(A-B)){
	dist=abs(A-C);
cout<<"C "<< dist<<endl;}

if(abs(A-B)<abs(A-C)){
	dist=abs(A-B);
cout<<"B "<< dist<<endl;}
else{
	dist=abs(A-C);}
if ((abs(A-B)==abs(A-C))){
	dist=abs(A-C);
	cout<<"��� ����� ��������� �� ���������� ���������� �� � = "<< dist<<endl;}
system ("pause");
return 0;
}