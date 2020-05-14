#include <stdio.h>

void main()
{
	int a, b;
	printf("Moi ban nhap a, b: ");
	scanf("%d %d", &a, &b);
//////////////////////////////////////////// 
	if (a % b == 0)
		printf("a chia het cho b");
	else
		printf("a khong chia het cho b");
}
