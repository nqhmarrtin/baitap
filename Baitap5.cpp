#include<stdio.h>
#include<conio.h>

float  TinhTienDien( float dc, float dm)
{
	float tien = 0 ;
	float chiso =  dm - dc ;
	if ((chiso>0) &&( chiso<50)) 
	{
		tien =  chiso*1500;
	}
	else if ((chiso>=50)&&(chiso<=100)) 
	{
	
		tien = (49*1500) + ((chiso-49)*2000);
	}
	else if (chiso>100) 
	{
		tien = (49*1500) + (51*2000) + ((chiso-100));
	}
	else printf("SAN DA NHAP SAI ");
	return tien;
}

main(){
	float dc,dm;
	printf("Nhap chi so dien cu = ");
	scanf("%f",&dc);
	printf("Nhap chi so dien moi = ");
	scanf("%f",&dm);
	printf("Tong so tien ban can phai thanh toan tien dien = %f ",TinhTienDien(dc,dm));
	
	
}
