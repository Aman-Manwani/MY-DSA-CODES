//basically it is the floyds algorithm in which we use mid point runner technique to check whether the linked list is in cycle or not
// procedure
// just take two pointers fast and slow
while(fast!=NULL && fast->next!=NULL)
{
    fast=fast->next->next;
    slow=slow->next;
}
//then check whether at any place fast and slow pointers are on same place or not
if(fast==slow)
{
    return true;
}
//NOTE:-check the above equation in while loop to check whether it is a linked list cycle or not