#include<stdio.h>

int main(){
    char alph;
    scanf("%c",&alph);
    if(alph>='A' && alph<='Z'){
        printf("Uppercase");
    }
    else if(alph>='a' && alph<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
