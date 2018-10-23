#include<conio.h>
#include<stdio.h>
int GiaiThua(int n )
{
	int gt = 1 ;
	 for (int i = 2 ; i <= n ; i++ )
	 {
	 	gt = gt*i;
	 }
	 return gt;
	 
}
main(){
	int n ;
	printf("Nhap So N =  ");
	scanf("%d",&n);
	printf("Giai thua cua %d bang %d   ",n,GiaiThua(n));
}
