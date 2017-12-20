
struct node 
{
	int data;
	struct node *left, *right;
};

struct node* createNode(int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left =temp->right = NULL;
	return temp;
}

void insert(struct node** node, int data)
{
	struct node *temp = *node;

	if(*node == NULL)
	{
		*node = createNode(data);
		return;
	}

	if(data < temp->data)
	{
		insert(&(temp->left), data);
	}
	else
	{
		insert(&(temp->right), data);
	}
}

void createBST(struct node** head, int arr[])
{
	struct node *temp = *head;
	for (int i=0;i<sizeof(array)/sizeof(array[0]); i++ )
	{
		insert(&(temp), arr[i]);
	}
}
