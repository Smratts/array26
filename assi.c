#include<stdio.h>
//#include<conio.h>
void main()
{
int a,b;
a=4;//assignment operator
b=2;//assignment operator
a+=b;//valueof a is now 6 a=a+b=>a=4=2
printf("\n value of a=%d",a);
a-=4;/*value of a is now 2 ;a=a-4==> a=6-4=2; as updated from above a is 6; a=2 answer*/
printf("\n value of a=%d",a);
a*=3;//value of a is now 6; a=2*3=6, from above a=2
printf("\n value of a=%d",a);
b+=a;//value of b is now 8 b=b+a==> b=2=6=8;
printf("\n value of b=%d",b);
//getch();
}
