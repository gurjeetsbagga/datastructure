#include<stdio.h>
#include<stdlib.h>

int array[] = {2,4,3,9,12,94,2,16,87,34};
#include "createBST.cpp"
#include  "isBST.cpp"

int main()
{
	struct node *head;
	head = NULL;
	createBST(&head,array);
   	if(isBST(head))
   	{
		printf("yes");
   	}
   	else{
	   	printf("no");
   	}
    return 0;
}
