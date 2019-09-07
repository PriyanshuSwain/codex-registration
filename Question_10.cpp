//PROGRAM TO FIND THE SUM OF FIRST 2000000 PRIME NUMBERS.
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<math.h>
bool primeno(long long p)
{
	for(long long i=3;i <= (long long)sqrt(p); i=i+2) 
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
	long long a=0,sum=2;
	for(a=3;a<2000000;a+=2)
	{
		if(primeno(a))
			sum=sum+a;
	}
	cout<<"Sum of first 2000000 prime nos. is = "<<sum<<endl;
	getch();
}
