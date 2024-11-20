#include <iostream>

#define ROWS    4
#define COLUMNS 5

void readMaze(char maze[ROWS][COLUMNS]);
void printMaze(char maze[ROWS][COLUMNS]);

int main(void){

    char maze[ROWS][COLUMNS] = {};

    std::cout << maze[0][0] << std::endl;

    readMaze(maze);
    printMaze(maze);

    return EXIT_SUCCESS;
}

void readMaze(char maze[ROWS][COLUMNS]){

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            std::cin >> maze[i][j];
        }
    }

}

void printMaze(char maze[ROWS][COLUMNS]){

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            std::cout << maze[i][j];
        }
    std::cout << std::endl;
    }
}