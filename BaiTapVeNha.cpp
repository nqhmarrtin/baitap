#include<conio.h>
#include<stdio.h>
#include<malloc.h>
void NhapMang(int  *arr, int n )
{
	for ( int i = 0 ; i < n ; i++)
	{
		printf("\n Array[%d] =",i);
		scanf("%d",arr+i);
	}
}
void InMang (int  *arr,int n)
{
    for ( int  i = 0 ; i < n ; i++)
    {
    	printf(" \n Array[%d] = %d",i,*(arr+i));
	}
}
int AmDauTien(int *arr,int n )
{
	for ( int i = 0 ; i < n ; i++)
	{
		if (*(arr+i) < 0 )
		return *(arr+i);
	}
	return -1 ;
}
int  demphantu(int *arr, int n )
{
	int dem = 0;
	for ( int i = 0 ; i < n ; i++)
	{
		if ( *(arr+i) < -10)
		dem = dem + 1 ;
	}
	return dem;
}
int TrungBinh( int *arr, int n )
{
	float  s = 0 ;
	float tb;
	int dem = 0 ;
	for ( int i = 2 ; i < n ; i+=2)
	{
    	dem = dem + 1 ;
		s = s + *(arr+i);
	}
	tb = s/dem;
	return tb ; 
}
main(){
int n ;
printf("Nhap do dai  : ");
scanf("%d",&n);
int *p= (int *)malloc(n*sizeof(int));
NhapMang(p,n);
InMang(p,n);
printf(" \n Phan tu am dau tien trong mang la %d ",AmDauTien(p,n));
printf(" \n Dem cac so nho hon -10 la : %d",demphantu(p,n));
printf(" \n Trung binh phan tu o vi tri chan %d",TrungBinh(p,n));
}
