/*Check if tree is Binary Search tree*/
#include<iostream>
#include<stdlib.h>
#include<limits.h>

using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *CreateNode(int data){
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root->left = NULL;
	root->right = NULL;
	root->data = data;
	return root;
}

bool isBinarySearchTree(struct node *root, int min, int max){
	if (NULL == root){
		return true;
	}
	
	if (root->data < min || root->data > max){
		return false;
	}
	
	bool a = isBinarySearchTree(root->left, min, root->data-1);
	bool b = isBinarySearchTree(root->right, root->data + 1, max);
	return (a&&b);
}

bool isBST(struct node *root){
	return isBinarySearchTree(root, INT_MIN, INT_MAX);
}

int main(){
	struct node *root;
	root = CreateNode(5);
	root->left = CreateNode(4);
	root->right = CreateNode(6);
	root->left->left = CreateNode(3);
	root->right->right = CreateNode(7);
	
	if (isBST(root)){
		cout<<"It Is Binary Search Tree\n";
	}else{
		cout<<"It Is Not Binary Search Tree\n";
	}
	
	return 0;
}
