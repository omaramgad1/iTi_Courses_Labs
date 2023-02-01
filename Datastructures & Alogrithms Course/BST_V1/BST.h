#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef struct node{

int info;

struct node *left,*right;

}Node;


typedef struct Binary_Search_Tree{

Node * root;
}BST;




void create_bst(BST *t);
void Insert_into_bst(BST *t , int item);
void visit(int item);
void Travrse_InOrder(BST *t , void (* visit)(int));
void Travrse_PostOrder(BST *t , void (* visit)(int));
void Travrse_PreOrder(BST *t , void (* visit)(int));
int Size_Of_Bst(BST *t);
int Search_Bst(BST *t,int item);
void Delete_Bst(BST *t , int item );
Node* GetMaxRight(Node *node);
Node * GetNodeByData(BST *t , int item);
Node * GetParentByNode(BST *t,Node *pn);
int Delete_from_BST(BST *t,int item);
int GetMaxDepth(BST *t);
void Display(BST *t);

#endif // BST_H_INCLUDED
