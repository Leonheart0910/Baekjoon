#include <stdio.h>
 
int main()
{
    char alphabet[100];
    int count = 0;
    scanf("%s", &alphabet);
    for(int i = 0; alphabet[i] != '\0' ; i++)
    {
        if(alphabet[i] == 'c')
        {
            if(alphabet[i+1] == '=') i++;
            else if(alphabet[i+1] == '-') i++;
        }
        if(alphabet[i] == 'd')
        {
            if(alphabet[i+1] == '-') i++;
            else if(alphabet[i+1] == 'z' && alphabet[i+2] == '=') i += 2;
        }
        if(alphabet[i] == 'l' && alphabet[i+1] == 'j') i++;
        if(alphabet[i] == 'n' && alphabet[i+1] == 'j') i++;
        if(alphabet[i] == 's' && alphabet[i+1] == '=') i++;
        if(alphabet[i] == 'z' && alphabet[i+1] == '=') i++;
        count++;
    }
    printf("%d\n", count);
    return 0;
}

