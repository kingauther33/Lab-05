#include <stdio.h>

void main()
{
	int a, b, tich;
	printf("Moi ban nhap vao 2 so a, b: ");
	scanf("%d %d", &a, &b);
	tich = a*b;
//////////////////////////////////////////// 
	if (tich>1000)
		printf("Tich a va b lon hon 1000");
	else if (tich == 1000)
		printf("Tich cua a va b bang 1000");
	else
		printf("Tich cua a va b nho hon 1000");
}
