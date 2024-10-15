#include <iostream>
#include <string>
using namespace std;

string name;
int age;
char initial;
float gradeAverage;

int main() {
    cout << "Enter your name, age, initial, and grade average in one line separated by spaces." << endl;
    scanf("%s %d %c %f", &name, &age, &initial, &gradeAverage);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Grade Average: %.2f\n", gradeAverage);
    return 0;
}