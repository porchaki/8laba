#include <iostream>
 using namespace std;
 int main()
{
    int a, b, c;
	setlocale(LC_ALL,"russian");

    int max1, max2;
	cout<<"¬ведите три числа"<<endl;
    cin>>a>>b>>c;
 
    if(a>b)
    { max1=a;
        if(b>c)
            max2=b;
        else
            max2=c; }
    else
    {
        max1=b;
        if(a>c)
            max2=a;
        else
            max2=c;
    }
    int sum=max1+max2;
 cout << sum;
 system ("pause");
    return 0;
}