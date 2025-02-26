class Solution {
public:
    void insert_tail(ListNode* &head_2, ListNode* &tail_2, int val)
    {
        ListNode* New_Node = new ListNode(val);
        if(head_2 == NULL)
        {
            head_2 = New_Node;
            tail_2 = New_Node;
            return;
        }
        tail_2->next = New_Node;
        tail_2 = New_Node;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* head_2 = NULL;
        ListNode* tail_2 = NULL;
        ListNode* temp = head;
        int sum = 0;
        while(temp->next != NULL)
        {
            sum += temp->val;
            if(temp->next->val == 0)
            {
                insert_tail(head_2, tail_2, sum);
                sum = 0;
            }
            temp = temp->next;
        }
        return head_2;
    }
};