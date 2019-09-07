//PROGRAM TO FIND LCM OF 1 TO 20
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
long long gcd(long long x,long long y)
{
	if(y==0)
	 return x;
	else
	 return gcd(y,x%y);
}
long long lcm(int arr[])
{
	long long a=arr[0];
	for(int i=1;i<20;i++)
	{
		a=((arr[i]*a)/gcd(arr[i],a));
	}
	return a;
}
int main()
{
	system("cls");
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	cout<<lcm(arr);
	getch();
}
