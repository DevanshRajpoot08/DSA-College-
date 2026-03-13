#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};
	struct TreeNode* createNode(int val) {
	    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	    newNode->val = val;
	    newNode->left = NULL;
	    newNode->right = NULL;
	    return newNode;
	}
	
	// Insert duplicates always go to the right subtree
	struct TreeNode* insertNode(struct TreeNode* root, int val) {
	    if (root == NULL)
	        return createNode(val);
	
	    if (val < root->val)
	        root->left = insertNode(root->left, val);
	    else
	        root->right = insertNode(root->right, val);
	
	    return root;
	}

void inorderTraversalHelper(struct TreeNode* root) {
    if (root == NULL)
        return;
    inorderTraversalHelper(root->left);
    printf("%d ", root->val);
    inorderTraversalHelper(root->right);
}
}
