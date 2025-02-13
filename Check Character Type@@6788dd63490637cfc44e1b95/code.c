#include<stdio.h>

int main(){
    char chr;
    scanf("%c",&chr);
    if(chr = 'aeiouAEIOU'){
        printf("Vowel");
    }
    else if(chr != 'aeiouAEIOU'){
        printf("Consonant");
    }
    else{
        printf("Digit");
    }
    return 0;
}