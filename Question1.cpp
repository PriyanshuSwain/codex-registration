//PROGRAM TO FIND THE SUM OF ALL MULTIPLES OF 3 & 5
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
int main()
{
 	system("cls");
 	int x=999,sum=0;
 	for(int i=0;i<=x;i++)
 	{	
  		if((i%3==0)||(i%5==0))
  		{
   			sum=sum+i;
  		}
 	}
 	cout<<"The sum of multiples of 3 & 5 is "<<sum;
 	getch();
}
