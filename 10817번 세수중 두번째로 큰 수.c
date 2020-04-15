#include <stdio.h>

int main(){
	
	int a, b, c;
	int i, j, temp;
	/*//변수 초기화 후에 선언을 해야지 arr에 값이 제대로 저장됨 
	scanf("%d%d%d", &a, &b, &c);
	//그렇지 않을 경우 쓰레기 값(garbage value)이 저장됨 
	int arr[3] = {a, b, c};
	*/
	int arr[3] = {0,};
	
	for(i=0; i<3; ++i)
		scanf("%d", &arr[i]);
	
	for(i=0; i<3; ++i){
		for(j=0; j<2; ++j){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("%d\n", arr[1]);
	
	return 0;
}
