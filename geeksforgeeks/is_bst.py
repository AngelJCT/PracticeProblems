class Solution:
    #Function to check whether a Binary Tree is BST or not.
    def isBST(self, root):
        #code here
        def inorder(node):
            if node is None:
                return []
            left = inorder(node.left)
            right = inorder(node.right)
            return left + [node.data] + right
        traversal = inorder(root)
        for i in range(1, len(traversal)):
            if traversal[i] <= traversal[i-1]:
                return False
        return True

# Optimized solution

class Solution:
    #Function to check whether a Binary Tree is BST or not.
    def isBST(self, root):
        #code here
        self.prev = None  # initialize the prev node with None
        def inorder(node):  # define the inorder function
            if node:  # if the node is not None
                if not inorder(node.left):  # if the left subtree is not a BST
                    return False  
                if self.prev and self.prev.data >= node.data:  # if the prev node is greater than or equal to the current node
                    return False
                self.prev = node  # update the prev node
                return inorder(node.right)  # return the right subtree
            return True  # if the node is None, return True
        return inorder(root)  # return the inorder function