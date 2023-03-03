#include <stdio.h>
int main(void)
{
   int a,b,c;
   printf("서로다른 3 정수를 입력하시오:");
   scanf("%d%d%d",&a,&b,&c);
   
   if (a>b)   
      if (a>c)
         printf("%d is biggest number",a);
      else
         printf("%d is biggest number",c);
   else 
      if (b>c)
         printf("%d is biggest number",b);
      else 
         printf("%d is biggest number",c);

   return 0;
}
