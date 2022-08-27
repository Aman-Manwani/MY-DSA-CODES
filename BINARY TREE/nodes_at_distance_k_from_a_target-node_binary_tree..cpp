revise this important question idea from leetcode
question number=863(leetcode);
this question is much important due to its great idea and implementation revise its idea 
in this question first we have to print the nodes that are directly down the target node and at distance k apart from target node
then we found if target node is present in the left then we found the same distance node in the right 
and if the target node is present in the right then we have to found the distance the same distance node in the left
and at the same time we have to find that if ancstors are in the range of same distance and we take them also into our considerations 
follow this code for revision
class Solution {
public:
    vector<int>v;
    //this code is for print the nodes that are right below the target node
    void print_at_level_k(TreeNode*root,int k)
    {
        if(root==NULL)
        {
            return;
        }
        if(k==0)
        {
            v.push_back(root->val);
        }
        print_at_level_k(root->left,k-1);
        print_at_level_k(root->right,k-1);
    }
    // this function for printing all the nodes i.e right below and on the other sides and ancestors
    int print_at_distance_k(TreeNode*root,TreeNode* target,int k)
    {
        if(root==NULL)
        {
            return -1;
        }
        //right below nodes printing
        if(root->val==target->val)
        {
            print_at_level_k(root,k);
            return 0;
        }
        int left_dist=print_at_distance_k(root->left,target,k);
        if(left_dist!=-1)
        {
            if(left_dist+1==k)
            {
                v.push_back(root->val);
            }else
                print_at_level_k(root->right,k-2-left_dist);
            return 1+left_dist;
        }
        int right_dist=print_at_distance_k(root->right,target,k);
        if(right_dist!=-1)
        {
            if(right_dist+1==k)
            {
                v.push_back(root->val);
            }else
                print_at_level_k(root->left,k-2-right_dist);
            return 1+right_dist;
        }
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        print_at_distance_k(root,target,k);
        return v;
    }
};