//PROGRAM TO FIND DIFFERENCE B/W THE SUM OF SQUARES OF FIRST 100 NAT. NOS. AND SQUARES OF THE SUM.
#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int a=100,sum,sqsum,sqosum,diff;
	sum=(a*(a+1))/2;
	sqsum=(a*(a+1)*(2*a+1))/6;
	sqosum=sum*sum;
	diff=sqosum-sqsum;
	cout<<"The difference is "<<diff<<endl;
	getch();
}
