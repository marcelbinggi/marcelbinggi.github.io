#include "tree.h"

int main()
{
    adrNode root;
    root = NULL;

    int x[9] = {5,3,9,10,4,7,1,8,6};
    //tampilkan isi array
    for (int i = 0; i < 9 ; i++){
        cout << x[i] << " ";
    }

    //1. menambahkan isi array ke BST
    for (int i = 0; i < 9 ; i++){
        adrNode P = newNode_1301210349(x[i]);
        insertNode_1301210349(root,P);
    }

    //2. Menampilkan BST secara PreOrder
    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_1301210349(root);

    //3. Menampilkan keturunan dari node 9
    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301210349(root, 9);

    //4. Menampilkan total info semua node
    printf("\n");
    printf("\nSum of BST Info\t: ");
    cout << sumNode_1301210349(root);

    //5. Menampilkan banyaknya daun
    printf("\nNumber of Leaves\t: ");
    cout << countLeaves_1301210349(root);

    //6. Menampilkan tinggi tree
    printf("\nHeight of Tree\t: ");
    cout << heightTree_1301210349(root) << endl;

    return 0;
}
