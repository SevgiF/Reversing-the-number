#include <stdio.h>

int main()
{
    int n, birler, onlar, yuzler, yeniSayi;

jump:
    printf("Ters cevrilecek 3 basamakli sayiyi girin:\n");
    scanf("%d", &n);
    if (n / 1000 < 1 && n / 10 > 9) //Sayının 3 basamaklı olması kontrolü
    {
        birler = n / 100;       //Alınan sayının yüzler basamağı oluşacak sayının birler basmağıdır
        onlar = (n % 100) / 10; /*mod(100) sayinin onlar ve birler basmağından 
                                oluşan kısımı verir tekrar 10'a bölerek onlar basamağını alırız*/
        yuzler = n % 10;        /* mod(10) her sayının birler basamağını verir. 
                                Alınan sayının birler basamağı oluşacak sayının yüzler basamağıdır*/
    }
    else
    {
        printf("Girilen sayi 3 basamakli degil!\n");
        goto jump;
    }
    // Aldığımız rakamları basamak değerleri ile çarpıp toplayarak yeni sayıyı oluştururuz.
    yeniSayi = yuzler * 100 + onlar * 10 + birler;

    printf("Olusan sayi: %d", yeniSayi);

    return 0;
}