/*write a c programm to calculate area of a rectangle
a.using hard coded inputs
b.using inputs supplied by the users
*/

// THIS IS ANSWER OF A
/*
#include <stdio.h>

int main() {
    int lenght = 3;
    int breadth = 9;
    printf("The area of rectangle %d", lenght*breadth);
    return 0;
}
*/
// THIS IS ANSWER OF B
#include <stdio.h>

int main(){
    int LENGHT, BREADTH;
    printf("Enter LENGHT\n");
    scanf("%d", &LENGHT);
    printf("Enter BREADTH\n");
    scanf("%d", &BREADTH);
    printf("The area of input rectangle %d", LENGHT*BREADTH);
    return 0;
}