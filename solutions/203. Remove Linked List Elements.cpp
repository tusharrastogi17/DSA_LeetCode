        ListNode* temp=head;
        
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
        
        while(temp!=NULL){
            if(head->val==val){
                head=head->next;
            }
            else if(temp->val==val){
                prev->next=temp->next;
                temp=temp->next;
                continue;
            }
            prev=temp;
            temp=temp->next;
            
        }
        return head;
    }
};
