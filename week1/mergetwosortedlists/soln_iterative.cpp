class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if( list1 == NULL ) return list2;
        if( list2 == NULL ) return list1;

        ListNode* list3;
        ListNode* ptr;

        if( (list1->val) < (list2->val) ){
            list3 = list1;
            list1 = list1->next;
        }
        else{
            list3 = list2;
            list2 = list2->next;
        }
        ptr=list3;

        while( list1 != NULL && list2 != NULL){
            if( list1->val < list2->val ){
                list3->next = list1;
                list3 = list3->next;
                list1 = list1->next;
            }
            else{
                list3->next = list2;
                list3 = list3->next;
                list2 = list2->next;
            }
        }
        if( list1 != NULL ){
            list3->next = list1;
        }
        else if(list2 != NULL){
            list3->next = list2;
        }
        return ptr;
    }
};
