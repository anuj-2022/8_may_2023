#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char state[50];
    int pincode;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person person = {"AJAY", 25, {"123 SECUNDERABAD", "MINDSPACE", "DEV", 12345}};
    
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Street: %s\n", person.address.street);
    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);
    printf("Pincode: %d\n", person.address.pincode);
    
    return 0;
}

