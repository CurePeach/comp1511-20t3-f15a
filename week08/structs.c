// Exploring structs
// F15A

// FIRST are the #includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// SECOND #define
#define MAX_NAME_LENGTH 50
#define ZID_LENGTH      8

// THIRD struct declarations
struct student {
    char name[MAX_NAME_LENGTH];
    char zid[ZID_LENGTH];
    double ass1Mark;
};

typedef struct student Student; // same as Stu
typedef struct student Stu; // same as Student
typedef struct student *StuPtr; // same as Stu * or Student *

// FOURTH function declarations
void printStudent(Student stu);

int main (int argc, char *argv[]) {

    // Create a struct student with
    // name: Frankie
    // zid: 5151515
    // assignment 1 mark: 60.2
    Student frankie;
    strcpy(frankie.name, "Frankie");
    strcpy(frankie.zid, "5151515");
    frankie.ass1Mark = 60.2;

    // Create a struct student* with
    // name: Chicken
    // zid: 5252525
    // assignment 1 mark: 71
    StuPtr chicken = malloc(sizeof(struct student));
    strcpy(chicken->name, "Chicken");
    strcpy(chicken->zid, "5252525");
    chicken->ass1Mark = 71;
    
    printStudent(frankie);
    printStudent(*chicken);
    free(chicken);

    return 0;
}

void printStudent(Student stu) {
    printf("Name: %s\n", stu.name);
    printf("zID: %s\n", stu.zid);
    printf("ass1 mark: %.2lf\n", stu.ass1Mark);

    return;
}
