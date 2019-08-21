//PROGRAM TO FIND THE 10001st PRIME NUMBER.
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<math.h>
bool primeno(long p)
{
	if (p>2 && p%2==0)
	{
		return false;
	}
	for(long i=3;i <= (long)sqrt(p); i=i+2) 
	{
		if (p % i == 0) 
		{
		return false;
		}
	}
	return true;
}
int main()
{
	system("cls");
    long a=2,b=0;
    int ctr=0;
    while(1==1)
	{
		if(ctr==10001)
		{
			break;
		}
		if (primeno(a))
		{
			b=a;
			ctr++;
		}
		a++;
	}	
	cout<<"The 10001st prime number is "<<b<<endl;
	getch();
}
