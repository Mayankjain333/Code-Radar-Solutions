#include<stdio.h>

int main(){
    char chr;
    scanf("%c", &chr);
    
    // Check if the character is a vowel (lowercase or uppercase)
    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || 
       chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
        printf("Vowel");
    }
    // Check if the character is a letter but not a vowel (i.e., a consonant)
    else if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')){
        printf("Consonant");
    }
    // If it's not a letter, it is assumed to be a digit or special character
    else if(chr>=0 && chr<=100){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
