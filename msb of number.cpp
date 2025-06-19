//C program to check Most Significant Bit (MSB) of a number is set or not
#include<stdio.h>
int main(){
int num,bit,msb;
printf("enter a number:");
scanf("%d",&num);
bit=sizeof(int)*8;
msb=1<<(bit-1);
if(num&msb){
printf("the msb of %d number is 1 & set",num);
}
else
{
	printf("the msb of  %d is 0 & unset",num);
}
return 0;
}
