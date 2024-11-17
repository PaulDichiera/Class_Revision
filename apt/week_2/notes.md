Week 2 Topics:

- Functions
- Arrays
- Pointers
- References

Git notes

"git init"
I have had some issues with my git repos the last few days mainly cenetering abound the .git files that hold the meta data, tracking data and custom settings in reference to my repos.
It turns out I have been initiualising a new .git file in other areas of my repos and this has been causing issues some settings to be overwritten and files too.

Only use git init when starting a new project, when cloning and even in this case if using git clone, git init is not required, or on a new computer. if unsure use git status to check the repo status if there is no .git file you will recive an error and check for a .git file in the repo using ls -a

"git checkout -b <new branch>"
For this class revision I will be creating a new branch for each weeks work, my aim is to get familiar with different git processes along with weekly material so creating and merging branches and dealing with any issues that arise will be helpful.

Once a new branch is initialised I will need to publich it to github using git push -u <branch name>

"upstream" 
Setting an upstream branch will streamline pushing and pulling, track the relationship between local and remote branches. Overall its easier to sync without mush extra effort or tradeoff, I would only not set a branch to upstream if I was quickly testing somthing locally.

"pointers"
pointers exist in C++ and give us the ability to interact with memory but assigning and addess to 'point' too, commands affecting that memory can be realyed through the pointer.
pointers exist seperate to the memeory they interact with but need to have the same type assigned to them when created, they are created in a similar way to a variable with a '*' at the end of the variable name indicating it is a pointer and a '*' at the start of the varibale type, once its been created indicating it de-refernceing the data the pointer is pointing too.

When assigning memory to a pointer we use the '&' symbol to call the address of the memory as the pointer really stores the memory address thats how it knows the locations of the memory it is interacting with.


**OOP**
"Creating a class"
When creating a class we need to declare the Class name the public and private paramters, these include the constructors, variables and methods. typically this is done using a '.h file however it can all be done in one file. the main thing to note is that it all needs to be in the header.

"defineing methods and constructors"
As we would typically define functions in our code because these are attached to a Class they need to be proceeded wityh the classes tag and 2 colons, ie. void Card::returnNumber();
this then allows the compiler to understand these methods are accessable from the objectrs created by this class.

When we are defining our constructor it is a little bit differtent and there are a few things to consider, in our red 7 example when a card is made it is assigned a number and colour. 
we have initialised these variables as private in our class and when the constructor is initialised we access the variables in the object using the this-> command to use the numbners that have been input to assign values to the objects variables.

we can also use the 'this->' command to access the values we have assigned later when creating our methods if we need to use thes values.

"ifndef"
when creating a headerfile to prevent multiple inclusions of the same header file we use the commands 

#ifndef HEADER_H
#define HEADER_H

#endif // end of file

if the header is not defined it will define it if it already is, it will not include it again essentially. this is only used for header files.

"arrays in c++"
an array in c++ is a container of pointers they can be created to any size using [number] at the time of declaring. however there is no way to check the length of an array in c++ it is good practise to not use magic number when defining array sizes and kee ntrack of the array sizes.

when you are passing an array into a function understand it is already an address to a memory point so you do not need to pass the address to a pointer using the '&' symbol.

if you wish to print en element in the array or write to an element you can call it using the appropriate number in square brackets [number], if you wish to print the entire array you can pass it in without an element assigned or dereferencing, it will simply print the entire array.

"referencing"
when using pass by reference you are passing an address to function, its very much like using a pointer to alter a memory address however in this instance you have created a new temporary variable with the same address as one outside the function, so when you are assigning to that variable you are accessing it directlt, not through a pointer referenceing the memory. in this instance you do not need to dereference to write or read the memory at the address it is attached to.

