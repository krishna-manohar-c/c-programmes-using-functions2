#include<stdio.h>
void number(int num){
if(num%2==0){
printf("the number %d is even ",num);
}
else
{
printf("the number %d is odd",num);
}
}
int main(){
int a=5,b=4;
printf("1st number:%d",a);
printf("2nd number:%d",b);
number(a);
number(b);
return 0;
}
