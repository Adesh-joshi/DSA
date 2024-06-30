#include <stdio.h>
#include <stdlib.h>

// Definition of the tree node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new tree node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


// Function for pre-order traversal (Root, Left, Right)
void preorderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }
    printf("%d ", node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
 
// Function for in-order traversal (Left, Root, Right)
void inorderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }
    inorderTraversal(node->left);
    printf("%d ", node->data);
    inorderTraversal(node->right);
}


// Function for post-order traversal (Left, Right,  Root)
void postorderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->data);
}

// Main function to demonstrate tree traversals
int main() {
    // Creating a sample tree:
    //        1
    //       / \
    //      2   3
    //     / \ / \
    //    4  5 6  7
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Pre-order traversal: ");
    preorderTraversal(root);
    printf("\n");

    
    printf("In-order traversal: ");
    inorderTraversal(root);
    printf("\n");

    
    printf("Post-order traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}

