#include <stdio.h>

int main(){
	int x,y;
	printf(" Program Funsi Untuk Mengetahui Kuadran Suatu Koordinat\n\n");
	printf(" Masukkan Koordinat x : ");
	scanf("%i",&x);
	printf(" Masukkan Koordinat y : ");
	scanf("%i",&y);
	
	if(x>0&&y>0)
		printf("Kuadran I");
	if(x>0&&y<0)
		printf("Kuadran II");
	if(x<0&&y<0)
		printf("Kuadran III");
	if(x==0&&y==0)
		printf("Titik Pusat");
	return 0;
}
