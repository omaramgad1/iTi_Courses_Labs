#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

void create_bst(BST *t){

t->root =NULL;
}

void Insert_into_bst(BST *t , int item){

Node * newnode = malloc(sizeof(Node));
newnode->info =item;
newnode->left=NULL;
newnode->right=NULL;

if(!t->root)
    t->root=newnode;

else {
    Node *cur = t->root;
    Node * prev ;

    while(cur){
        prev=cur;
        if(item > cur->info)
            cur = cur->right;
        else if(item < cur->info)
            cur=cur->left;
    }

      if(item > prev->info)
            prev->right =newnode;
      else if(item < prev->info)
            prev->left =newnode;
    }

}


Node * GetNodeByData(BST *t , int item){

    Node *cur = t->root;

    while(!cur)
    {

        if(item == cur->info)
            return cur;
        if(item > cur->right)
            cur=cur->right;
        if (item < cur->left)
            cur=cur->left;

    }

    return NULL;
}


Node * GetParentByNode(BST *t,Node *pn){

    Node *cur =t->root;


    while(!cur)
    {

        if(cur->right->info == pn->info ||cur->left->info == pn->info  )
            return cur;
        if(pn->info  > cur->right)
            cur=cur->right;
        if (pn->info  < cur->left)
            cur=cur->left;

    }
    return NULL;


}

Node* GetMaxRight(Node *node){
    Node *current = node;

    while(current->right != NULL)
    {
        current = current->right;
    }

    return current;
}

void visit(int item){

printf("%d\n",item);


}


void Travrse_InOrder(BST *t , void (* visit)(int)){

    if(t->root)
    {
        Travrse_InOrder(t->root->left,visit);
        (*visit)(t->root->info);
        Travrse_InOrder(t->root->right,visit);
    }

}


void Travrse_PostOrder(BST *t , void (* visit)(int)){



    if(t->root)
    {
        Travrse_PostOrder(t->root->left,visit);
        Travrse_PostOrder(t->root->right,visit);
        (*visit)(t->root->info);
    }

}


void Travrse_PreOrder(BST *t , void (* visit)(int)){

  if(t->root)
    {  (*visit)(t->root->info);
        Travrse_PreOrder(t->root->left,visit);
        Travrse_PreOrder(t->root->right,visit);

    }


}


int Size_Of_Bst(BST *t){

    if(!t->root)
    return 0;

    return(1+Size_Of_Bst(t->root->left)+Size_Of_Bst(t->root->right));
}


int Search_Bst(BST *t,int item){

    Node *Cur = t->root;

    int found=0;

    while(Cur&&!found)
    {
        if(item==Cur->info)
            found=1;

        if(item < Cur->info)
            Cur=Cur->left;

        if(item > Cur->info)
            Cur=Cur->right;
    }

    return 0;
}


void Display(BST *t)
{
    if(t->root == NULL)
        return;

    Display(&(t->root->left));

    printf("%d  ", t->root->info);

    Display(&(t->root->right));
}

int GetMaxDepth(BST *t){

    if (t->root == NULL)
            return 0;

    else {
        int left_Depth = GetMaxDepth(&(t->root ->left));
        int right_Depth = GetMaxDepth(&(t->root ->right));

        if (left_Depth > right_Depth)
            return (left_Depth + 1);
        else
            return (right_Depth + 1);
    }

}

void Delete_Bst(BST *t , int item ){

    Node * node=GetNodeByData(t,item);

    if(!node)
        return;

    if(node == t->root)
    {

        if(t->root->left == NULL && t->root->right == NULL)
            t->root=NULL;
        else if(t->root->right == NULL)
            t->root=t->root->left;
        else if(t->root->left == NULL)
            t->root=t->root->right;
        else
        {
            Node *newRoot = t->root->left;
            Node *maxRight = GetMaxRight(newRoot);

            maxRight->right = t->root->right;
            t->root = newRoot;

        }
    }


    else
    {

        Node *parent = GetParentByNode(t,node);
        Node *new_child;

        if(node->left == NULL && node->right == NULL)
            new_child=NULL;

        else if(node->right == NULL)
            new_child = node->left;

        else if(node->left == NULL)
            new_child = node->right;

        else
        {
            Node *newParent = node->left;
            Node *maxRight = GetMaxRight(newParent);

            maxRight->right = node->right;

            new_child = newParent;

        }

        if(parent->left == node)
            parent->left = new_child;
        else
            parent->right = new_child;

    }
    free(node);

}

void DeleteNode(BST *pt)
{
   Node *q=pt->root;
   Node *r=NULL;;


   if(!pt->root->left){
        pt->root = pt->root->right;
   }
   else if(!pt->root->right){
           pt->root= pt->root->left;
   }
   else
   {
        q= pt->root->left;

        while(q->right){
               r=q;
               q=q->right;
           }

        pt->root->info=q->info;

        if(!r)
            pt->root->left=q->left;

        else
            r->right=q->left;

        }

   free(q);
}

int Delete_from_BST(BST *t,int item)
{
    Node *cur=t->root;
    Node *Nroot=NULL;
    int found=0;

    while( cur && !(found=(item==cur->info)))
    {
        Nroot=cur;
        if(item < cur->info)
            cur=cur->left;
        if(item > cur->info)
            cur=cur->right;
    }

    if(found)
    {
        if(!Nroot)
            DeleteNode(t);

        else if(item < Nroot->info)
            DeleteNode(&(Nroot->left));

        else if(item > Nroot->info)
            DeleteNode(& (Nroot->right));
    }

    return found;
}













