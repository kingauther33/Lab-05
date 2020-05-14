#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b, m1;
	printf("Moi ban nhap a, b: ");
	scanf("%d %d", &a, &b);
	m1 = abs(a-b);
//////////////////////////////////////////// 
	if (m1 == a)
		printf("Hieu hai so bang a: %d", a);
	else if (m1 == b)
		printf("Hieu hai so bang b: %d", b);
	else
		printf("Hieu hai so khong bang a hoac b");	
}
