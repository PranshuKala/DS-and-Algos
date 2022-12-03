#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *leftnode;
    node *rightnode;
    node(int d)
    {

        this->leftnode = NULL;
        this->rightnode = NULL;
        this->data = d;
    }
};node *root = NULL;
int first = 0;



void PrintLevelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> tempq;
    tempq.push(root);
    tempq.push(NULL);
    while (!tempq.empty())
    {
        node *tempnode = tempq.front();
        tempq.pop();
        if(tempnode==NULL)
        {
            cout<<"\n";
            if(!tempq.empty())
            {
               tempq.push(NULL);
            }
        }

      else
      {
        cout << tempnode->data << " ";
        if (tempnode->leftnode != NULL)
        {
            tempq.push(tempnode->leftnode);
        }
        if (tempnode->rightnode != NULL)
        {
           tempq.push(tempnode->rightnode);
        }
      }
    }
}

void PrintInorder(node *root){
    if(root==NULL){
       return;
    }
    PrintInorder( root->leftnode);
    cout<<root->data<<" ";
    PrintInorder( root->rightnode);

}

void PrintPostOrder(node *root){
    if(root==NULL){
      return;
    }
    PrintPostOrder( root->leftnode);
    PrintPostOrder( root->rightnode);
    cout<<root->data<<" ";
}

void PrintPreorder(node *root){
    if(root==NULL){
       return;
    }
    cout<<root->data<<" ";
    PrintPreorder(root->leftnode);
    PrintPreorder(root->rightnode);
}

node *createtree(node *root)
{
    int data;
    if (first == 0){
        cout << "Enter val of root node :";
        cin >> data;
        first++;
    }
    else{
        cin >> data;
    }
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data in left of node " << data << " :";
    root->leftnode = createtree(root->leftnode);
    cout << "Enter data in right of node " << data << " :";
    root->rightnode = createtree(root->rightnode);
    return root;
}
int main()
{
    root = createtree(root);
    cout<<"\n";
    cout<<"Level order traversal "<<"\n";
    PrintLevelOrder(root);
    cout<< "Preorder Traversal :";
    PrintPreorder(root);
    cout<<"\n";
    cout<<"Inorder Traversal :";
    PrintInorder(root);
    cout<<"\n";
    cout<<"Postorder Traversal :";
    PrintPostOrder(root);
}
