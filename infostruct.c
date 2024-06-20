#include <stdio.h>

struct Animal {
    int age;
    char name[50];
    char gender[10];
    char place[50];
};

//getting values for an animal using this function
void getValues(struct Animal *animal) {
    printf("Enter age: ");
    scanf("%d", &animal->age);

    printf("Enter name: ");
    scanf("%s", animal->name);

    printf("Enter gender: ");
    scanf("%s", animal->gender);

    printf("Enter place: ");
    scanf("%s", animal->place);
}

// outputting values for an animal using this function
void outputValues(struct Animal animal) {
    printf("Age: %d\n", animal.age);
    printf("Name: %s\n", animal.name);
    printf("Gender: %s\n", animal.gender);
    printf("Place: %s\n", animal.place);
}

int main() {
    struct Animal dog, cow;

    printf("Enter details for dog:\n");
    getValues(&dog);

    printf("\nEnter details for cow:\n");
    getValues(&cow);

    printf("\nDetails for dog:\n");
    outputValues(dog);

    printf("\nDetails for cow:\n");
    outputValues(cow);

    return 0;
}
