#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef struct node{

int info;

struct node *right, *left;

}Node;

typedef struct tree{

Node * root;

}Tree;

void Create_tree(Tree *t);
void Display(Tree *t);
void insert_into_tree(Tree *t , int item);
void Remove(Tree *tree,int data);


#endif // BST_H_INCLUDED
