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





