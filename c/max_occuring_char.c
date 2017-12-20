#include <stdlib.h>
#include <stdio.h>

char* max_repeat_char(char* str)
{
	int i=0;

	char *ch;
	int count[sizeof(str)];
	int max = -1;

	for (int j = 0 ; j < sizeof(str); j++)
	{
		count[j] = 0;
	}

	ch[0] = str[0];

	while( str[i] != '\0'){
		 int j=0;
		 do{
             if(ch[j] == str[i] && count[j] > max)
			 {
				 count[j] = count[j] + 1;
				 max = count[j];
				 break;
			 }			 
		 }while(ch[++j] != str[i]);
		 printf("dd %c\n", ch[j]);
		 i++;
		 ch[j++] = str[i];
	}

	return ch;
}

int main()
{
	char c[] = "hello";
	printf("%c", max_repeat_char(c));
	return 0;
}
