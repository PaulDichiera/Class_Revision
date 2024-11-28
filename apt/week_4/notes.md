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