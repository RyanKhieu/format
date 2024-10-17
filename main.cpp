#include <iostream>
#include <string>
using namespace std;

string name;
int age;
char initial;
float gradeAverage;

int main() {
    printf("Enter your name, age, initial, and grade average in one line separated by spaces.\n");
    char nameBuffer[100];
    scanf("%99s %d %c %f", nameBuffer, &age, &initial, &gradeAverage);
    name = string(nameBuffer);
    printf("Name: %s\n", name.c_str());
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Grade Average: %.2f\n", gradeAverage);
    return 0;
}