#include <stdio.h>

void main()
{
	int basic, trocap;
	char nvien;
	printf("Nhap loai nhan vien: ");
	scanf("%c", &nvien);
	printf("Nhap luong co ban cua nhan vien do: ");
	scanf("%d", &basic);
////////////////////////////////////////////
	switch (nvien)
	{	
		case 'A' :
			trocap = 300;
			break;
		case 'B' :
			trocap = 150;
			break;
		default :
			trocap = 100;
			break;	
	}
//////////////////////////////////////////// 
	printf("Luong cua nhan vien voi dieu kien nhu tren la: %d", basic + trocap);
}
