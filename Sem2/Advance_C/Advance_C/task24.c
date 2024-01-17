#include<stdio.h>

int main(){
	char str[100],ch;
	int frequency =0;

	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);

	printf("Enter a character to find its frequency: ");
	scanf("%c",&ch);

	for(int i=0; str[i] !='\0' && str[i] !='\n'; ++i){
		if(ch == str[i])
			++frequency;
	}

	printf("frequency of %c= %d",ch,frequency);
	return 0;
}