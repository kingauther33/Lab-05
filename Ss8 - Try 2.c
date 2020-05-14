#include <stdio.h>

int main()
{
	char letter;
	printf("Moi ban nhap ki tu de hien thi ngon ngu lap trinh tuong ung: ");
	scanf("%c", &letter);
	if ((letter >= 'A') && (letter <= 'Z'))
		letter = letter + 'a' - 'A';  // co the thay the bang cach gan nhu sau: letter = tolower(letter);
//////////////////////////////////////////////////////////////////////////////////////// 
	switch (letter)
	{
		case 'a':
			printf("Ngon ngu lap trinh tuong ung la: Ada");
			break;
		case 'b':
			printf("Ngon ngu lap trinh tuong ung la: Basic");
			break;
		case 'c':
			printf("Ngon ngu lap trinh tuong ung la: COBOL");
			break;
		case 'd':
			printf("Ngon ngu lap trinh tuong ung la: dBASE III");
			break;
		case 'f':
			printf("Ngon ngu lap trinh tuong ung la: Fortran");
			break;
		case 'p':
			printf("Ngon ngu lap trinh tuong ung la: Pascal");
			break;
		case 'v':
			printf("Ngon ngu lap trinh tuong ung la: Visual C++");
			break;
		default:
			printf("Invalid Input");
			break;
	}
//////////////////////////////////////////////////////////////////////////////////////// 
	return 0;	
}
