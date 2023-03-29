//Implement binary to decimal

#include <stdio.h>
int binarytodecimal(int bin)
{
	int dec=0,i=0;
    while (bin!=0)
 {
        int rem=bin%10;
        bin=bin/10;
        dec=dec+rem<<i;
        ++i;
    }
	return dec;
}

int main() 
{
	int bin,dec;
	printf("Enter a binary number: ");
	scanf("%d", &bin);
	dec=binarytodecimal(bin);
	printf("Decimal number is: %d", dec);
	return 0;
}




