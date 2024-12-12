#include <stdio.h>

int main(){
	char str[100]="anhaidung@2006";
	int countCharacterText =0;
	int countCharacterNumber=0;
	int countCharacterspecial=0;
	int size=strlen(str);
	for(int i=0;i<size;i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			countCharacterText++;
		}else if(str[i]>='0'&&str[i]<='9'){
			countCharacterNumber++;
		}else{
			countCharacterspecial++;
		}
	}
	printf("So ky tu la chu cai: %d\n So ly tu la chu so: %d\n So ky tu dac biet: %d\n ",countCharacterText,countCharacterNumber,countCharacterspecial);
	return 0;
}
