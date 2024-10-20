

#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void Task1(void)
{
  printf("Hey ");
}

void Task2(void)
{
  printf("Charlie. ");
}

// Smy�ka taskeru
void Loop(void)
{
  printf("Leave! ");
}

int main()
{
  objTManager = new clsTaskManager();

  objTManager->AddTask(Task1);
  objTManager->AddTask(Task2);
  objTManager->AddTask(Loop);

  objTManager->Run(Loop);

  delete(objTManager);
}


/*Zad�n� na pointery na funkce*/
// Napsat k�d tak, aby fungovala smy�ka MAIN
// Doplnit AddTask - p�idat Task do seznamu
// V RUN volat tasky ze seznamu AddTask

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

/*P��klad na pr�ci s pointery*/
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

