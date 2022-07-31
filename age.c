#include<stdio.h>

int main () {

    int age;
    printf("Type your age :");
    scanf("%d" , &age);

if(age > 18 && age < 30) {
    printf("Adult\n");
    printf("you can drive\n");
    printf("you can vote\n");
}

else if(age > 13 && age < 18) {
    printf("teenager\n");
    printf("keep focous on studies\n");
}
else if(age >= 30) {
    printf("over age\n");
    printf("you are not able for govt job\n");
}

else {
    printf("Child\n");
    printf("stop crying mom is preparing your food\n");
    
}

return 0;
}