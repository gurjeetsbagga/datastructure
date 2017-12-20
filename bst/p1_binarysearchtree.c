#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void insert(struct node **head, int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	if((*head) == NULL)
	{
		(*head) = temp;
	}
	else
	{
        if((*head)->data <  data)
		{
			insert(&((*head)->right),data);
		}
		else{
			insert(&((*head)->left),data);
		}
	}

	return;
}

void display(struct node *head)
{
	if(head == NULL)
	{

		return;
	}
     
	printf("%d\n", head->data);
	display(head->left);
	display(head->right);

}

int main()
{
	struct node *head = NULL;

	insert(&head, 45);
	insert(&head, 5);
	insert(&head, 25);
	insert(&head, 42);
	insert(&head, 14);
	insert(&head, 21);
	insert(&head, 86);
	insert(&head, 65);
	insert(&head, 51);
	insert(&head, 22);

	display(head);
	
	return 0;
}
