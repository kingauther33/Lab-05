#include <stdio.h>

void main()
{
	int diemsv;
	printf("Moi ban nhap diem sv: ");
	scanf("%d", &diemsv);
	if (diemsv >= 75)
		printf("Sinh vien loai A");
	else if (diemsv >= 60)
		printf("Sinh vien loai B");
	else if (diemsv >= 45)
		printf("Sinh vien loai C");
	else
		printf("Sinh vien loai E");
}
