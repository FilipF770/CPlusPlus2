

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

// Smyèka taskeru
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


/*Zadání na pointery na funkce*/
// Napsat kód tak, aby fungovala smyèka MAIN
// Doplnit AddTask - pøidat Task do seznamu
// V RUN volat tasky ze seznamu AddTask

/*Zadání pro dynamickou alokaci pamìti v C*/
// Dej mi 200 bytù v pamìti a první adresu vypsat do pointeru
//
// Pouívá se halda (heap), 200 si mùeme z pamìti zabrat jako blok
// Bloky mùou mít rùznou velikost
// Funkce - calloc ('poèet bytù') / nebo mallo ()
// Vytvoøí dynamické pole
// Vrací adresu bloku té vybrané pamìti
// Pøíkaz free('promìnná') uvolní pamì pro další pøiøazení, ale nesmae obsah, co v pamìti byl

/*Obecné poznámky*/
// ASCII tabulka se vypíše skrze '%c'
// \n znamená další øádek
// printf - nejjednodušší vypsání øetìzce
// strcpy_s - vyuito pro naplnìní promìnné
// strcat_s - pøidá zadanı øetìzec k pøeedchozímu (propojí je)
// pointer (ukazatel) - "adresa" ukazuje do pamìti, kde je 'nìjaká' promìnná uloena
// char ukazuje na jeden jedinı znak (byte)

/*Funkce*/
// DEKLARACE - jméno metody a její parametry
// DEFINICE - Co daná metoda dìlá

/*Pøíklad na práci s pointery*/
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

