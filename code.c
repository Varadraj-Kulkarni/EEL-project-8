#include <stdio.h>
int myLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    i--;
    return i;
}


void myCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


int myCompare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 1; // not same
        }
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
        return 0; // same
    else
        return 1;
}


void myConcat(char result[], char first[], char last[]) {
    int i = 0, j = 0;

    while (first[i] != '\0') {
        result[j] = first[i];
        i++;
        j++;
    }

    result[j] = ' ';
    j++;

    i = 0;
    while (last[i] != '\0') {
        result[j] = last[i];
        i++;
        j++;
    }

    result[j] = '\0';
}

int main() {
    char firstName[50], lastName[50], fullName[100];
    char copiedName[100], anotherName[100];

    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter last name: ");
    scanf("%s", lastName);

    
    myConcat(fullName, firstName, lastName);
    printf("\nFull Contact Name: %s\n", fullName);

    
    printf("Length of full name: %d\n", myLength(fullName));

    
    myCopy(copiedName, fullName);
    printf("Copied Name: %s\n", copiedName);


    printf("\nEnter another name to compare: ");
    scanf("%s", anotherName);

    if (myCompare(firstName, anotherName) == 0)
        printf("The first name matches with the new name.\n");
    else
        printf("The names are different.\n");

    return 0;
}
