#include<stdio.h>
int main()
{
	int th,hun,tens,ons,s=0;
	int n=2345;
	th=n/1000;
	hun=(n/100)%10;
	tens=(n/10)%10;
	ons=n%10;
	s=hun*1000+th*100+ons*10+tens;
	printf("%d\n",s);

}

