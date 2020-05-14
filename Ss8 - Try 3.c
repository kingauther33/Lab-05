#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("Nhap 3 co a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
//////////////////////////////////////////////////////////////////
	if (b>max)	
		max = b;
	if (c>max)
		max = c;					
	printf("Gia tri lon nhat cua 3 so a, b, c la: %d", max);
//////////////////////////////////////////////////////////////////
	return 0;
}
