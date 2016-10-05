//
// ProFourProbOne.cpp
// COMP241
// Fall 2015
// PA4 Problem 1
// 19 November, 2015
// Nate McCain

#include <iostream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;

void createTree();

int main()
{
    
    createTree();
    
    
    
    return 0;
}




// Problem One Function
void createTree()
{
    cout << "Creating your very own Binary Search Tree!" << endl;
    TreeType happyTree;
    string userInput;
    cout << "Please enter an integer that you would like to place inside your" << endl
         << "binary search tree. If you do not wish to enter any more numbers" << endl
         << "into the binary search tree, just type DONE and press enter." << endl;
    while (userInput != "DONE")
    {
        cout << "Please type an integer DONE and press enter. " << endl;
        cin >> userInput;
        int userInteger;
        if (userInput != "DONE")
        {
            userInteger = stoi(userInput);
            happyTree.PutItem(userInteger);
        }
        
    }
    
    happyTree.Print();
}