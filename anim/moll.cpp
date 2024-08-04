struct TreeNode {
    int data;
    TreeNode* child1;
    TreeNode* child2;
    TreeNode* child3;
    TreeNode* child4;
    // ... other properties
};

// Usage
TreeNode* current = new TreeNode();  // Create a new tree node
// ... initialize node and its children

// Deleting the child4 node
delete current->child4;
current->child4 = nullptr;  // Optional: Set the pointer to null to avoid accessing freed memory
