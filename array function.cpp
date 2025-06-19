#include<stdio.h>
printarray(int arr[],int size){
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
}
int main(){
int numbers[]={10,30,60};
printarray(numbers,3);
return 0;	
}
