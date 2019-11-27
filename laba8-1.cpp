#include <iostream>
using namespace std;
int main ()
{
	int a,b,k;
	setlocale(LC_ALL,"russian");
	cout<<"¬ведите a,b"<<endl;
	cin>>a>>b;
	if (a!=b){
		if (a>b) {
			b=a;
		}
		else {
			a=b;
		}}
	else {a=0;
	b=0;}
	cout<<a<<" "<<b;
	system("pause");
	return 0;
}
	
		