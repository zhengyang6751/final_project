#include <iostream>
#include <fstream>
#include <string>
#include "BST.cpp"
using namespace std;
int factorial(int n);
void fib(int n);
int main()
{
    dateType date1(12, 31, 2000);
    dateType date2(2, 29, 2000);
    dateType date3(1, 31, 2000);
    dateType date4(8, 15, 2005);

    dateType date5(3, 1, 2000);
    dateType date6(1, 1, 2004);
    dateType date7(4, 1, 2000);
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
cout << factorial(4)<< endl;
fib(10);
return 0;
}
int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);
}
void fib(int n){
    int f1 = 0;
    int f2 = 1;
    if(n <= 2){
        
    }
    else{
        cout << 0 << endl;
        cout << 1 << endl;
        for(int i = 2 ; i < n; i++){
            int f = f1 + f2;
            cout << f << endl;
            f1 = f2;
            f2 = f;
        }
    }
    
}