#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void bilgilendirme_menu() {
	//Bilgilendirmeyi yazzdıran kısım
	printf("Zar Atma Oyununa Hosgeldiniz\n");
	printf("Bu Oyun 1-6 Arasındaki Kisilerle Oynanabilir\n");
	printf("Lutfen Kisi Sayisini Giriniz: ");
}
//Aşağıdaki void oyuncu1 ile başlayıp void oyuncu6 diye biten fonksiyon zar atma kısmıdır
void oyuncu1() {
	srand(time(NULL));
	int zardeger1=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);

}
void oyuncu2() {
	int zardeger2=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 2 Gelen Zar = %d\n",zardeger2);

}
void oyuncu3() {
	int zardeger3=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 3 Gelen Zar = %d\n",zardeger3);

}
void oyuncu4() {
	int zardeger4=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 4 Gelen Zar = %d\n",zardeger4);

}
void oyuncu5() {
	int zardeger5=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 5 Gelen Zar = %d\n",zardeger5);

}
void oyuncu6() {
	int zardeger6=rand()%6+1;
	printf("Zar Cevriliyor\n");
	sleep(1);
	printf("Oyuncu 6 Gelen Zar = %d\n",zardeger6);

}
int main() {
	//Değişken
	int oyuncusayisi;
	//Yukarıdaki fonksiyonu çağırıp bilgilendirme menüsünü yazdıracak yer
	bilgilendirme_menu();
	//Kişi sayısını alacak yer
	scanf("%d",&oyuncusayisi);
	//Verdiğimiz oyuuncu sayısına göre seçim yapan yer
	switch (oyuncusayisi)
	{
	case 1:
		//Oyuncu 1
		oyuncu1();
		break;

	case 2:
		//Oyuncu 1
		oyuncu1();
		//Oyuncu 2
		oyuncu2();
		break;

	case 3:
		//Oyuncu 1
		oyuncu1();
		//Oyuncu 2
		oyuncu2();
		//Oyuncu 3
		oyuncu3();
		break;
	case 4:
		//Oyuncu 1
		oyuncu1();
		//Oyuncu 2
		oyuncu2();
		//Oyuncu 3
		oyuncu3();
		//Oyuncu 4
		oyuncu4();
		break;
	case 5:
		//Oyuncu 1
		oyuncu1();
		//Oyuncu 2
		oyuncu2();
		//Oyuncu 3
		oyuncu3();
		//Oyuncu 4
		oyuncu4();
		//Oyuncu 5
		oyuncu5();
		break;
	case 6:
		//Oyuncu 1
		oyuncu1();
		//Oyuncu 2
		oyuncu2();
		//Oyuncu 3
		oyuncu3();
		//Oyuncu 4
		oyuncu4();
		//Oyuncu 5
		oyuncu5();
		//Oyuncu 6
		oyuncu6();
		break;

	default:
		//Hatalı girişte yazdırılacak kısım
		printf("Yanlis veya Hatali Sayi Girisi Yaptiniz\n");
		printf("Programdan cikiliyor");
	}

	return 0;
}