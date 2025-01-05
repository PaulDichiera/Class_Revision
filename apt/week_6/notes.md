Week 6 Topics:

-ADTs
-Vector
-Linked Lists



-Linked Lists

overview, when creating a linked list data structure we need to create two classes, the node class that houses the individual block on the lined list has two member variables in this instance it could change depending on the data stored in the list. in this instance we have a data variable. and a next variable. the next variable is just apointer to the next node or to a nullptr if we are the last node in the list.

The second class is the linkjed list, it had features that allow us to tie together the node. it contains in this case two member variables. a head pointer that points to the first node and the last pointer which points to the last node, when initialising throught the constructor we initialise the two to nullptrs. 

-addBack()
When adding to an empty linked list we can use the addBack or addFront methods, when adding to the back we need to check if the linked list is empty we can do this by first checking if the head node is set to nullptr, if it is we create our newNode and set our head to point to the new node, if we only have one node we also need to set our last node to point to the newNode. If however we are adding to an already populated linkedList we need to traverse the list until we find the last node this is done by creating a temp node, that can traverse the list from head until we arrive at the nullptr. we then add our newNode to the location of the temp->next. however in this instance we have our last node. we simply make last->next =newNode and last = newNode. rteplacing the last node and passing last down the list via the pointers. 

Note we are not accessing ->next in last we are using the node that last is pointing to so last is pointing to Node1 node1 has ->next. so we are really adding new node lets call it Node2 to Node1->next, then last to point to Node2. this way we attach it to the end however we are only adjusting using the last pointer as a type of refernce to our list addresses and locations.

-addFront()
When adding to the front all we need to do is create a newNode and attach the head pointer to the new node via 'head = newNode'

-get()
When calling the data from our linked list using the get() method we input an intger when we call our get method to correspong to the element number in the list.
The method then checks the size of the list against the index called to assess if the element called is in range, we then check if there is anything in the list by checkin if head = nullptr. 
passing these checks we cycle through the list raising the count unitil the count is equal to the index this will be our desired element, we then return the data.

Note our temp variable is compared to nullptr not temp->next as we want to be on the element not looking ahead to check the next element.

-clear() / de-constructor
The clear method is called when the deconstructor is called, the way the method works is to first create a temo node to iterate over the linkedList, we then create a while loop, within the while loop we are creating a pointer called remove, remove is attached to the node temo is pointing to then the remove node is deleted, we then move the temp node over one step all within one pass. this continuea until we find the null pointer meaning the end of our linkedList.

-size()
The size method iterates through our list until we arrive at the end of the list. through this iteration we increase the value of a count intger variable until we we find the end of the list. the count variable is return giving us the length of the list.

-Constructor
The constructor in our linkedList sets the initial values of our head and last pointer to nullptr. 
