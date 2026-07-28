#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
int oyuncusayisi,zardeger1;
printf("Zar Atma Oyununa Hosgeldiniz\n");
printf("Bu Oyun 1-6 Arasındaki Kisilerle Oynanabilir\n");
printf("Lutfen Kisi Sayisini Giriniz: ");
scanf("%d",&oyuncusayisi);

switch (oyuncusayisi)
{
case 1:
printf("Zar Cevriliyor\n");
sleep(1);
 srand(time(NULL));
zardeger1=rand()%6;
printf("Oyuncu 1 Gelen Zar = %d",zardeger1);
break;
case 2:
printf("Zar Cevriliyor\n");
sleep(1);
 srand(time(NULL));
zardeger1=rand()%6;
printf("Oyuncu 1 Gelen Zar = %d\n",zardeger1);
int zardeger2;
printf("Zar Cevriliyor\n");
sleep(1);
 srand(time(NULL));
zardeger2=rand()%6;
printf("Oyuncu 1 Gelen Zar = %d",zardeger2);
break;
}













    return 0;
}