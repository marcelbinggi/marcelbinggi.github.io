#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define left(P) (P)->left
#define right(P) (P)->right

typedef struct node *adrNode;
typedef int infotype;

struct node{
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_1301210349(infotype x);
adrNode findNode_1301210349(adrNode root, infotype x);
void insertNode_1301210349(adrNode &root, adrNode p);
void printPreOrder_1301210349(adrNode root);
void printDescendant_1301210349(adrNode root, infotype x);
int sumNode_1301210349(adrNode root);
int countLeaves_1301210349(adrNode root);
int heightTree_1301210349(adrNode root);


#endif // TREE_H_INCLUDED
