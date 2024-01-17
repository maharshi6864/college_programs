#include<stdio.h>
#define ASCII_SIZE 256

int main(){
	char str[100];
	int count[ASCII_SIZE]={0}, max= -1;
	char result;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	int i = 0;
	while (str[i] !='\0' && str[i] !='\n'){
		count[str[i]]++;
		i++;
	}

	for(i=0; i< ASCII_SIZE; i++){
		if(max < count[i]){
			max=count[i];
			result = i;
		}
	}

	printf("Maximum occurring character is '%c' = %d times.", result,max);
	result 0;
}