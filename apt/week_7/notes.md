Week 5 Topics
-Linked Lists
-Methedologies of programming

-deleteFront()
When deleting from the front of the LinkedList we first check if the head is a nullptr as if it is the list is empty and we can abort the operation.
if it is not we create a temp pointer called remove and set it to the head we then allocate head to head->next to move it down the list one position. after this we have remove pointed at the previous head node and can delete via the remove node.

-deleteBack()
When deleting from the back we want to check that the head is not a nullptr, we then cycle through the linked list until we are at the second last node, we do this by looking ahead by two 'temp->next->next' when we find our second last node we delete temp->next which is the pointer to the last node and alter the temp->next to be a nullptr making the second last nnode the last node.


-addiontional Notes

