//Ertuðrul Baþar Ödev3 450
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	char cvp1; //baþlama sorusuyla ilgili tanýmlama
	char ad1[56]; //yarýþmacýnýn adý
	char ad2[56]; //yarýþmacýnýn soyadý
	char s1cvp; //sorulara yarýþmacýnýn verdiði cevaplarýn tanýmý
	char s2cvp;
	char s3cvp;
	char r1; //sorularýn doðru cevaplarýnýn tanýmý
	char r2;
	char r3;
	int kasadaki_para=0; //kullanýcýnýn kaç para kazandýðýnýn tanýmý
	FILE* cevapdosyasi=fopen("cevap_anahtari.txt","r"); //cevaplarýn alýndýðý dosyanýn açýlýmý
	fscanf(cevapdosyasi," %c", &r1); //cevaplarýn dosyadan okunmasý
	fscanf(cevapdosyasi," %c", &r2);
	fscanf(cevapdosyasi," %c", &r3);
//renk gösterisi. ilk renk düzeni doðru cevabý, ikincisi yanlýþ cevabý ve sonuncusu da normal ekraný gösteren renkler
	system("COLOR 18");
//renklerin hemen kaybolmamasý ve daha iyi görsellik için aralara bekleme süresi
	Sleep(500);
	system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR 18");
	Sleep(500);
	system("COLOR C0");
	Sleep(500);
	system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	Sleep(100);
	printf("Merhabalar efendim, dunyanin en zorlu yarismasina, Sikiysa Bil'e hos geldiniz. \nBu sorularla ozel olarak ilgilenen hocalarimiz, ");
//görsellik açýsýndan bazý kýsýmlar kesilerek aralara bekleme süresi kondu
	Sleep(200);
	printf("size soracagimiz bu ozel sorulari hazirlamak icin cok\nuzun sureler calisiyorlar. Ancak bu zor sorulara karsilik, odullerimiz de");
	Sleep(200);
	printf(" cok guzel. Bildiginiz her\nsoruya karsilik 20000$ kazanmak cok da kotu olmasa gerek.");
	Sleep(200);
	printf(" Dilerseniz yarismaya gecelim...\n\n");
	Sleep(200);
	printf("Eger yarismaya hazirsaniz, i tusuna basip enterlayin; eger yarismaktan vazgectiyseniz k'ye basin\n(cevabinizi bundan sonra sadece kucuk harflerle belirtiniz, ayrica birden fazla giris \nyaparsaniz ilk girisiniz gecerli olur)");
	scanf("%c", &cvp1);
//yarýþmaya baþlayýp baþlanmayacaðýný algýlayacak kodlar
	if(cvp1=='i')
	{printf("\nHadi baslayalim o zaman :)\n");
	}
	else if(cvp1=='k')
	{printf("\nSonraki hayatinizda basarilar :)");
	getch();
	getch();
	return 0;
	} 
	else
	{printf("\nEger e veya k'ya basmaya akliniz yoksa keske hic basvurmasaydiniz :'(");
	getch();
	return 0;
	}
	system("cls"); //ekran temizlenerek görselliðin arttýrýlmasý istendi
	printf("Buradan sonra sadece soruda belirtilen seceneklerin oldugu harfleri tuslayiniz\nYanlis girilen harfler sorunuzu yanlis olarak kaydeder..\n");
	sleep(3);
//Soru1	baþlýyor
	system("COLOR 18");
	Sleep(200);
	system("COLOR C0");
	Sleep(200);
	system("COLOR 07");
	Sleep(200);
	system("COLOR 18");
	Sleep(200);
	system("COLOR C0");
	Sleep(200);
	system("COLOR 18");
	Sleep(200);
	system("COLOR 07");
	printf("\n\nSoru1->\t\tAsagidakilerden hangisi Madagaskar'in baskentidir?\n");
	printf("\t\tA)Antananarivo\tB)Freetown\n");
	printf("\t\tC)Monrovia\tD)Bujumbura\n");
	fflush(stdin);
	scanf(" %c", &s1cvp);
// soru1'e verilen cevabýn doðru olup olmadýðýný algýlayan kýsým	
	if(r1==s1cvp)
	{system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	printf("Tebrikler, cevabiniz dogru, kasaniza 20000$ eklediniz\n");
	kasadaki_para=kasadaki_para+20000;
	printf("Su anda kasanizdaki toplam para %d$", kasadaki_para); //kasadaki paraya cevabýn doðruluðuna göre ekleme yapýldý. kasadaki toplam para gösterildi
	}
	else
	{system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	printf("\aCevabiniz maalesef yanlis.Dogru cevap %c \n",r1);
	printf("Su anda kasanizdaki toplam para %d$", kasadaki_para);
	}
	sleep(6);
	system("cls"); //ekran temizlenerek görselliðin arttýrýlmasý istendi
//Soru2
	printf("\nSoru2->\t\tDemokratik Kongo Cumhuriyeti'nin para birimi asagidakilerden hangisidir?\n");
	printf("\t\tA)Guney Afrika Randi\tB)Zairean Zaire\n");
	printf("\t\tC)Renminbi\t\tC)Botsvana Pulasi\n");
	fflush(stdin);
	scanf(" %c", &s2cvp);
	if(r2==s2cvp)
	{system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	printf("Tebrikler, cevabiniz dogru, kasaniza 20000$ eklediniz\n");
	kasadaki_para=kasadaki_para+20000;
	printf("Su anda kasanizdaki toplam para %d$", kasadaki_para);
	}
	else{system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	printf("\aCevabiniz maalesef yanlis.Dogru cevap %c \n",r2);
	printf("Su anda kasanizdaki toplam para %d$", kasadaki_para);
	}
	sleep(6);
	system("cls"); //ekran temizlenerek görselliðin arttýrýlmasý istendi
//Soru3
	printf("\nSiz degerli yarismacimiz icin bu cok zor sorumuzda secenek sayisini 3'e dusurduk.\n");
	printf("Ancak yine de bileceginizi dusunmuyoruz :)\n");
	sleep(4);
	printf("\nSoru3->\t\tPeru Cumhuriyeti'nin ilk anayasasi hangi tarihte kabul edilmistir?\n");
	printf("\t\tA)28 Temmuz 1821\tB)9 Aralik 1824");
	printf("\t\tC)14 Agustos 1879\n");
	fflush(stdin);
	scanf(" %c", &s3cvp);
	if(r3==s3cvp)
	{system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR 18");
	Sleep(500);
	system("COLOR 07");
	printf("Tebrikler, cevabiniz dogru, kasaniza 20000$ eklediniz \n");
	kasadaki_para=kasadaki_para+20000;
	printf("Yarismamizdan %d$ kazandiniz \n", kasadaki_para);
	}
	else
	{system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	Sleep(500);
	system("COLOR C0");
	Sleep(500);
	system("COLOR 07");
	printf("\aCevabiniz maalesef yanlis.Dogru cevap %c \n",r3);
	printf("Yarismamizdan %d$ kazandiniz \n", kasadaki_para);
	}
	sleep(6);
	system("cls"); //ekran temizlenerek görselliðin arttýrýlmasý istendi
	if(kasadaki_para>0)
	{
	fflush(stdin);
	printf("Cekinizi yazdirmadan once adinizi alabilir miyim?\n");
	scanf("%s", ad1);
	fflush(stdin); // ad soyad birlikte girerse kodumuz yanlýþ anlamasýn diye tamponu boþaltma amaçlý bu kod eklendi
	printf("\nSimdi de soyadinizi alabilir miyim?\n");
	scanf("%s", ad2);
	FILE* odul=fopen("odul.txt","w"); //çek yazdýrma kodu
	fprintf(odul,"Bu cek %s %s adli kisiye verilmistir. %d$ degerindedir.",ad1,ad2,kasadaki_para,"w");
	system("cls"); //ekran temizlenerek görselliðin arttýrýlmasý istendi
	printf("Cekinizi bu yarismaya giris yaptiginiz klasorde odul.txt olarak bulabilirsiniz..");
	}
	else
	{printf("\aHicbir odul kazanamadiniz, saglicakla kalin!");
	}
	
	
	
	getch();
	return 0;
}
