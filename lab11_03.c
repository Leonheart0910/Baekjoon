#include <stdio.h>

int casual(int m, int n);
int main(void)
{
	int k,n;									// ���� �ο��ޱ� 
	printf("��� �ּ� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d",&k,&n);
	printf("������ ����� ���� : %d ",casual(k,n));
	
	return 0;
}

 int casual(int m, int n) {
 
    
    int results = 1;
	int start,block;
    
    if (n > m) 
		return results;
 
    for (start = 0; start <= m-n; start++)         // �������� �������� ����  
	{
        for (block = n; block <= m-start; block++) 
		{
            results += casual(m - start - block-1, n);
        }
    }
 
    return results;
}
