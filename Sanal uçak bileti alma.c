#include <stdio.h>
#include <locale.h>
int main(){
		setlocale(LC_ALL,"Turkish");
	
	int secenek,sinifa,sinifb,sinifc,zaman,bilets,fiyat,iptal;
	
menu:	printf("\nOnur Havayollarýna hoþgeldiniz.Ben Onur Havayollarý sanal asistaný Fýndýk.Size nasýl yardýmcý olabilirim?\n1)Bilet alma.\n2)Bilet iptal.");
		scanf("%d",&secenek);
		
		if(secenek==1){
a:			printf("\nBiletinizi ne zamana almak istersiniz?\n1)sabah\n2)öðleden sonra\n3)gece");
				scanf("%d",&zaman);
			if(zaman==1){
b:			printf("\nBiletinizi sabah hangi sýnýfta almak istersiniz?\n1)1.sýnýf\n2)ekonomi sýnýfý");
			scanf("%d",&sinifa);
				if(sinifa==1){
					printf("1.sýnýfta kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 150TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*150)-((bilets*150)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}
				else if(sinifa==2){
					printf("Ekonomi sýnýfýnda kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 100TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*100)-((bilets*100)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}
				else{
					printf("Hatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.");
					goto b;
				}
			}
			else if(zaman==2){
c:			printf("\nBiletinizi öðleden sonra hangi sýnýfta almak istersiniz?\n1)1.sýnýf\n2)ekonomi sýnýfý");
			scanf("%d",&sinifb);
				if(sinifb==1){
					printf("1.sýnýfta kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 140TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*140)-((bilets*140)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}
				else if(sinifb==2){
					printf("Ekonomi sýnýfýnda kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 90TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*90)-((bilets*90)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}
				else{
						printf("Hatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.");
						goto c;
				}
			}
			else if(zaman==3){
d:     		printf("Biletinizi gece hangi sýnýfta almak istersiniz?\n1)1.sýnýf\n2)ekonomi sýnýfý");
			scanf("%d",&sinifc);
				if(sinifc==1){
					printf("1.sýnýfta kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 120TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*120)-((bilets*120)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}	
				else if(sinifc==2){
					printf("Ekonomi sýnýfýnda kaç bilet almak istiyorsunuz?");
					scanf("%d",&bilets);
						if(bilets==1){
							printf("Biletinizin fiyatý 70TL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.");
						}
						else if(bilets>1){
							fiyat=(bilets*70)-((bilets*70)*15/100);
							printf("Biletinizin fiyatý %dTL.Onur Havayollarýný tercih ettiðiniz için teþekkür eder iyi uçuþlar dileriz.",fiyat);
						}
				}
				else{
						printf("Hatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.");
						goto d;
				}
			}
			else{
				printf("Hatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.");
				goto a;
			}
		}
		else if(secenek==2){
iptal:			printf("\nSistemde 1 ve 2 no lu biletleriniz gözüküyor.Hangisini iptal etmek istersiniz?\n1)1no lu\n2)2no lu\n3)Hepsini");
			scanf("%d",&iptal);
				if(iptal==1){
					printf("1no lu biletiniz iptal edilmiþtir.");
				}
				else if(iptal==2){
					printf("2no lu biletiniz iptal edilmiþtir.");
				}
				else if(iptal==3){
					printf("Biletlerinizin hepsi iptal edilmiþtir.");
				}
				else{
					printf("Hatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.");
					goto iptal;
				}
		}
		else{
			printf("\nHatalý giriþ yaptýnýz.Lütfen tekrar deneyiniz.\n");
			goto menu;
		}
	
return 0;

}
