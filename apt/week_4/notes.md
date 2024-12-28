Week 4 Topics

- C-Style strings
- Allocating and De-allocating memory
- Object Ownership
- Enumerations

Task 1
Instating a header for the Card class of our red 7 example 

Task 2
For this task i had to make a function that would count the charaters of C-Style string to do this I once a string is created I pass the string into the function it then runs a loop that iterates and keeps count of the charaters it iterates through. A C-Style string once it is created has a \0 on the end to indicate the end of the string once this point is reached the for loop exits and the value of the count variable is returned.

Task 3:

For this task I created a function that takes a C-style string and copies it to another C-style string, to get this to work i had to create the copy string large enough to fit the source so I used the counting function from task 2 to get the string length i then used that to create a second C-Style string the same container size as the source.

char copy[Length] = "", see this is empty but has enough memory allocated to be written with a copy.

I then use the same iteration technique I use in the length function m=by stopping at '\0' for the source string and copying each character as I go, one issue i had was i was coping the destion ation to the source i needed to do it the other way arounf

source[] = destination[] - incorrect
destination[] = source[] - correct

Task 6, 7, 8 ,9:
I feel it is very important to write in detail for this exercise, In this exercie i Have two classes interacting with eachother, in the card class we create a red 7 card and can perform certain actions on it such as getting the rule, the number and colour. 

Using the hand class we are able to create an object called hand, within this object is a member variable called cards, cards has a maximum ammount [MAX_CARDS] this imitates holding five cards in your hand. In this case we are storing 5 card objects in the cards array on the hand object. we can call hand and pass an index number to the cards array to 'get' the cards details. 

Once the card is in the cards array it is a private member variable. so the cards themseleves cannot be accessed directly they must be accessed via the Hand classes methods.

the use of .other, "Hand(const Hand& other)" when using other 'data = other.data; other is a reference to the already existing object of the same class (Hand) that we are trying to copy.
the 'other' object is passed to the copy constructor when we initialize a new object using an existing one.

For example sake other.data accesses the data member of the other object, If in this case data is a pointer, eg char* data, other.data reterives the address stored in the data pointer of the other object. 

Other is the reference to the existing object.
it is passed as a reference (Hand&) to avoid unnessasary copying
other.data is how we access the data member varible of the other object


Shallow Copy:

When creating a shanllow copy we are creating a copy of the pointers in the original object and pointing them to the previous opjects memory spaces. the shallow copy means changes to the shared memory affects both objects.

- a shallow copy should copy the pointers from other to the current object
- We need to explicitly copy the array and member variable

Deep Copy:

When we create a deep copy we create a similar constructor for the hand class as we do in a shallow copy, however in this case we need to allocate new memory for a deep copy as one aspect of a deep copy is that no memory is shared, in this instance we are creating a copy of hand which may have Card objects stored in the cards array which is a member variable to hand. so when we call the copy constructor we need to allocate new memory by calling the copy constructor of Card, creating a copy by passing the appropriate card object to the constructor. Then allocating it to the appropriate location in the new objects cards array. 


