#include<iostream>
using namespace std;
int main(){
int x;
setlocale(LC_ALL,"russian");
cout<<"������� �����"<<endl;
cin>>x;
if (x==0){
	cout<<"������� �����"<<endl;}
else {
	if(x>0){
		if (x%2==0){
			cout<<"������������� ������ �����"<<endl;
		}
		else {cout<<"������������� �������� �����"<<endl;}
	}
	if (x<0) {
		if (x%2==0){
			cout<<"������������� ������ �����"<<endl;
		}
		else {cout<<"������������� �������� �����"<<endl;}}}
		system ("pause");
		return 0;

	
}
