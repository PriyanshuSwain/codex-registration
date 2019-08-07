#include<iostream.h>
#include<conio.h>
void sum()
{ int x;
   x=999;
  long int y;
long int sum=0;
for(int i=0;i<=x;i++)
  {
  if((i%3==0)||(i%5==0) )
   {
   sum=sum+i;
   }
  }
  y=sum;
  cout<<y;
}

void main()
{           clrscr();
sum();
getch();
}
