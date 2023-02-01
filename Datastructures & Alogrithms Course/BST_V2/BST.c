#include <stdio.h>
#include <stdlib.h>
#include "BST.h"


void Create_tree(Tree *t){


t->root=NULL;

}

void insert_into_tree(Tree *t , int item){

    Node * newnode = malloc(sizeof(Node));
    newnode->info=item;
    newnode->right=NULL;
    newnode->left=NULL;

    if(t->root == NULL)
        t->root=newnode;

    else{

    Node *curr= t->root;
    Node *ptr;

    while (curr != NULL){

    ptr=curr;

    if(item > curr->info)
       curr= curr->right;
    else
         curr=curr->left;

    }

    if(item > ptr->info)
        ptr->right=newnode;
    else
        ptr->left=newnode;

    }

}

void Display(Tree *t)
{
    if(t->root == NULL)
        return;

    Display(&(t->root->left));

    printf("%d  ", t->root->info);

    Display(&(t->root->right));
}


Node* GetParentNode(Tree *tree, Node *node)
{
    Node* parent = tree->root;

    while(parent != NULL)
    {
        if(parent->left == node || parent->right == node)
            return parent;

        if(node->info > parent->info)
            parent = parent->right;
        else
            parent = parent->left;
    }

    return NULL;
}


Node* GetNodeByData(Tree *tree, int data)
{
    Node* current = tree->root;

    while(current != NULL)
    {
        if(data == current->info)
            return current;

        if(data > current->info)
            current = current->right;
        else if (data < current->info)
            current = current->left;
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



void reposition(Node * parent , Node * Compare_node , Node* newNode  , int flag )
{
    if(flag==0)
    {
        if(parent->left == Compare_node)
            parent->left = newNode;
        else
            parent->right = newNode;
    }

    else

    {

        if(parent == Compare_node)
            parent->left = newNode->left;
        else
            parent->right = newNode->left;

    }

}


void Remove(Tree *tree,int data)
{
    Node *node = GetNodeByData(tree,data); // search
    Node *ParentOfNode = NULL;
    Node *maxRight = NULL;
    Node *parent_maxRight = NULL;

    if(node==NULL)
        return;





    if(node==tree->root)
    {

        if(node->left==NULL && node->right==NULL) // only one node
            tree->root=NULL;

        else if (node->right==NULL) // el root malo4 right
            tree->root = node->left;

        else if (node->left==NULL) // el root mao4 left
            tree->root = node->right;

        else // el root 3ndo left we right
        {
            maxRight = GetMaxRight(tree->root->left);


            tree->root->info=maxRight->info;

            parent_maxRight = GetParentNode(tree,maxRight);
            parent_maxRight->right=maxRight->left;
        }
    }


    else
    {
        ParentOfNode = GetParentNode(tree,node);

        if(node->left==NULL && node->right == NULL){

        if(ParentOfNode->left == node)
            ParentOfNode->left = NULL;
        else
            ParentOfNode->right = NULL;

        }
           // reposition(ParentOfNode,node,NULL,0);
        else if(node->right==NULL)
            {

        if(ParentOfNode->left == node)
            ParentOfNode->left = node->left;
        else
            ParentOfNode->right = node->left;

        }
           // reposition(ParentOfNode,node,node->left,0);

        else if(node->left==NULL)
            {

        if(ParentOfNode->left == node)
            ParentOfNode->left = node->right;
        else
            ParentOfNode->right = node->right;

        }
           // reposition(ParentOfNode,node,node->right,0);

        else
        {
            maxRight = GetMaxRight(node->left);
            parent_maxRight = GetParentNode(tree,maxRight);

            if(parent_maxRight == node)
            parent_maxRight->left = maxRight->left;
            else
            parent_maxRight->right = maxRight->left;


            //reposition (parent_maxRight,node,maxRight,1);
            node->info=maxRight->info;

        }

    }

    if(maxRight==NULL)
        free(node);
    else
        free(maxRight);
}












