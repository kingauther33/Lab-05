#include <stdio.h>

int main()
{
	int m1, m2 ,m3 ;
	double per;
	printf("Nhap diem lan luot 3 mon cua sinh vien: ");
	scanf("%d %d %d", &m1, &m2, &m3);
	per = ((double) (m1 + m2 + m3)) / 3;
//////////////////////////////////////////////////////////////
	if (((m1<=100) && (m1>0)) && ((m2<=100) && (m2>0)) && ((m3<=100) && (m3>0)))
	{
		if (per >= 90)
			printf("Sinh vien voi 3 diem nhu tren la loai E+");
		else if (per >= 80)
			printf("Sinh vien voi 3 diem nhu tren la loai E");
		else if (per >= 70)
			printf("Sinh vien voi 3 diem nhu tren la loai A+");
		else if (per >= 60)
			printf("Sinh vien voi 3 diem nhu tren la loai A");	
		else if (per >= 50)
			printf("Sinh vien voi 3 diem nhu tren la loai B+");
		else
			printf("Sinh vien khong du dieu kien qua mon");
	}
	else 
		printf("Diem so cua sinh vien nhap vao khong hop le");
//////////////////////////////////////////////////////////////	
		return 0;
}
