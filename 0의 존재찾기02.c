//������ �迭�� 0�� �����ϴ��� �ڿ��� ���� ã�ƶ�

#include <stdio.h>

int main(){
	
	int i, beg, end;
	int a[10] = {3,7,0,9,2,7,4,9,1,7};
	
	scanf("%d%d", &beg, &end);
	
	for(i=end; i>=beg && a[i]!=0; --i);
	
	if(i<beg)
		printf("no zero\n");
	else
		printf("found %d\n", i);
			
	return 0;
}
