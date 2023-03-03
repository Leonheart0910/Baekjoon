#include <stdio.h>

int main(){
	
	int arr1[] = {1,2,3};//배열의 이름은 배열이 시작되는 주소값이다. 
	int i;
	int size = sizeof(arr1)/sizeof(int);// 12/4 ==> size = 3
	 
	printf("arr1 addr = %p\n\n", arr1);
	//배열의 주소의 시작하는 지점을 출력한다. 
	//몇바이트인지 알고 있으므로 시작점만 알면 된다. 
	for(i=0; i<size; ++i){
		printf("arr1[%d] value = %d addr = %p\n", i, arr1[i], &arr1[i]);
	}
	printf("\n");
	for(i=0; i<size; ++i){
		printf("arr1[%d] value = %d addr = %p\n", i, *(arr1+i), (arr1+i));
	}
	//배열의 이름은 포인터 상수이기 때문에 연산을 할 수 없다. EX) arr1 ++; 는 syntax error. 
	return 0;
}
