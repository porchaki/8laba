#include<iostream>
using namespace std;
int main(){
int x;
setlocale(LC_ALL,"russian");
cout<<"Введите число"<<endl;
cin>>x;
if (x==0){
	cout<<"нулевое число"<<endl;}
else {
	if(x>0){
		if (x%2==0){
			cout<<"положительное четное число"<<endl;
		}
		else {cout<<"положительное нечетное число"<<endl;}
	}
	if (x<0) {
		if (x%2==0){
			cout<<"отрицательное четное число"<<endl;
		}
		else {cout<<"отрицательное нечетное число"<<endl;}}}
		system ("pause");
		return 0;

	
}
