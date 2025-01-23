Week 9 Topics:
- Linked Lists
- Recursion
- Bianry Seach Tree

-Recursive Functions for LinkedList implementations

- size()

int LinkedList::size(std::shared_ptr<Node> node){
    int retVal = 0;
    if(node == nullptr){
        retVal = 0;
    }else{
        retval = 1 + size(node->next);
    }
    return retVal;
}

int LinkedList::size(){
    return size(head);
}

Explanation:
in the above we have two methods the one we initiae as a user is the lower one where no argument is passed, however it calls a private method where by default the head node of the linked list is passed into the method. the base case for this method is when node == nullptr, this is similar to how we iterate through a list using temp == nullptr as our condition for a while loop, we are looking for the end of the list and simultaniously checking if head == nullptr (an empty list) . 

as this argument is not triggered we trigger the else which adds + 1 to our retVal, and calls the method again passing the next node->next. we are moving over one step.
this will continue until we trigger the base case. what is returned is our original return call to size() this is the culmination of calculations we have gone through each time the method called itself.

our recursive case looks to reduce the size of the problem each call as we work toweards the base case.

simple explanation:

- Entry point:
    LinkedList::size() is called, which internally calls size(head) starting the recursion at head, the forst node in the list.

- Base Case:
    If the input node is nullptr, the method returns 0, signifying the head == nullptr or the end of the list.

- Recursive Case:
    For each non nullptr node 1 is added to the result of calling itself on the next node (node->next).

- Combinimg Results:
    Once the base case is reached, recursive values return their value back up the call stack, accumulating the total zise of the list

- get()

int LinkedList::get(int index, std::shared_ptr<Node> node, int count){
    if(node == nullptr){
        std::cout << "** Index not in range ** << std::endl;
    }

    if(count == index){
        return node->data
    }else{
        return  get(index, node->node, count +1);
    }
}

int LinkedList::get(int index){
    int count = 0;
    return get(index, head, count);
}


In the above we start the process by calling our public get()method passing am int as the index to our argument, this will be the index in the linked list we are retrieving the data from.  this method calls our recursive function as a return. once the recursive function starts.

it works as follows.

Entry Point
The recursive function is called via the public get() function, the recursive function runs preliminary checks to confirm the index input is within a valid range and if the Linked list is populated.

Base Case
The count and index are both compared if they are equal it means we have found our desired node and the node->data is returned.

Recursive Case
If the base case fails we recursivly call the get() function, poassing as arguments the next node in the linked list and incrementing the count argument by +1 it will look like this 

"return get(index, node->next, count +1); 

unlike the size() method when incrementing and moving through the linked list we want to stop at a point so we need to add  count progressivly where with the size() method we calculated the size of the list by stacking the + 1 values until we found the end of the list and added them regresivly.
