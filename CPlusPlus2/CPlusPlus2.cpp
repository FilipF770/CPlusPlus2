

#include <iostream>

int main()
{
    
}

/*Zad�n� pro dynamickou alokaci pam�ti v C*/
// Dej mi 200 byt� v pam�ti a prvn� adresu vypsat do pointeru
//
// Pou��v� se halda (heap), 200 si m��eme z pam�ti zabrat jako blok
// Bloky m��ou m�t r�znou velikost
// Funkce - calloc ('po�et byt�') / nebo mallo ()
// Vytvo�� dynamick� pole
// Vrac� adresu bloku t� vybran� pam�ti
// P��kaz free('prom�nn�') uvoln� pam� pro dal�� p�i�azen�, ale nesma�e obsah, co v pam�ti byl

/*Obecn� pozn�mky*/
// ASCII tabulka se vyp�e skrze '%c'
// \n znamen� dal�� ��dek
// printf - nejjednodu��� vyps�n� �et�zce
// strcpy_s - vyu�ito pro napln�n� prom�nn�
// strcat_s - p�id� zadan� �et�zec k p�eedchoz�mu (propoj� je)
// pointer (ukazatel) - "adresa" ukazuje do pam�ti, kde je 'n�jak�' prom�nn� ulo�ena
// char ukazuje na jeden jedin� znak (byte)

/*Funkce*/
// DEKLARACE - jm�no metody a jej� parametry
// DEFINICE - Co dan� metoda d�l�

/*
 int a, b;
 char* pa, *pb;

 a = 256;

 pa = (char*) & a;
 pb = (char*) &b;

 for (int i = 0; i < 4; i++)
 {
  *pb = *pa;
   pa++;
   pb++;
 }

 printf("%i, ", b);
*/

