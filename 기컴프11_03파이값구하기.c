#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <math.h>

typedef struct st_point {
   double x;
   double y;
} tpoint;

double distance2(tpoint *pp1, tpoint *pp2) 
{
   double dx, dy, d2;
   dx = pow((pp2->x - pp1->x),2);
   dy = pow((pp2->y - pp1->y),2);
   d2 = sqrt(dx+dy);
   return d2;
}
double unirand(void) {
   return (double)rand()/RAND_MAX;
}

int main(void) 
{
   tpoint *ppoints = NULL, *pcursor;
   tpoint origin = {0, 0};
   int npoints,n_lessthan1=0;

   srand(time(0));

   printf("Enter the number of random points to generate : ");
   scanf("%d",&npoints);
   
   ppoints = (tpoint *)malloc(16*npoints);

   if (ppoints == NULL) return 1;

    for (pcursor = ppoints; pcursor<(ppoints+npoints); pcursor++) {
      pcursor->x = unirand();
      pcursor->y = unirand();
   }
   for (pcursor = ppoints; pcursor<(ppoints+npoints); pcursor++)
   {
      if (distance2(&origin,pcursor)<1)
      n_lessthan1++;
   }
    
   printf("Number of Random Points whose distance from the origin/(0,0) are less than 1 : %d\n",   n_lessthan1);
   
   free(ppoints);
   
   return 0;
}
