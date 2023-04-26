#include <stdlib.h>
#include<stdio.h>

int main()

{
	int arr[10],i,a;                       //array for storing integers of size 10
    printf("Enter data to store in array\n");

	for( a= 0; a<=5 ; a++ )
	{
	scanf("%d" , &arr[a]);          //seeking input
    }
     printf("%d\n", arr[a]);
    scanf("%d", &i);

    if(i>=0 && i<=9)
	{
		printf("the array location exists\n");
    printf("%d",arr[i]);
	}
	else 
	{
    printf("memory location does not exist");
	}
	return;
}
