Week 3 Topics

- Typedef
- Array representation in C/C++
- References
- Allocating and De-allocating memory

"Task 1"
the creation of an object called example using a class. implemented a constructor a setter and getter then completed it by adding a destructor to the class to deallocate the memory when the program ends.

"Task 2"
for task two I had to use typedef to create trypes for a number of type and create and allocate the appropriate data, i had some issue when printing the information from my doubles array. in past tasks I was able to pass the whole array into the 'cout' function however it did not print for the double array, i had to iterate through the array.

For the pointers to floats i had issues allocating the data I needed to allocate data on the heap using 'new' ie 'float[i] = new float(2.2)' essentially I needed to allocate memory on the heap and define the type attaching it to the pointer address in the array. also because it was a pointer to a float I needed to ensure the data was dproperly defined as a float
to print the float pointer array i had to dereference and iterate through each element.

"Task 4"
For this task I was required to make a function that add 2 to an array, I was able to pass the array into the function with the function length, the changes persisted outside the array as the array works by way of pointers so the values at the memory addressed were being changed. In this case to print and change the values I had to iterate over the array and keep track of the size of the array.

"Task 5"
This task was follow on from task 4 however we were passing an array of pointers, the program needed our function to not take in a pointer but a pointer to a pointer, as the array is a pointer to the arrays pointers so to speak so for our function "doubleArray(int** values, length)" we see that to pass in the entire array of pointers we need to move up the tree of pointer to the you might call it root pointer that points to the pointers that represent the elements.

"Task 6" 
Creatting a pointer to a container that can hold objects, its pretty much created the same way as an array that has integers or strings, however we need to use the class name as the type.

when we add the items we need to add them as 'new' memory on the heap, so in this way we have a pointer to the array thats on the heap and the elements are also pointers to the objects we have now created.

"Task 7"
In this task i had to create a 2D array that could take input data and print it after it was input. this required me to pass an array into a function that incorperated a double for loop accounting for the rows and columns in the array so that through iterating i could add these elements to the array and using the same double for loop method print the 2D array again.