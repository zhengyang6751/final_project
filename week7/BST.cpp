#include <iostream>
#include "BST.h"
using namespace std;
BST::BST()
{
root = NULL;
}
bool BST::search(const dateType searchItem) const
{
nodeType *current;
bool found = false;
if (root == NULL)
cout << "Cannot search an empty tree." << endl;
else
{
current = root;
while (current != NULL && !found)
{
if (searchItem == current->info)
found = true;
else if (searchItem < current->info)
current = current->lLink;
else
current = current->rLink;
}
}
return found;
}
void BST::insert(const dateType insertItem)
{
nodeType *current; 
nodeType *trailCurrent = NULL; 
nodeType *newNode;  
newNode = new nodeType;
newNode->info = insertItem;
newNode->lLink = NULL;
newNode->rLink = NULL;
if (root == NULL)
root = newNode;
else
{
current = root;
while (current != NULL)
{
trailCurrent = current;
if (insertItem == current->info)
{
cout << "Duplicates are not "
<< "allowed. Value: " << insertItem << endl;
return;
}
else 
                             if (insertItem < current->info)
current = current->lLink;
     else
current = current->rLink;
}//end while
if (insertItem < trailCurrent->info)
trailCurrent->lLink = newNode;
else
trailCurrent->rLink = newNode;
}
}//end insert
bool BST::isEmpty() const
{
return (root == NULL);
}
void BST::preorderTraversal() const
{
preorder(root);
cout << endl;
}
void BST::inorderTraversal() const
{
inorder(root);
cout << endl;
}
void BST::postorderTraversal() const
{
postorder(root);
cout << endl;
}
void BST::preorder(nodeType* p) const
{
if (p != NULL)
{
cout << p->info << " ";
preorder(p->lLink);
preorder(p->rLink);
}
}
void BST::postorder(nodeType* p) const
{
if (p != NULL)
{
postorder(p->lLink);
postorder(p->rLink);
cout << p->info << " ";
}
}
void BST::inorder(nodeType* p) const
{
if (p != NULL)
{
inorder(p->lLink);
cout << p->info << " ";
inorder(p->rLink);
}
}
void BST::destroy(nodeType* &p)
{
if (p != NULL)
{
destroy(p->lLink);
destroy(p->rLink);
delete p;
p = NULL;
}
}
BST::~BST()
{
destroy(root);
}