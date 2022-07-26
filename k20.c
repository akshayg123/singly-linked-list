#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int val)
{
	struct node* node;
	node=(struct node*)malloc(sizeof(struct node));
	node->data=val;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void print_postorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	print_postorder(node->left);
	print_postorder(node->right);
	printf("%d\t",node->data);
}
void print_inorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	print_inorder(node->left);
	printf("%d\t",node->data);
	print_inorder(node->right);
}	
void print_preorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	printf("%d\t",node->data);
	print_preorder(node->left);
	print_preorder(node->right);
}	
int main()
{
	struct node* root=newnode(1);
	root->left = newnode(2);
        root->right = newnode(3);
    	root->left->left = newnode(4);
   	root->left->right = newnode(5);
   	printf("\nPreorder traversal of binary tree is \n");
   	print_preorder(root);
  
    	printf("\nInorder traversal of binary tree is \n");
    	print_inorder(root);
  
    	printf("\nPostorder traversal of binary tree is \n");
    	print_postorder(root);
  
    	getchar();
    	return 0;
}














