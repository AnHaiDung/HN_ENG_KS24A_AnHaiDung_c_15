#include <stdio.h>
#include <string.h>
char showChar(char text[],int size){
	int count=0;
	char word;
	for(int i=0;i<size;i++){
		word=text[i];
		for(int j=0;j<size;j++){
			if(word==text[j]){
				count++;
			}
		}
		printf(" %c xuat hien %d lan\n",text[i],count);
		count=0;
	}
}

int main(){
	char text[]="an hai dung";
	int size=strlen(text);
	printf("%s\n",text);
	showChar(text,size);
	return 0;
}
