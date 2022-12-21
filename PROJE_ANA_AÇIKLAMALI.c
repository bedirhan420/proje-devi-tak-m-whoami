/*
isim: Ahmet Efe
soyisim: Varan
numara: 22181616001

isim: Mehmet Enes 
soyisim: Tiske
numara: 22181616025

isim: Bedirhan 
soyisim: Çelik
numara: 22181616008

şube:2 
*/

#include <stdio.h> //printf fonksiyonunu kullanabilmek için
#include <conio.h> //getch fonksiyonunu kullanabilmek için

void marvel()
{

    int a[10][4] = {30, 20, 10, 40, 10, 30, 40, 20, 20, 30, 10, 40, 10, 40, 30, 20, 20, 30,
                    10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20, 20, 30, 10, 40, 10, 40};
    //sorular şıklarını puanlandırmak için matris satırlar soru sütünlar şık
    int total = 0;//puanları toplayıp atadığımız değişken
    printf(" \n |super kahraman testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");//test ile ilgili bilgileri yazdırmak için
    int soruno1 = 0; //puan matrisindeki sütünlar için oluşturduğumuz değişken
    char secenekler2; //işaretlenen şıkları kontrol etmek için oluşturduğumuz cedğişken
    FILE *textfile; 
    char line[666]; //satırdan kaç karakter okuyacağını belirliyoruz

    textfile = fopen("projesorular.txt", "r"); //dosya okumak için tanımladığımız değişken
    int x2 = 0; //soru dosyasındaki satırları kontrol etmek için

    while (fgets(line, 666, textfile)) //birden fazla satır okuyup yazdıracağımız için while döngüsünü kullandık
    {

        printf(line);//soru dosyasındaki satırları yazdırmak için
        if (x2 % 2 == 1)//sorular ve şıkları aynı anda yazdırması için 2 şer satır olmasını ayarladık
        {
            secenekler2 = getch();//getch fonksiyonu yardımıyla şık aldık
            printf("%c\n", secenekler2);//şıkkı yazdırdık
            switch (secenekler2)//seçenekler değişkenin olasılıklarına göre durumlarını yazdık
            {
            case 'A':
            case 'a':
                total += a[soruno1][0];//puan değerlerini tutan total değişkenine soru numarısı ve şıkkına karşılık gelen puanı ekledik
                soruno1++; //soru numarasını 1 arttırdık
                break; //case i kapattık
            case 'B':
            case 'b':
                total += a[soruno1][1];
                soruno1++;
                break;
            case 'C':
            case 'c':
                total += a[soruno1][2];
                soruno1++;
                break;
            case 'D':
            case 'd':
                total += a[soruno1][3];
                soruno1++;
                break;
            }
        }
        x2++;
    }

    if (60 <= total && total <= 100)//puan değerlerini tutan total değişkeninin aralıklarına göre sonuç yazdırdık
    {
        printf("super kahramaniniz: \n !HULK!");
    }
    if (110 <= total && total <= 150)
    {
        printf("super kahramaniniz: \n !IRONMAN!");
    }
    if (160 <= total && total <= 200)
    {
        printf("super kahramaniniz: \n !QUICKSILVER!");
    }
    if (210 <= total && total <= 240)
    {
        printf("super kahramaniniz: \n !PROFESOR X!");
    }
    if (250 <= total && total <= 290)
    {
        printf("super kahramaniniz: \n !WOLVERINE!");
    }
    if (300 <= total && total <= 340)
    {
        printf("super kahramaniniz: \n !MAGNETO!");
    }
    if (350 <= total && total <= 400)
    {
        printf("super kahramaniniz: \n !DR. STRANGE!");
    }

    fclose(textfile);//dosyayı kapattık
}

void dc()
{
    int b[10][4] = {20, 30, 10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20,
                    20, 30, 10, 40, 10, 40, 30, 20, 10, 40, 10, 30, 40, 20, 20, 30, 10, 40, 10, 40, 30, 20};
    int total1 = 0;
    printf("\n |super kahraman testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");
    int soruno2 = 0;
    char secenekler1;
    FILE *textfile;
    char line[666];

    textfile = fopen("projesorulardc.txt", "r");
    int x1 = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        if (x1 % 2 == 1)
        {
            secenekler1 = getch();
            printf("%c\n", secenekler1);
            switch (secenekler1)
            {
            case 'A':
            case 'a':
                total1 += b[soruno2][0];
                soruno2++;
                break;
            case 'B':
            case 'b':
                total1 += b[soruno2][1];
                soruno2++;
                break;
            case 'C':
            case 'c':
                total1 += b[soruno2][2];
                soruno2++;
                break;
            case 'D':
            case 'd':
                total1 += b[soruno2][3];
                soruno2++;
                break;
            }
        }
        x1++;
    }

    if (60 <= total1 && total1 <= 100)
    {
        printf("super kahramaniniz: \n !FLASH!");
    }
    if (110 <= total1 && total1 <= 150)
    {
        printf("super kahramaniniz: \n !SHAZAM!");
    }
    if (160 <= total1 && total1 <= 200)
    {
        printf("super kahramaniniz: \n !JOKER!");
    }
    if (210 <= total1 && total1 <= 240)
    {
        printf("super kahramaniniz: \n !WONDER WOMAN!");
    }
    if (250 <= total1 && total1 <= 290)
    {
        printf("super kahramaniniz: \n !GREEN LANTERN!");
    }
    if (300 <= total1 && total1 <= 340)
    {
        printf("super kahramaniniz: \n !BATMAN!");
    }
    if (350 <= total1 && total1 <= 400)
    {
        printf("super kahramaniniz: \n !SUPERMAN!");
    }

    fclose(textfile);
}

void sw()
{
    int c[10][4] = {30, 40, 10, 20, 20, 30, 10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20, 10, 30, 10, 30, 20, 40, 20, 10, 40, 30, 30, 40, 10, 20, 30, 20, 40, 10};
    int total2 = 0;
    printf(" \n |hangi starwars karakterisin testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");
    int soruno3 = 0;
    char secenekler3;
    FILE *textfile;
    char line[666];

    textfile = fopen("sorustarwars.txt", "r");
    int x2 = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        if (x2 % 2 == 1)
        {
            secenekler3 = getch();
            printf("%c\n", secenekler3);
            switch (secenekler3)
            {
            case 'A':
            case 'a':
                total2 += c[soruno3][0];
                soruno3++;
                break;
            case 'B':
            case 'b':
                total2 += c[soruno3][1];
                soruno3++;
                break;
            case 'C':
            case 'c':
                total2 += c[soruno3][2];
                soruno3++;
                break;
            case 'D':
            case 'd':
                total2 += c[soruno3][3];
                soruno3++;
                break;
            }
        }
        x2++;
    }

    if (60 <= total2 && total2 <= 100)
    {
        printf("star wars karakteriniz: \n !LUKE SKYWALKER!");
    }
    if (110 <= total2 && total2 <= 150)
    {
        printf("star wars karakteriniz: \n !OBI WAN KENOBI!");
    }
    if (160 <= total2 && total2 <= 200)
    {
        printf("star wars karakteriniz: \n !HAN SOLO!");
    }
    if (210 <= total2 && total2 <= 240)
    {
        printf("star wars karakteriniz: \n !CHEWBACA!");
    }
    if (250 <= total2 && total2 <= 290)
    {
        printf("star wars karakteriniz: \n !DARTH VADER!");
    }
    if (300 <= total2 && total2 <= 340)
    {
        printf("star wars karakteriniz: \n !R2-D2!");
    }
    if (350 <= total2 && total2 <= 400)
    {
        printf("star wars karakteriniz: \n !YODA!");
    }

    fclose(textfile);
}

void hp()
{
    int d[10][4] = {30, 40, 10, 20, 20, 30, 10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20, 10, 30, 10, 40, 20, 30, 20, 10, 40, 30, 30, 40, 20, 10, 30, 10, 40, 20};
    int total4 = 0;
    printf(" \n |hangi harry poterkarakterisin testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");
    int soruno4 = 0;
    char secenekler4;
    FILE *textfile;
    char line[666];

    textfile = fopen("projesorularhp.txt", "r");
    int x2 = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        if (x2 % 2 == 1)
        {
            secenekler4 = getch();
            printf("%c\n", secenekler4);
            switch (secenekler4)
            {
            case 'A':
            case 'a':
                total4 += d[soruno4][0];
                soruno4++;
                break;
            case 'B':
            case 'b':
                total4 += d[soruno4][1];
                soruno4++;
                break;
            case 'C':
            case 'c':
                total4 += d[soruno4][2];
                soruno4++;
                break;
            case 'D':
            case 'd':
                total4 += d[soruno4][3];
                soruno4++;
                break;
            }
        }
        x2++;
    }

    if (60 <= total4 && total4 <= 100)
    {
        printf("harry poter karakteriniz: \n !HERMONİE!");
    }
    if (110 <= total4 && total4 <= 150)
    {
        printf("harry poter karakteriniz: \n !DRACO!");
    }
    if (160 <= total4 && total4 <= 200)
    {
        printf("harry poter karakteriniz: \n !LUNA!");
    }
    if (210 <= total4 && total4 <= 240)
    {
        printf("harry poter karakteriniz: \n !DOBBY!");
    }
    if (250 <= total4 && total4 <= 290)
    {
        printf("harry poter karakteriniz: \n !DUMBLEDORE!");
    }
    if (300 <= total4 && total4 <= 340)
    {
        printf("harry poter karakteriniz: \n !VOLDEMORT!");
    }
    if (350 <= total4 && total4 <= 400)
    {
        printf("harry poter karakteriniz: \n !HARRY POTER!");
    }

    fclose(textfile);
}

void lotr()
{
    int d[10][4] = {30, 40, 10, 20, 20, 30, 10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20, 10, 30, 10, 40, 20, 30, 20, 10, 40, 30, 30, 40, 20, 10, 30, 10, 40, 20};
    int total4 = 0;
    printf(" \n |hangi lotr karakterisin testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");
    int soruno4 = 0;
    char secenekler4;
    FILE *textfile;
    char line[666];

    textfile = fopen("sorulotr.txt", "r");
    int x2 = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        if (x2 % 2 == 1)
        {
            secenekler4 = getch();
            printf("%c\n", secenekler4);
            switch (secenekler4)
            {
            case 'A':
            case 'a':
                total4 += d[soruno4][0];
                soruno4++;
                break;
            case 'B':
            case 'b':
                total4 += d[soruno4][1];
                soruno4++;
                break;
            case 'C':
            case 'c':
                total4 += d[soruno4][2];
                soruno4++;
                break;
            case 'D':
            case 'd':
                total4 += d[soruno4][3];
                soruno4++;
                break;
            }
        }
        x2++;
    }

    if (60 <= total4 && total4 <= 100)
    {
        printf("lotr karakteriniz: \n !FRODO!");
    }
    if (110 <= total4 && total4 <= 150)
    {
        printf("lotr karakteriniz:  \n !LEGOLAS!");
    }
    if (160 <= total4 && total4 <= 200)
    {
        printf("hlotr karakteriniz: \n !GIMLI!");
    }
    if (210 <= total4 && total4 <= 240)
    {
        printf("lotr karakteriniz: \n !ARAGORN!");
    }
    if (250 <= total4 && total4 <= 290)
    {
        printf("lotr karakteriniz:  \n !ARWEN!");
    }
    if (300 <= total4 && total4 <= 340)
    {
        printf("lotr karakteriniz:  \n !GANDALF!");
    }
    if (350 <= total4 && total4 <= 400)
    {
        printf("lotr karakteriniz:  \n !SAURON!");
    }

    fclose(textfile);
}

void dune()
{
    int d[10][4] = {30, 40, 10, 20, 20, 30, 10, 40, 40, 20, 10, 30, 30, 20, 10, 40, 20, 30, 10, 40, 40, 20, 10, 30, 10, 40, 20, 30, 20, 10, 40, 30, 30, 40, 20, 10, 30, 10, 40, 20};
    int total4 = 0;
    printf(" \n |hangi dune karakterisin testine hosgeldiniz| \n \n");
    printf("cevabinizi girdikten sonra  entera basin. \n \n");
    int soruno4 = 0;
    char secenekler4;
    FILE *textfile;
    char line[666];

    textfile = fopen("projesorulardune.txt", "r");
    int x2 = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        if (x2 % 2 == 1)
        {
            secenekler4 = getch();
            printf("%c\n", secenekler4);
            switch (secenekler4)
            {
            case 'A':
            case 'a':
                total4 += d[soruno4][0];
                soruno4++;
                break;
            case 'B':
            case 'b':
                total4 += d[soruno4][1];
                soruno4++;
                break;
            case 'C':
            case 'c':
                total4 += d[soruno4][2];
                soruno4++;
                break;
            case 'D':
            case 'd':
                total4 += d[soruno4][3];
                soruno4++;
                break;
            }
        }
        x2++;
    }

    if (60 <= total4 && total4 <= 100)
    {
        printf("dune karakteriniz: \n !PAUL!");
    }
    if (110 <= total4 && total4 <= 150)
    {
        printf("dune karakteriniz:\n !CHANİ!");
    }
    if (160 <= total4 && total4 <= 200)
    {
        printf("dune karakteriniz: \n !LEYDİ JESSİCA!");
    }
    if (210 <= total4 && total4 <= 240)
    {
        printf("dune karakteriniz: \n !GURNEY HALLECK!");
    }
    if (250 <= total4 && total4 <= 290)
    {
        printf("dune karakteriniz:\n !STİLGAR!");
    }
    if (300 <= total4 && total4 <= 340)
    {
        printf("dune karakteriniz: \n !PITER DE VRİES!");
    }
    if (350 <= total4 && total4 <= 400)
    {
        printf("dune karakteriniz: \n !LİET-KAYNES!");
    }

    fclose(textfile);
}

void cizgiroman()
{

    char secenekler5;//işaretlenen şıkları kontrol etmek için oluşturduğumuz cedğişken
    FILE *textfile;
    char line[666];

    textfile = fopen("projeonsorular.txt", "r");
    int x = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        x++;

        if (x == 2)//2 satır okuması için
        {
            printf("\n");
            secenekler5 = getch();
            printf("%c\n", secenekler5);
            switch (secenekler5)
            {
            case 'A':
            case 'a':

                marvel();//seçilen şıklara göre asıl soruların bulunduğu fpnksiyonları çağırdık

                break;

            case 'B':
            case 'b':

                dc();

                break;
            }
        }
        if (x == 3)//2 satır okuması yeterli olduğu için 3.de döngüden çıkardık
        {
            break;
        }
    }
    fclose(textfile);//dosyayı kapattık
}

void fantastik()
{

    char secenekler5;
    FILE *textfile;
    char line[666];

    textfile = fopen("projeonsorularfantastik.txt", "r");
    int x = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        x++;

        if (x == 2)
        {
            printf("\n");
            secenekler5 = getch();
            printf("%c\n", secenekler5);
            switch (secenekler5)
            {
            case 'A':
            case 'a':

                lotr();

                break;

            case 'B':
            case 'b':

                hp();

                break;
            }
        }
        if (x == 3)
        {
            break;
        }
    }
    fclose(textfile);
}

void bilimkurgu()
{

    char secenekler5;
    FILE *textfile;
    char line[666];

    textfile = fopen("projeonsorularbilimkurgu.txt", "r");
    int x = 0;

    while (fgets(line, 666, textfile))
    {

        printf(line);
        x++;

        if (x == 2)
        {
            printf("\n");
            secenekler5 = getch();
            printf("%c\n", secenekler5);
            switch (secenekler5)
            {
            case 'A':
            case 'a':

                sw();

                break;

            case 'B':
            case 'b':

                dune();

                break;
            }
        }
        if (x == 3)
        {
            break;
        }
    }
    fclose(textfile);
}

void main()
{
    int k = 0;//tekrar çözülmek istenip istenmediğini kontrol etmek için oluşturduğumuz değişken

    do
    {

        char secenekler6;
        FILE *textfile;
        char line[666];

        textfile = fopen("sorukontrol.txt", "r");
        int x = 0;

        while (fgets(line, 666, textfile))
        {

            printf(line);
            x++;

            if (x == 2)
            {
                printf("\n");
                secenekler6 = getch();
                printf("%c\n", secenekler6);
                switch (secenekler6)
                {
                case 'A':
                case 'a':

                    fantastik();//secilen şıklara göre tür fonksiyonlarını çagırıyoruz

                    break;

                case 'B':
                case 'b':

                    bilimkurgu();

                    break;
                case 'C':
                case 'c':

                    cizgiroman();

                    break;
                }
            }
            if (x == 3)
            {
                break;
            }
        }
        printf("\nbir daha cozmek ister misiniz ? farkli bir tur ve evren secebilirsiniz. \n \n");
        printf("evet:e --- hayir:h \n \n");
        char s;//tekrar istenip istenmediğini kontrol etmek için oluşturduğumuz bir değişken daha
     
        s = getch();

        if (s == 'e')//eye basılırsa
        {
            k++;//kyı artırıyor
        }
        if (s == 'h')//hye basılırsa
        {
            k = 0;//kyı 0lıyor
        }

        fclose(textfile);

    } while (k != 0);//eğer e ye basıldıysa k 0dan farklı olduğu için kodlar bir daha çalışıyor
    //eğer hayıra basılırsa k 0 olduğu için döngü duruyor
}
