#include <stdio.h>
#include <stdlib.h>

int main()
{
   	int n, i;
   	int *arr;
   
   	scanf("%d", &n);
   	arr = (int *)malloc(sizeof(int)*n);
   
   	for(i = 0; i < n; i++)
      	scanf("%d", arr + i);
      
   	for(i = n - 1; i >= 0; i--)
      	printf("%d ", *(arr + i));
      
    free(arr);
    
    return 0;
}
