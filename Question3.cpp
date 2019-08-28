//PROGRAM TO FIND THE LARGEST PRIME FACTOR.
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	long long n=600851475143,i,a=n;
	for(i=2;i<=n;i++)
	{
 		if(n%i==0)
 		{
  			n=n/i;
  			i--;
 		}
	}
	cout<<"The largest prime factor of "<<a<<" is "<<i;
 	getch();
}
