#include <stdio.h>
 
int main()
{
   int position, i, taille;
   int tab[100];
 
   printf(" Entrez la taille du tableau : ");//taille
   scanf("%d", &tailla);
 
   printf(" Entrez les %d éléments : ", taille); //remplier
 
   for (i = 0; i < nbr; i++)
      scanf("%d", &tab[i]);
 
   printf(" Entrez l'emplacement où vous souhaitez supprimer l'élément: ");
   scanf("%d", &position);
 
   if (position >= nbr+1)
      printf("Suppression impossible.\n");
   else
   {
      for (i = position - 1; i < nbr - 1 ; i++)
         tab[i] = tab[i+1];
 
      printf(" Aprés la suppression, le tableau = ");
 
      for (i = 0; i < nbr - 1; i++)
         printf("%4d", tab[i]);
   }
 
   return 0;
}
