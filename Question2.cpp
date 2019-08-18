//PROGRAM TO FIND EVEN FIBBONACCI SERIES
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
int main()
{
	system("cls");
  	long long n;
  	cout<<"Enter the Number to which you will add the fibbonacci ";
  	cin>>n;
  	if(n<2)
  	{	
   		exit (0);
  	}
 	long long a=1,b=2,sum=0,c=0;
 	while(1==1)
  	{
   		if(a>=n)
     	break;
   		if(a%2==0)
     	sum=sum+a;
   		c=a+b;
   		a=b;
  		 b=c;
  	}	
 	cout<<"Sum of even fibbonacci numbers upto "<<n<<" = "<<sum;
	getch();
}
