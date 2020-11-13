// Use class structs and student structs to create
// a linked list of students in a class.
// F15A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define ZID_LENGTH      8

struct student {
    char name[MAX_NAME_LENGTH];
    char zid[ZID_LENGTH];
    double ass1Mark;
    struct student *next;
};

struct class {
    int howMany;
    struct student *roll;
};

void printStudent(struct student *stu);
void printClass(struct class *class);
struct student *createStudent(char *name, char *zid, double ass1Mark);

int main (int argc, char *argv[]) {
    // struct student students[CLASS_LENGTH];
    
    struct student *frankie = createStudent("Frankie", "5151515", 60.2);
    struct student *chicken = createStudent("Chicken", "5252525", 71);
    frankie->next = chicken;
    
    printStudent(frankie);
    printStudent(chicken);
    
    struct student *curr = frankie;
    while (curr != NULL) {
        printStudent(curr);
        curr = curr->next;
    }
    
    // free(frankie);
    // free(chicken);
    curr = frankie;
    while (curr != NULL) {
        struct student *tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    
}

void printStudent(struct student *stu) {
    printf("Name: %s\n", stu->name);
    printf("zID: %s\n", stu->zid);
    printf("ass1 mark: %.2lf\n", stu->ass1Mark);

    return;
}

struct student *createStudent(char *name, char *zid, double ass1Mark) {
    struct student *new = malloc(sizeof(struct student));
    strcpy(new->name, name);
    strcpy(new->zid, zid);
    new->ass1Mark = ass1Mark;
    new->next = NULL;
    
    return new;
}
