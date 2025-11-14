#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() { //sayi random sayi,giris bizim tahmin
    
     printf("baslamak icin enter'a basin");
     while(getchar() != '\n');//getchartek karakter okuma
     
    int sayi, giris;
    int sayac=0;// sayac ekledim
    int puans=10;//puan sayaci
    srand(time(NULL));//srand her zaman ayni degeri almasin diye null a zamani degisken yapma diye
    sayi = rand() % 100+1 ; //1-99 olmasin diye

    printf("1 ile 100 arasinda bir sayi tahmin et\n");
     
    
    while (sayac<3) { 
        printf("girin: ");
        scanf("%d", &giris);
        
        sayac++;

        if (giris == sayi) {
            printf("dogru\n");
            break;
        } 
        if (giris<sayi) {
            printf("arttirin!\n"); 
        } 
        if (giris>sayi) {
            printf("azaltin\n"); 
        }
        if(sayac==3){
        	printf("kaybettin cevap: %d\n ", sayi);
        
		}
	if (sayac == 1)
        puans = puans - 3;
    if (sayac == 2)
        puans = puans - 2;
    if (sayac == 3)
        puans = puans - 1;	
     {
	 printf("puan:%d\n", puans);
		}   
    
	}
   
    return 0;
}
