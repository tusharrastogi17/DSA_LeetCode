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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL) return NULL;
        
        ListNode* prev = head;
        ListNode* temp = head->next;
       /* cout<<"headi "<<head<<endl;
        while (head != NULL) {
            cout<< head->val <<" "<<head->next<<" ";
            head = head->next;
        }
        cout<<endl<<"prev  "<<prev<<endl;
        while (prev != NULL) {
            cout<< prev->val <<" "<<prev->next<<" ";
            prev = prev->next;
        }
        cout<<endl<<"temp "<<temp<<endl;
          while (temp != NULL) {
            cout<< temp->val <<" "<<temp->next<<" ";
            temp = temp->next;
        }
        cout<<endl<<"end";*/
        
        
        while(temp!=NULL) {
            if(temp->val == prev->val && temp->next != NULL) {
                ListNode* t = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete t;
            }
            else if(temp->val == prev->val && temp->next == NULL) {
                ListNode* t = temp;
                prev->next = NULL;
                temp = NULL;
                delete t;
            }
            else {
                prev = prev->next;
                temp = temp->next;
            }
        }
        return head;
    }
};
