#include<stdio.h>
#include<conio.h>
// node declaration
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
// creating new node
struct node* newnode(int val)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=val;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void inorder(struct node* node)
{
	if(node==NULL)
	return;
	inorder(node->left);
	printf("%d ",node->data);
	inorder(node->right);
}
void mirror(struct node* node)
{
	if(node==NULL)
	return;
	else
	{
	   	struct node* temp;	
	   	mirror(node->left);
	   	mirror(node->right);
	   	
	   	temp=node->left;
	   	node->left=node->right;
	   	node->right=temp;
	}
}
int main()
{
	struct node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	// print in inorder
	printf("Inorder traversal of the constructed tree is \n");
	inorder(root); 
	mirror(root);
	printf("\nInorder traversal of mirror tree\n");
	inorder(root);
	return 0;
}
