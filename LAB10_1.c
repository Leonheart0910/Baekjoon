#include <stdio.h> 
int hexa2decimal(char *phexa) {

	int i,n,j,r,k=1,sum=0;

	for(i=2;*(phexa+i)!=0;i++)
		;
	n=i-3;

	for(i=2;*(phexa+i)!=0;i++,n--){
		for(j=0;j<n;j++)
			k=k*16;
		if ('0'<=*(phexa+i)&&*(phexa+i)<='9')
			r=*(phexa+i)-'0';
		else if ('A'<=*(phexa+i)&&*(phexa+i)<='F')
			r=*(phexa+i)-'A'+10;		

		sum=sum+k*r;

		k=1;	

	}

	return sum;

}
int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";

	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));

	return 0;
}

