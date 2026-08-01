#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
	int oyuncusayisi,zardeger1,zardeger2,zardeger3,zardeger4,zardeger5,zardeger6;
	printf("Zar Atma Oyununa Hosgeldiniz\n");
	printf("Bu Oyun 1-6 Arasındaki Kisilerle Oynanabilir\n");
	printf("Lutfen Kisi Sayisini Giriniz: ");
	scanf("%d",&oyuncusayisi);
srand(time(NULL));
zardeger1=rand()%6+1;
zardeger2=rand()%6+1;
zardeger3=rand()%6+1;
zardeger4=rand()%6+1;
zardeger5=rand()%6+1;
zardeger6=rand()%6+1;
	switch (oyuncusayisi)
	{
	case 1:
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d",zardeger1);
		break;

	case 2:
		printf("Zar Cevriliyor\n");
		sleep(1);
		
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

		printf("Zar Cevriliyor\n");
		sleep(1);
		
		printf("Oyuncu 2 Gelen Zar = %d",zardeger2);
		break;

	case 3:
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);
		break;
	case 4:
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);

		break;
	case 5:
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 5 Gelen Zar = %d\n",zardeger5);
		break;

	case 6:
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 5 Gelen Zar = %d\n",zardeger5);

		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 6 Gelen Zar = %d\n",zardeger6);
		break;

	default:
		printf("Yanlis veya Hatali Sayi Girisi Yaptiniz\n");
		printf("Programdan cikiliyor");
	}














	return 0;
}