#include<iostream>
using namespace std;
int main() {
	int y,x;
	setlocale (LC_ALL,"russian");
	cout<<"введите координаты точки"<<endl;
	cin>>x>>y;
	if(y > 0)
{
   if (x > 0)
       cout << "1" << endl;
   else
       cout << "2" << endl;
}
else
   if (x > 0)
       cout << "4" << endl;
   else
       cout << "3" << endl;
	system("pause");
	return 0;
}