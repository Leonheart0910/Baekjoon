#include <stdio.h>

int main(){
	
	int arr1[] = {1,2,3};//�迭�� �̸��� �迭�� ���۵Ǵ� �ּҰ��̴�. 
	int i;
	int size = sizeof(arr1)/sizeof(int);// 12/4 ==> size = 3
	 
	printf("arr1 addr = %p\n\n", arr1);
	//�迭�� �ּ��� �����ϴ� ������ ����Ѵ�. 
	//�����Ʈ���� �˰� �����Ƿ� �������� �˸� �ȴ�. 
	for(i=0; i<size; ++i){
		printf("arr1[%d] value = %d addr = %p\n", i, arr1[i], &arr1[i]);
	}
	printf("\n");
	for(i=0; i<size; ++i){
		printf("arr1[%d] value = %d addr = %p\n", i, *(arr1+i), (arr1+i));
	}
	//�迭�� �̸��� ������ ����̱� ������ ������ �� �� ����. EX) arr1 ++; �� syntax error. 
	return 0;
}
