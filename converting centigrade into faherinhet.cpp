#include<stdio.h>
float temp_f;
float temp_c;
char msg[60];
int main(){
}
printf("the temperature (in centigrade):");
fgets(msg,sizeof(msg),stdin);
scanf("msg,%f",&temp_f);
temp_f=((9.0/5.0*temp_c)+32.0);
printf("%f dehrees fahrenheit .\n",temp_f);
return 0;
}
