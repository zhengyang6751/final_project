#include <iostream>
#include <fstream>
#include <string>
#include "BST.cpp"
using namespace std;
int main()
{
    dateType date1(12, 31, 2010);
    dateType date2(2, 29, 2009);
    dateType date3(1, 31, 2003);
    dateType date4(8, 15, 2005);

    dateType date5(6, 1, 2000);
    dateType date6(1, 1, 2004);
    dateType date7(7, 1, 2000);
    dateType date8(4, 1, 2000);
    BST Btree;
    Btree.insert(date1);
    Btree.insert(date2);
    Btree.insert(date4);
    Btree.insert(date3);
    Btree.insert(date8);
    cout << "inorder" << endl;
    Btree.inorderTraversal();
    cout << "preorder" << endl;
    Btree.preorderTraversal();
    cout << "postorder" << endl;
    Btree.postorderTraversal();

    return 0;
}
