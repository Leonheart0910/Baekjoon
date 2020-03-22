#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int i, j;
    
    scanf("%d%*c", &n);
    
    int num = 0;
    int GW = 1;
    for(i = 0; i < n; i++){
        GW = 1; // 1이면 나중에 안쓰임. 그룹 단어 체크 만족해서 개수 추가 0이면 개수 추가 안함
        int alpha[27] = { 0, }; // 알파벳 있으면 1. 없으면 0
        char str[101] = { 0, }; // 할때마다 문자열 초기화.
        
        gets(str);
        for(j = 0; j <= strlen(str); j++){
            if(alpha[str[j]-'a'] == 1){
                GW = 0;
                break;
            }
            if(str[j] != str[j+1]){
                alpha[str[j]-'a'] = 1;
            }        
        }
        if(GW == 1){
            num++;
        }
    }
    printf("%d", num);

	return 0;
}

