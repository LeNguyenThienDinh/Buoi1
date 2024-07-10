#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;

	printf("nhap vao so a: ");
	scanf("%d", &a);
	printf("nhap vao so b: ");
	scanf("%d", &b);
	printf("nhap vao so c: ");
	scanf("%d", &c);
	int thuong = c / (a - b);
	if (a != b)
	{
		printf("Ket qua la: %d", thuong);
	}
	else
	{
		printf("Loi mau so phai khac 0");
	}

	return 0;

}