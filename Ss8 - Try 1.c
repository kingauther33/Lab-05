#include <stdio.h>

int main()
{
	int x, y;
	printf("Moi ban nhap gia tri cua x va y: ");
	scanf("%d %d", &x, &y);
////////////////////////////////////////////////////////////////////////////////
	if ((x<2000) || (x>3000))
		printf("X thoa man dieu kien nen duoc in ra. X = %d", x);
	else 
		printf("X khong thoa man dieu kien ");
	if ((y>=100) && (y<=500))
		printf("\nY thoa man dieu kien nen duoc in ra. Y = %d", y);
	else
		printf("\nY khong thoa man dieu kien nen khong duoc in ra");
//////////////////////////////////////////// ///////////////////////////////////
	return 0;	
}
