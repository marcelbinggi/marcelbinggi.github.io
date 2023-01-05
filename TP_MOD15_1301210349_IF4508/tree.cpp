#include "tree.h"

adrNode newNode_1301210349(infotype x){
    adrNode P;
    P = new node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;

    return P;
}

adrNode findNode_1301210349(adrNode root, infotype x){
    if (root == NULL){
        return NULL;
    } else {
        if (info(root) == x){
            return root;
        } else {
            if (x > info(root)){
                findNode_1301210349(right(root),x);
            } else {
                findNode_1301210349(left(root), x);
            }
        }
    }
}

void insertNode_1301210349(adrNode &root, adrNode p){
    if (root == NULL){
        root = p;
    } else {
        if (info(p) > info(root)){
            insertNode_1301210349(right(root),p);
        } else {
            insertNode_1301210349(left(root), p);
        }
    }
}

void printPreOrder_1301210349(adrNode root){
    if (root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301210349(left(root));
        printPreOrder_1301210349(right(root));
    }
}

void printDescendant_1301210349(adrNode root, infotype x){
    adrNode P;
    P = findNode_1301210349(root,x);
    if (P != NULL){
        if (info(P) != x){
            cout << info(P) << " ";
            printPreOrder_1301210349(left(P));
            printPreOrder_1301210349(right(P));
        } else {
            printPreOrder_1301210349(left(P));
            printPreOrder_1301210349(right(P));
        }
    }
}

int sumNode_1301210349(adrNode root){
    if(root != NULL){
        return info(root) + sumNode_1301210349(left(root)) + sumNode_1301210349(right(root));
    }
}

int countLeaves_1301210349(adrNode root){
    if (root == NULL) {
        return 0;
    } else if (left(root) == NULL && right(root) == NULL){
        return 1;
    } else {
        return countLeaves_1301210349(left(root)) + countLeaves_1301210349(right(root));
    }
}

int heightTree_1301210349(adrNode root){
    if(root == NULL){
        return -1;
    }
    int left_height = heightTree_1301210349(left(root));
    int right_height = heightTree_1301210349(right(root));

    if (left_height > right_height){
        return left_height + 1;
    } else {
        return right_height + 1;
    }
}
