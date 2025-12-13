#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int k = 78;
    int n;
    const char *cards[] = {
"Deli  Yeni baslangiclar, spontane, ozgur ruh", 
"Buyucu  Basarma gucu, beceriklilik, yetenek", 
"Bas Rahibe  Sezgi, gizem, bilincalti", 
"Imparatorice  Bereket, sefkat, yaratici enerji", 
"Imparator  Otorite, yapi, kontrol", 
"Aziz  Gelenek, manevi rehberlik, uyum", 
"Asiklar  Ask, uyum, iliskiler, secimler", 
"Savas Arabasi  Kararlilik, irade, zafer", 
"Guc  Cesaret, sabir, icsel guc", 
"Ermis  Ice donme, rehberlik, sorgulama", 
"Kader Carki  Degisim, donguler, kader", 
"Adalet  Adalet, dogruluk, hakkaniyet", 
"Asilan Adam  Duraklama, teslimiyet, birakmak", 
"Olum  Donusum, sonlar, yeni baslangiclar", 
"Denge  Olcululuk, denge, amac", 
"Seytan  Bagimlilik, maddiyat, tutkulaar", 
"Kule  Ani degisim, yikim, farkindalik", 
"Yildiz  Umut, inanc, ilham", 
"Ay  Yanilsama, sezgi, korkular", 
"Gunes  Pozitiflik, basari, canlilik", 
"Mahkeme  Degerlendirme, uyanis, hesaplasma", 
"Dunya  Tamamlanma, basari, butunluk",

"Kupa Asi  Yeni duygular, ask, sezgi", 
"Kupa Ikilisi  Ortaklik, cekim, baglanti", 
"Kupa Uclusu  Kutlama, dostluk, topluluk", 
"Kupa Dortlusu  Dusunme, ilgisizlik, yeniden degerlendirme", 
"Kupa Beslisi  Kayip, pismanlik, hayal kirikligi", 
"Kupa Altilisi  Gecmise donus, yeniden bulusma, masumiyet", 
"Kupa Yedilisi Secimler, hayal gucu, dilekler", 
"Kupa Sekizlisi  Uzaklasma, ice donme, geride birakma", 
"Kupa Dokuzlusu  Memnuniyet, tatmin, dileklerin gerceklesmesi", 
"Kupa Onlusu  Mutluluk, aile, uyum", 
"Kupa Prensi  Yaraticilik, merak, duygusal baslangiclar", 
"Kupa Sovalyesi Romantizm, cekicilik, kalbin pesinden gitmek", 
"Kupa Kralicesi  Sefkat, sakinlik, destek", 
"Kupa Krali  Duygusal denge, diplomasi, kontrol",

"Degnek Asi Ilham, yeni firsatlar, buyume", 
"Degnek Ikilisi  Planlama, ilerleme, kararlar", 
"Degnek Uclusu  Genisleme, ongoru, liderlik", 
"Degnek Dortlusu Kutlama, uyum, ev", 
"Degnek Beslisi  Catisma, rekabet, gerilim", 
"Degnek Altilisi  Basari, taninma, ilerleme", 
"Degnek Yedilisi  Mucadele, savunma, azim", 
"Degnek Sekizlisi  Hiz, aksiyon, hareket", 
"Degnek Dokuzlusu  Direnc, sebat, sinirlar", 
"Degnek Onlusu Yuk, sorumluluk, emek", 
"Degnek Prensi  Kesif, heves, yenilik", 
"Degnek Sovalyesi  Enerji, tutku, macera", 
"Degnek Kralicesi Ozguven, kararlilik, sicaklik", 
"Degnek Krali  Liderlik, vizyon, onur",

"Kilic Asi  Aciklik, atilimlar, dogruluk", 
"Kilic Ikilisi Zor secimler, cikmaz, kararsizlik", 
"Kilic Uclusu Kalp kirikligi, uzuntu, aci", 
"Kilic Dortlusu  Dinlenme, iyilesme, dusunme", 
"Kilic Beslisi Catisma, yenilgi, gerilim", 
"Kilic Altilisi  Gecis, ilerleme, yolculuk", 
"Kilic Yedilisi Aldatma, strateji, gizlilik", 
"Kilic Sekizlisi Kisitlama, izolasyon, korku", 
"Kilic Dokuzlusu Endise, kaygi, uykusuzluk", 
"Kilic Onlusu Sonlar, ihanet, kayip", 
"Kilic Prensi  Merak, dikkat, yeni fikirler", 
"Kilic Sovalyesi Hizli aksiyon, hirs, atilim", 
"Kilic Kralicesi  Bagimsizlik, algi, netlik", 
"Kilic Krali Otorite, akil, dogruluk",

"Pentakl Asi Yeni maddi firsat, bolluk", 
"Pentakl Ikilisi Denge, uyum, zaman yonetimi", 
"Pentakl Uclusu  Is birligi, takim calismasi, beceri", 
"Pentakl Dortlusu  Guvenlik, kontrol, tutumluluk", 
"Pentakl Beslisi  Zorluk, maddi kayip, endise", 
"Pentakl Altilisi  Comertlik, alma-verme, yardim", 
"Pentakl Yedilisi Sabir, yatirim, degerlendirme", 
"Pentakl Sekizlisi Ustalik, calisma, beceri gelistirme", 
"Pentakl Dokuzlusu Basari, bagimsizlik, bolluk", 
"Pentakl Onlusu  Servet, aile, miras", 
"Pentakl Prensi  Ogrenme, firsat, heves", 
"Pentakl Sovalyesi Sabir, sorumluluk, guvenilirlik", 
"Pentakl Kralicesi Pratiklik, sefkat, refah", 
"Pentakl Krali Basari, guven, liderlik"
    };

   
    srand(time(NULL));

    printf("Kac kart cekmek istiyorsunuz? ");
    scanf("%d", &n);

    printf("\nCekilen kartlar:\n");
    for(int i = 0; i < n; i++) {
        int index = rand() % k;
        int reversed = rand() % 2;
        printf("%d) %s (%s)\n", i+1, cards[index]);
    }

    return 0;
}
