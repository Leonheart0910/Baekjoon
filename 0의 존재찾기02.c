//다음의 배열에 0이 존재하는지 뒤에서 부터 찾아라

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
