#include<stdio.h>
int main()
{
int a,b,x,y,temp,gcd,lcm;
printf("Ente two integers\n");
scanf("%d%d",&x,&y);
a=x;
b=y;
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
gcd=a;
lcm=(x*y)/gcd;
printf("gcd of %d and %d=%d\n",x,y,gcd);
printf("lcm of %d %d is=%d\n",x,y,lcm);
return 0;
}
