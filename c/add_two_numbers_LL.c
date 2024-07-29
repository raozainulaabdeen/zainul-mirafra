#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct ListNode{
     int val;
     struct ListNode *next;
};
 
struct ListNode *l3 = NULL;
struct ListNode *tail = NULL;

void add_node(int val){
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = NULL;
    if(l3 == NULL){
        l3 = temp;
        tail = l3;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
} 

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    uint8_t carry = 0;
    int val;
    while((l1 != NULL) || (l2 != NULL)){

        if((l1 != NULL) && (l2 != NULL)){
            val = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if(l1 != NULL){
            val = l1->val + carry;
            l1 = l1->next;
        }
        else if(l2 != NULL){
            val = l2->val + carry;
            l2 = l2->next;
        }
        if(val > 9){
            carry = 1;
            val = val % 10;
        }
        else{
            carry = 0;
        }
        add_node(val);
    }
    if(carry == 1){
        add_node(1);
    }
    return l3;
}

int main(){
	return 0;
}
