#include <unordered_set>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void collectNodes(TreeNode* root, std::unordered_set<int>& nodeSet) {
    if (!root) return;
    nodeSet.insert(root->data);
    collectNodes(root->left, nodeSet);
    collectNodes(root->right, nodeSet);
}

int CountPairsPresent(int n, int** pairs, TreeNode* root) {
    if (!root) return -1;

    std::unordered_set<int> leftNodes;
    std::unordered_set<int> rightNodes;

    collectNodes(root->left, leftNodes);
    collectNodes(root->right, rightNodes);

    int count = 0;
    for (int i = 0; i < n; ++i) {
        bool foundInLeft = leftNodes.count(pairs[i][0]) && leftNodes.count(pairs[i][1]);
        bool foundInRight = rightNodes.count(pairs[i][0]) && rightNodes.count(pairs[i][1]);
        if (foundInLeft || foundInRight) {
            ++count;
        }
    }

    return count;
}
