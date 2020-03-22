#include <stdio.h>
 
int main()
{
    int i, j, n, cnt = 0;
    int aryNum;
    
        
    scanf("%d", &n);
    
	for(i = 0; i < n; i++)
    {
    	char input[101]={0,};
        int alphabet[26]={0,};
		int overlap=0; // false
        int aryNum;
        
        scanf("%s", input);
        
        for(j = 0; input[j]!='\0'; j++){ 
			//if(input[j] <= 90) aryNum = input[j] - 65; // 65-->A ~ 90-->Z
            aryNum = input[j] - 97;
 
            if(alphabet[aryNum]!=0)
            {
                if(input[j-1]!=input[j])
                {
                    overlap = 1;
                    break;
                }
            }
            else
                alphabet[aryNum] = 1;
            
        }
        if(!overlap) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
