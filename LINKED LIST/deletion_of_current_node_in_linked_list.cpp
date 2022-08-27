// if you are in the situation that you are on a node which you want to delete the you can delete it by below way
// if you dont able to get the question refer to leetcode question :- DELETE NODE IN A LINKED LIST
// SO IN THIS QUESTION YOU JUST COPY THE NEXT NODE VALUE TO CURRENT AND POINT THE NEXT POINTER TO NEXT TO NEXT CHECK THE IMPLEMENTATION
// LETS SUPPOSE WE ARE ON TEMP NODE
temp->val=temp->next->val;
temp->next=temp->next->next;
// just do it and enjoy