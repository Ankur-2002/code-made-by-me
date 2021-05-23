#include<stdio.h>


int main(){

int n,i=0;
printf("Enter the length of : ");
scanf("%d",&n)
int arr[n];
printf("\n Enter the elements of an array : ");
for(i=0; i<n; i++)
scanf("%d",&arr[i]);
do{

printf("1. Traverse the array \n2. reverse the array\n3.count number elements\4.update the value\n5. exit");
int ch;
scanf("%d",&ch);

switch(ch)
{
	case 1 : 
	for(int i=0; i<n; i++)
	printf("%d ",arr[i]); break;
	case 2 : 
	int j=n-1,i=0;
	while( i< j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	i++;
	j--;
	}
	break;
	case 3 : 
	int count = 0;
	for(i=0; i<sizeof(arr)/size0f(int); i++
	{
	count++;	
	}
	printf("Number of elements : %d",count);
	break;
	
	case 4 :
	for(i=0; i<n;i++)
	{	
	scanf("%d",&arr[i]);
	}
	break;
	default :
	break;
}	




	int check;
	printf("Do you want to do Again : Press 1 for Yes and Press 2 for No");
	scanf("%d",&check);
}while(check !=2);

	return 0;
}