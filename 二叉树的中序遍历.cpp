#include <iostream>
#include <vector>
#include <stack>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
	stack<TreeNode*> st;
public:
	vector<int> inorderTraversal(TreeNode* root)
	{
		vector<int> v;
		while (root || !st.empty())
		{
			for (; root; root = root->left)
			{
				st.push(root);
			}

			root = st.top();
			v.push_back(root->val);
			st.pop();
			root = root->right;
		}
		return v;
	}
};

int main()
{

	return 0;
}