//BST
#ifndef H_BST
#define H_BST
#include <iostream>
#include "dateType.cpp"
using namespace std;
struct nodeType
{
dateType info;
nodeType *lLink;
nodeType *rLink;
};
//Definition of the class
class BST
{
public:
BST();
~BST();
bool search(const dateType searchItem) const;
void insert(const dateType insertItem);
//void deleteNode(const int deleteItem);
bool isEmpty() const;
void inorderTraversal() const;
void preorderTraversal() const;
void postorderTraversal() const;
void destroy(nodeType* &p);

private:
void inorder(nodeType *p) const;
void preorder(nodeType *p) const;
void postorder(nodeType *p) const;
nodeType *root;
};
#endif