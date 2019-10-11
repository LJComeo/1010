#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr){}
};

vector<vector<int>> levelOrder(TreeNode * root)
{
	vector<vector<int>> res;
	if (!root)
	{
		return res;
	}
	vector<int> vtmp;
	queue<TreeNode *>qu;
	TreeNode *cur;
	int len = 1;

	qu.push(root);
	while (!qu.empty())
	{
		for (int i = 0; i < len; i++)
		{
			cur = qu.front();
			vtmp.push_back(cur->val);
			qu.pop();

			if (cur->left)
			{
				qu.push(cur->left);
			}
			if (cur->right)
			{
				qu.push(cur->right);
			}
		}
		res.push_back(vtmp);
		vtmp.clear();
		len = qu.size();
	}
	return res;
}
