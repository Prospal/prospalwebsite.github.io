#include <stdio.h>
#include <string.h>

int main (){
	char s[1000000];
	
	scanf("%[^\n]",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=s[i-1])
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}
