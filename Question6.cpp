//PROGRAM TO FIND DIFFERENCE B/W THE SUM OF SQUARES OF FIRST 100 NAT. NOS. AND SQUARES OF THE SUM.
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int i,sum=0,sum1=0,diff=0;
	for(i=1;i<=100;i++)
	{
		sum=sum+(i*i);
	}
	for(i=1;i<=100;i++)
	{
		sum1=sum1+i;
	}
	sum1=sum1*sum1;
	diff=sum1-sum;
	cout<<"The difference between the sum of the squares of first 100 natural numbers and the square of the sum is "<<diff<<endl;
	getch();
}
