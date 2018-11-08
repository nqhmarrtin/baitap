#include<stdio.h>
#include<conio.h>
int kt(char s[]){   
    int t;
    
    t=0;   
    while (s[t] != '\0')
    t=t+1;   
    return(t);
}  
int main(){
	char s[100];
    printf("Nhap vao chuoi ki tu: ");
	scanf("%s",&s);
	printf("Chuoi co %d ki tu \n ", kt(s));
}
