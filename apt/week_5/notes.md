Week 5 Topics:

C-Style strings
std::string Class
Program I/O

Task 1:

Commandline arguments:

When loading a file we are able to pass through commandline arguments, this enables us to pass file locations or commands when loading the file that will affect how the script will work from launch.

these are dispayed after main and are (int argv, char *argc[]) int argv gives us an integer we can access that tallys the number of command line arguments, argv[] is a container/array that can hold text data we can access via "argc[0]", "argc[1]" etc. depending on how many arguments are passed.

Opening files:

When opening files to read a document we need to use the 'fstream' package in the enviroment. This gives us access to 'ofstream' types- which gives us access to Creating and writing files. 'ifstream' - Allowing us to read from files and 'fstream' - a combination of ofstream and ifstream in that we can create, read, and write to files.

In this instance I am using fstream which can read, write and create. we open the file by passing the filename which we recived through commandline into an fstream variable via , std::fstrean file(filename); here we have the type, the name we are assigning to the variable and the file extension in the form of the filename which we prepared earlier in the script.

Using this we are able to use methods such as getline() to read each line of the text document ending the line when '\n' is encountered. when using getline it may look like this 
getline(file, line), here we have the method, the fstream variable 'file' and line, line is a std::string we have assigned to be used as a container for the lines read from file. printing this will give us access to the line read from file. In a looping structure like a while loop, we can read a line print it and read the next line overwriting the last line printing the next until we read the end of file for 'file'.

To get each character we modify the method of collecting each line, we get each line then because the string is a cstyle string we are able to get the length of the line and add that to our count giving us the character count of each line.

When trying to complete the last challenge, where I had to modify one of the functions to count the number of words, everything started the same, we take the text file and use getline to push each line to a string variable 'line'. I then use istringstream() and plug in line to break up the line into single words, by default it seperates the string by whitespaces.

when using 'lineStream >> word' it reads charaters into word until it encounters the next whitespace, this repeats for each token in the string. when 'lineStream >> word' is added into the condition of a whileloop it will continue reading each word until it is completed allowing us to count each word.

The final challenge was to open the file outside of the function and pass the fstream  by reference into the functions, this lead to less lines of code, variables and overall steps.

- example -- int countLines(std::fstream& file) --


-ftream is designed spe ificallu for reading directly from and writing to files.
-istringstream, avoidds unncessary file handling, making it faster and simpler for memry string processing, it is perferred when using a string we want to process as a stream.


