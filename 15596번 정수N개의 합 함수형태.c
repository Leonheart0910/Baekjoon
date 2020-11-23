#include <stdio.h>

long long sum(int *a, int n);

int main(){
	int i;
	long long n;
	long long k[] = {0,};
	scanf("%d", &n);
	for(i=0; i<n; ++i){
		scanf("%d", &k[i]);
	}
	sum(k[], n);
	
	return 0;
}

long long sum(int *a, int n) { 
	long long ans = 0;
	int i; 
	
	for(i = 0; i < n; i++) 
    	{ 
        	ans += a[i]; 
    	} 

    return ans; 
}


