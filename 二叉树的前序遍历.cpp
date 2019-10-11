#include <iostream>
#include <vector>
#include <stack>
using namespace std;



struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
	stack<TreeNode*> m_st;
public:
	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> v;
		if (!root)
		{
			return v;
		}
		while (root)
		{
			v.push_back(root->val);
			if (root->right)
			{
				m_st.push(root->right);
			}
			if (root->left)
			{
				root = root->left;
			}
			else
			{
				if (!m_st.empty())
				{
					root = m_st.top();
					m_st.pop();
				}
				else
				{
					break;
				}
			}
		}
		return v;
		
	}
};

int main()
{





	return 0;
}