#include <stdio.h>
#include <string.h>

int main()
{
    char* s = {"leet**cod*e"};
    
    int qtd = 0;
    char str[strlen(s)];
    
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '*'){
            qtd--;
        }else{
           str[qtd] = s[i];
           qtd++;
        }
    }

    printf("%s", str);

}
