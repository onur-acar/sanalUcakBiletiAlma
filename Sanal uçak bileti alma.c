#include <stdio.h>
#include <locale.h>
int main(){
		setlocale(LC_ALL,"Turkish");
	
	int secenek,sinifa,sinifb,sinifc,zaman,bilets,fiyat,iptal;
	
menu:	printf("\nOnur Havayollar�na ho�geldiniz.Ben Onur Havayollar� sanal asistan� F�nd�k.Size nas�l yard�mc� olabilirim?\n1)Bilet alma.\n2)Bilet iptal.");
		scanf("%d",&secenek);
		
		if(secenek==1){
a:			printf("\nBiletinizi ne zamana almak istersiniz?\n1)sabah\n2)��leden sonra\n3)gece");
				scanf("%d",&zaman);
			if(zaman==1){
b:			printf("\nBiletinizi sabah hangi s�n�fta almak istersiniz?\n1)1.s�n�f\n2)ekonomi s�n�f�");
			scanf("%d",&sinifa);
				if(sinifa==1){
					printf("1.s�n�fta ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 150TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*150)-((bilets*150)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}
				else if(sinifa==2){
					printf("Ekonomi s�n�f�nda ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 100TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*100)-((bilets*100)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}
				else{
					printf("Hatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.");
					goto b;
				}
			}
			else if(zaman==2){
c:			printf("\nBiletinizi ��leden sonra hangi s�n�fta almak istersiniz?\n1)1.s�n�f\n2)ekonomi s�n�f�");
			scanf("%d",&sinifb);
				if(sinifb==1){
					printf("1.s�n�fta ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 140TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*140)-((bilets*140)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}
				else if(sinifb==2){
					printf("Ekonomi s�n�f�nda ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 90TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*90)-((bilets*90)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}
				else{
						printf("Hatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.");
						goto c;
				}
			}
			else if(zaman==3){
d:     		printf("Biletinizi gece hangi s�n�fta almak istersiniz?\n1)1.s�n�f\n2)ekonomi s�n�f�");
			scanf("%d",&sinifc);
				if(sinifc==1){
					printf("1.s�n�fta ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 120TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*120)-((bilets*120)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}	
				else if(sinifc==2){
					printf("Ekonomi s�n�f�nda ka� bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyat� 70TL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*70)-((bilets*70)*15/100);
							printf("Biletinizin fiyat� %dTL.Onur Havayollar�n� tercih etti�iniz i�in te�ekk�r eder iyi u�u�lar dileriz.",fiyat);
						}
				}
				else{
						printf("Hatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.");
						goto d;
				}
			}
			else{
				printf("Hatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.");
				goto a;
			}
		}
		else if(secenek==2){
iptal:			printf("\nSistemde 1 ve 2 no lu biletleriniz g�z�k�yor.Hangisini iptal etmek istersiniz?\n1)1no lu\n2)2no lu\n3)Hepsini");
			scanf("%d",&iptal);
				if(iptal==1){
					printf("1no lu biletiniz iptal edilmi�tir.");
				}
				else if(iptal==2){
					printf("2no lu biletiniz iptal edilmi�tir.");
				}
				else if(iptal==3){
					printf("Biletlerinizin hepsi iptal edilmi�tir.");
				}
				else{
					printf("Hatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.");
					goto iptal;
				}
		}
		else{
			printf("\nHatal� giri� yapt�n�z.L�tfen tekrar deneyiniz.\n");
			goto menu;
		}
	
return 0;

}
