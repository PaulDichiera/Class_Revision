Week 10 Topics:
- Inheretence
- Polymorphism
- Operator overloading

Makefile fundamentals:

-Target
    The file to be generated, ie executable, object files
-Pre-requisites
    The files that the target depends on, ie .cpp or .h
-Command:
    The shell commands to build the target, compiler commands

Overview:

    At the stat of our compiler line we usually have all of our flags and our defined compiler that we call usually 'g++' currently, we can distill all of this into variables so when we call the comilation we only need to add those variables and can ckeep and paste this common string of sequences we use across all of our projects.

    For the files we define variables within the makefile to be used as varibles in the make process, so we need to think about the cource files which are the .cpp files. we then have the object files what we want the compiler to create our object files. This then distills down into our target file which is our initialiser or .exe in a sense. we run this file to execute the compiled code.

    we then are able to apply rules to particular files or variables as we have set them up and define how all of the linking will be completed so the sequence of our variables and flags with our files.

    we then more closely define the sequence of adding sourcefiles into objects so for each source file the comiler'g++' flags will run to check and export tyhem as an object file.

    after that we define the clean up function to remove the target and object files.



Martix Class Details:

Overview:

-Matrix::Matrix() // Constructor
In this matrix class we have a constructor a that populates our member variable which is a 2D array with '0' values. to do this we have a dobke loop that cyckles over the entire array adding '0.0' per index.

-Matrix::Matrix(Matrix& other) // Copy Constructor
For the copy constructor we passthrough our current matrix and cycle through each index using a double for loop, in the inner loop we copy the values from the current matrix to the new matrix that has been passed into the method.

-Matrix::get(int row, int column) const // Getter
Using the get method we pass in the index for the row and column returning the value, it is very simple using attributes passed when calling the method.

-Matrix::set(int row, int column, double value)
In the set method we pass the row and column we want to edit and the value we would like to set this is then chaned for the user.

-Matrix::add(const Matrix& other)
Using the add method we are able to pass one matrix into our current one and add them together index by index combining the values of the two. it does this by iterating over each index and adding the value from the Matrix we have plugged in into our current one.

-Matrix::operator==(const Matrix& other) const
This class overloads the == operator allowing it to compare each index of a matrix with another and returning to us if the two are identical or not.



