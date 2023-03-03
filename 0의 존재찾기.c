#include <stdio.h>

int main(void)
{
	//0 1 2 3 4 5 6 7 8 9
	int a[10] = {3,7,0,9,2,0,4,9,1,7};
	int i, beg, end;
	scanf("%d%d", &beg,&end);
	
	for(i=end; i>=beg; --i){
		if(a[i]==0)
			break;
	}
	if(!(i>=beg))
		printf("no zero\n");
	else 
		printf("found %d\n", i);	

	return 0;
}
