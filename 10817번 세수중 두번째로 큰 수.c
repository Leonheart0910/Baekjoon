#include <stdio.h>

int main(){
	
	int a, b, c;
	int i, j, temp;
	/*//���� �ʱ�ȭ �Ŀ� ������ �ؾ��� arr�� ���� ����� ����� 
	scanf("%d%d%d", &a, &b, &c);
	//�׷��� ���� ��� ������ ��(garbage value)�� ����� 
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
