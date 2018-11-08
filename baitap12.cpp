#include<conio.h>
#include<stdio.h>
void NhapMang(int Array[20],int n)
{
for ( int i = 0 ; i < n ; i++)
	{
		printf("Array[%d] = ",i);
		scanf("%d",&Array[i]);
	}
}
void InMang(int Array[20],int n )
{
	for (int i = 0 ; i <n ; i++)
	{
		printf("Array[%d] = %d ",i,Array[i]);
		
	}
}
main(){
	int n , Array[20];
	printf("Nhap N = ");
	scanf("%d",&n);
	NhapMang(Array,n);
	InMang(Array,n);
}
