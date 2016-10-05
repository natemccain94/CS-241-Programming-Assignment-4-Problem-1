//
// BinarySearchTree.h
// COMP241
// Fall 2015
// PA4 Problem 1
// 19 November, 2015
// Nate McCain

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>
#include <iostream>

using namespace std;


struct TreeNode;

class TreeType
{
public:
    TreeType();
    ~TreeType();
    TreeType(const TreeType &originalTree);
    void operator=(const TreeType &originalTree);
    void makeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    int GetLength() const;
    int GetItem(int item, bool &found);
    void PutItem(int item);
    void DeleteItem(int item);
    void Print() const;
    
    
private:
    TreeNode *root;
};

struct TreeNode
{
    int info;
    TreeNode *left;
    TreeNode *right;
};


#endif /* BinarySearchTree_h */
