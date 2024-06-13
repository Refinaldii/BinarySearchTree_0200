#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;
    
    BinaryTree()
    {
        ROOT = nullptr; //initializing ROOT to null

    }

    void insert(string element) //Insert a node in the binary search tree
    {

        Node* newNode = new Node(element, nullptr, nullptr); //Allocare memory for the new node
        newNode->info = element; // Assign value the data field of the new node
        newNode->leftchild = nullptr; // Make the left child of the new node point to NULL
        newNode->rightchild = nullptr; //make the right childe of the new node point to NULL




    }

};

int main()
{
    
}

