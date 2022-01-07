#include <iostream>
#include <exception>
using namespace std;
int main()
{
int a,b;
cout<<"enter the values of a and b:";
cin>>a>>b;
    try
    {
	if(b == 0)
	{
	    throw b;
	}
	
	else
	{
	    cout<<"the value is"<<a/b<<endl;
	}
}
	catch(int x)
	{
	    cout<<"the value of b cant be zero :"<<endl;
	    cout<<"exception caught!";
	}
    
return 0;
}
