#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void bilgilendirme_menu(){
	//Bilgilendirmeyi yazzdıran kısım
	printf("Zar Atma Oyununa Hosgeldiniz\n");
	printf("Bu Oyun 1-6 Arasındaki Kisilerle Oynanabilir\n");
	printf("Lutfen Kisi Sayisini Giriniz: ");
}

int main() {
//Değişkenlerimiz
	int oyuncusayisi,zardeger1,zardeger2,zardeger3,zardeger4,zardeger5,zardeger6;
	//Yukarıdaki fonksiyonu çağırıp bilgilendirme menüsünü yazdıracak yer
	bilgilendirme_menu();
//Kişi sayısını alacak yer
	scanf("%d",&oyuncusayisi);
//Zar değerlerinin belirlendiği yer
	srand(time(NULL));
zardeger1=rand()%6+1;
sleep(0.1);
zardeger2=rand()%6+1;
sleep(0.1);
zardeger3=rand()%6+1;
sleep(0.1);
zardeger4=rand()%6+1;
sleep(0.1);
zardeger5=rand()%6+1;
sleep(0.1);
zardeger6=rand()%6+1;
//Verdiğimiz oyuuncu sayısına göre seçim yapan yer	
switch (oyuncusayisi)
	{
	case 1:
	//Oyuncu 1	
	printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d",zardeger1);
		break;

	case 2:
	//Oyuncu 1
	printf("Zar Cevriliyor\n");
		sleep(1);
		
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
//Oyuncu 2
		printf("Zar Cevriliyor\n");
		sleep(1);
		
		printf("Oyuncu 2 Gelen Zar = %d",zardeger2);
		break;

	case 3:
	//Oyuncu 1
	printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
//Oyuncu 2
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);
//Oyuncu 3
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);
		break;
	case 4:
	//Oyuncu 1
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
//Oyuncu 2
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);
//Oyuncu 3
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);
//Oyuncu 4
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);

		break;
	case 5:
	//Oyuncu 1
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
//Oyuncu 2
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);
//Oyuncu 3
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);
//Oyuncu 4
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);
//Oyuncu 5
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 5 Gelen Zar = %d\n",zardeger5);
		break;

	case 6:
	//Oyuncu 1
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
//Oyuncu 2
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);
//Oyuncu 3
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);
//Oyuncu 4
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);
//Oyuncu 5
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 5 Gelen Zar = %d\n",zardeger5);
//Oyuncu 6
		printf("Zar Cevriliyor\n");
		sleep(1);
		printf("Oyuncu 6 Gelen Zar = %d\n",zardeger6);
		break;

	default:
	//Hatalı girişte yazdırılacak kısım
		printf("Yanlis veya Hatali Sayi Girisi Yaptiniz\n");
		printf("Programdan cikiliyor");
	}

	return 0;
}