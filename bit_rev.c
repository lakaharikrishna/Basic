#include<stdio.h>
int main(){
	unsigned int x=0x11223344;
	unsigned int y[4];
	y[0]=(x&0xff000000)>>24;
	  y[1]=(x&0x00ff0000)>>16;
	  y[2]=(x&0x0000ff00)>>8;
	  y[3]=(x&0x000000ff)>0;
	printf("rev:%x\n",y);
	int res=(y[0]<<0)|(y[1]<<8)|(y[2]<<16)|(y[3]<<24);
	printf("res=%x\n",res);//44332211
}
