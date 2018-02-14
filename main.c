#include <stdio.h>
#include <stdlib.h>



int main()
{
   char lettre;
   printf("Entrez un caractere lettre ");
   scanf("%c",&lettre);
   if ((lettre>='A')&&(lettre<='z'))
   {
      if ((lettre=='a')|| (lettre=='e')||(lettre=='i')||(lettre=='o')||(lettre=='u')||(lettre=='y'))
       {
           printf("%c est une voyelle",lettre);
       }
       else printf ("%c est une consonne",lettre);

   }
    else printf("%c n'est pas une lettre");

   return 0;


}








