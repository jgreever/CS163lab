#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;

/*  Justin Greever
 *  CS163
 *  Program 1
 *  10/06/2020
 *
 *  This file contains the structs and class needed to create a project
 *  list, add to the list, delete from the list, and display the list.
 *  TODO: finish filling this out
 */

class project{

    public:
        //default constructor and set initial variable values
        project();
        //default deconstructor, remove any memory we allocated
        ~project();
        //create a project from values passed from the client/application
        int add(char projectName[], float estimatedCost, char projectLength[],
                char hireHelp[], char completionDate[], char permitRequired[]);
        //add an entire project at once
        int add(const project& new_project);
        //display an item
        int display();

    private:
        char* projectName;
        float estimatedCost;
        char* projectLength;
        char* hireHelp;
        char* completionDate;
        char* permitRequired;
};
