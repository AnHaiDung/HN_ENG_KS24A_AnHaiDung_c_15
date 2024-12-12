#include <stdio.h>

void newText(char text[]) {
    int i=0;
    while(text[i]!='\0'){
        if (i==0||(text[i-1]==' ')){
            text[i] = toupper(text[i]); 
        }
        i++;
    }
}

int main() {
    char text[]="an hai dung";
    newText(text);
    printf("%s",text);
    return 0;
}

