#include <stdio.h>

char deleteChar(char text[],char word){
    int size=strlen(text);
	for(int i=0;i<size;i++){
		if(text[i]==word){
			text[i]=' ';
		}
		printf("%c",text[i]);
	}
}

int main(){
	char word;
	char text[]="an hai dung";
	printf("%s\n",text);
	printf("nhap tu muon xoa ");
	scanf("%c",&word);
	deleteChar(text,word);
	return 0;
}
