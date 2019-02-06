class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode(0);  
        ListNode *prev = answer;
        int tmp1= 0;
            

        while(l1!=NULL || l2!=NULL || tmp1>0){
            int tmp2= tmp1;
            if(l1!=NULL){
                tmp2 += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                tmp2 += l2->val;
                l2 = l2->next;
            }
            ListNode* tmplist  = new ListNode(tmp2%10);
            prev->next = tmplist;
            prev = tmplist;
            tmp1 = tmp2/10;
            
                
        }
        return answer->next;
    }
};
