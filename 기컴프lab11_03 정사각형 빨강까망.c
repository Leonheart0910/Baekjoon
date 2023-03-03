#include <stdio.h>

int casual(int m, int n);
int main(void)
{
	int k,n;									// 개수 부여받기 
	printf("행과 최소 개수를 입력하시오.\n");
	scanf("%d %d",&k,&n);
	printf("가능한 경우의 수는 : %d ",casual(k,n));
	
	return 0;
}

 int casual(int m, int n) {
 
    
    int results = 1;
	int start,block;
    
    if (n > m) 
		return results;
 
    for (start = 0; start <= m-n; start++)         // 빨간색의 시작지점 지정  
	{
        for (block = n; block <= m-start; block++) 
		{
            results += casual(m - start - block-1, n);
        }
    }
 
    return results;
}
