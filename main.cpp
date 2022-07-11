#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<string.h>

//11/7/2022
//test change

using namespace std;
struct handJoint{
//TODO: 1. Define a data structure struct handJoint to represent a joint 
// of a hand pose with following information
// 3 coordinates: x, y z
// ID of joint 
// An array of joints connected to it. For example, joint 0 has 5 connected joints (1, 5, 9, 13, 17), 
// joint 1 has 2 connected joints (0, 2)

};

typedef struct handPose{
//TODO: 2. Define a data structure struct handPose to represent a hand pose with following information: 
// Timestamp of the hand pose 
// Array of 21 joints, each joint is a struct handJoint defined in (1)
}*handPose_p;

vector<handPose*> readFile(string filename){
//TODO: 3.	Write a function to read row by row a txt file as described above, 
// return a pointer that points to an array of struct handPose storing handPoses charged from the file. 
// Notice that we don’t know the number of rows in the txt file. 
}

float* EuclideanDistance(handPose_p pose){
//TODO: 4.	Write a function that calculates the Euclidian distance of every pair of joints of a hand pose. 
// The function returns a pointer that points to 2D array, each element of the array (i,j) is Euclidian distance 
// between ith joint and jth joint. It would be a matrice of size (21x21)
}

void jointMovement(){
//TODO: 5.	Write a function that calculates the movement of each joint between two times. 
// The function takes two handPoses at timestamp t1 and t2 as input, returns a pointer that points to 
// an 1D array of size 21 elements, each element i of the array is the Euclidian distance of 
// the ith joint at timestamp t1 and ith joint at timestamp t2 
}

int sortMovement(){
//TODO: 6. Write a function to sort the array obtained from (5) and return the sorted array and the ID of the joint that moves the most. 
}

typedef struct nodeJoint{
//TODO: 7. If we represent a handpose as a binary tree, define a struct Node to represent each joint of hand pose 
} *nodeP;

nodeP insert(handPose_p pose){
//TODO: 8.	Write a function to insert nodes into the tree, returns the pointer that point the root node (corresponding to 0th joint)
}

//TODO: 9.	Write a function to traversal the tree in pre-order, in-order and post-order 
void preorder(nodeP root){
}
void inorder(nodeP root){
}
void postorder(nodeP root){
}

vector<int> longestPath(nodeP root){
//TODO: 10. Write a function that determines longest path of the tree. The function returns to the array storing the ID of node belonging to the longest path. 
}

int main(){
    return 0;
}