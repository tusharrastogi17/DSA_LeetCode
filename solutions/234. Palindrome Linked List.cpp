/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *fow;
    bool isPalindrome(ListNode* head) {
        fow=head;
        return ans(head);
    }
    bool ans(ListNode *rev){
        if(rev==NULL){
            return true;
        }
        bool r= ans(rev->next) && fow->val==rev->val;
        fow=fow->next;
        return r;
    }
};
