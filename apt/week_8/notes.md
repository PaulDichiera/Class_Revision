Week 8 Topics:
- Linked Lists
- Smart Pointers
- Scope

Linked List Methods

- addAt()
The method addAt() uses a combination of several previously created methods, working much like the get() method we have to cycle through our linked list using our index input as a reference to find the location in the list that we want. on this task i implemented more failsafes. first checking if the list was populated, then if the index was above or below the range of our list. If the selected index was at the end of the list this would call the addBack() method we had already created. If the index was at the front it would trigger the addFront() method we had also already create earlier in the class. 

From here knowing we have an index within our range we cycle through the list keeping track of how many steps through the list we take by implementing a count variable within our while loop, here we want to stop one position before our chosen index at index -1, as our implementation will position the new node infront of the index selection. 

once we have the index we can exit the while loop and shuffle our positions. 

newNode->next = temp->next - this positions the newNode->next to point to the same node as temp->next
temp->next = newNode - we then decouple temp->next and attach it to newNode inserting newNode between temp and the previous temp->next.

this completes the addAt() operation.

- deleteAt()
When iplementing the deleteAt() method we use a simiilar approach to the addAt() method to check if first the list is populated, then if the node we are deleting is the first or last node as if it is either we can call the deleteFront() or deleteBack() methods. passing either of these tests we cycle through our list using the temp pointer until we assign temp one node before the index we are deleting. 

Once we have the index in position we use a similar shuffle to addAt() however we are closing space:
-we create a pointer called 'remove' with this we follow the process below

remove = temp->next; - this sets remove to the index we wish to delete
temp->next = remove->next; - this then disconnects the node we wish to delete from the list and links the node past the one we wish to delete to the one before
delete remove;

Doing the above maintains the links in the list. when editing node we want to connect and disconnect nodes safely maing sure to not drop our pointers and have broken links.


Ideas and Concepts

One major thing i realised was I needed to do far more check in my methods to make them safer, so i was getting a little bit lazy in my coding and could have benefitted from giving myself more feedback as I built the scripts and checking as i go, making this change helped a lot. 

I also realised i did not need to create all of the processes in one if/if else statement. I am able to iterate through the lines in process. i can run the checks i need then run the while loop and activaet the variable once the list location was found. previously i was putting an if statement inside the while loop so the check was happening each cycle. instead i can run the while loop update the variable. then depending on the assignment implement different actions after overall reducing the ammount of checks being undertaken per loop.


