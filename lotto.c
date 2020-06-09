
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void lotto_gen()
{
   int i,r;
   int temp;
   int lotto[45];
   for (i = 0; i < 45; i++)
   {
      lotto[i] = i + 1;
   } //1~45값을 채운다

   for (i = 0; i < 45; i++)
   {
      
      r = (rand() % 45-i)+i; //1부터 44까지의 값 

      temp = lotto[i];
      lotto[i] = lotto[r];
      lotto[r] = temp;

   }

   printf("[");
   for (i = 0; i < 6; i++)
   {
      
      int ball = lotto[i];
      printf("%d ",ball);
   } 

   printf("]\n");

}




int main(void)
{
   int i;
   srand(time(0));

   for (i = 0; i < 10; i++)
   {
      lotto_gen();
   }

   return 0;
}
