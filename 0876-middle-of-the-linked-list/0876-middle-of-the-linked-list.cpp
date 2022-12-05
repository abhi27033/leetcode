/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* n=head;
        ListNode* nn=head;
        int c=0;
        while(n!=NULL)
        {
            c++;
            n=n->next;
        }
        c/=2;
        while(c!=0)
        {
            nn=nn->next;
            c--;
        }
        return nn;
    }
};