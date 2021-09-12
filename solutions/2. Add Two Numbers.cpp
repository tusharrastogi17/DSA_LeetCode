        
        while(l1!=NULL){
            
            int no=l1->val;
            
            temp->next= new ListNode ((no+c)%10 );
            
            if((no+c)>9){
                c=1;
            }
            else{
                c=0;
            }
        
            l1=l1->next;
            temp=temp->next;
            
        }
        
        while(l2!=NULL){
            
            int no=l2->val;
            
            temp->next= new ListNode ((no+c)%10 );
            
            if((no+c)>9){
                c=1;
            }
            else{
                c=0;
            }
        
            l2=l2->next;
            temp=temp->next;
            
        }
        if(c==1){
            temp->next=new ListNode(1);
        }
        
        return head->next;
        
    }
};
