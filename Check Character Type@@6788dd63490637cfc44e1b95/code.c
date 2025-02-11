#include <stdio.h>
int main (){
    char ch;
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='E'||ch=='U'){
        printf("Vowel");
    }
    else {
        printf("Consonant");
        if(ch>=0 && ch<=9){
            printf("Digit");
        }
        else {
            printf("Special Character");
        }
    }
}