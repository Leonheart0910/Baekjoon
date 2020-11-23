#include <stdio.h>

int main(){
	
	int H, M, newH=0, newM=0;
	
	scanf("%d%d", &H, &M);
	
	if(M-45<0){
		newM = 60 + (M-45);
		newH = H-1;
		if(newH == -1)
			newH = 23; 
	}
	else{
		newM = M - 45;
		newH = H;
	}
	printf("%d %d\n",newH, newM);

	return 0;
}
/* <백준 모범답안> 
#include <stdio.h>
 
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<45) 
    {
        b+=60;
        a--;
        if(a<0) a=23;
    }
    printf("%d %d",a,b-45);
}
