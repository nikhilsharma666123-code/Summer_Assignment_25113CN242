   #include <stdio.h>

    int main() {
    int i, n;
    int roll[10], age[10];
    float marks[10];
    char name[10][30];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
     printf("\nEnter details of Student %d\n", i + 1);

    printf("Roll Number: ");
     scanf("%d", &roll[i]);

    printf("Name: ");
     scanf("%s", name[i]);

     printf("Age: ");
    scanf("%d", &age[i]);

    printf("Marks: ");
     scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n----- Student Records -----\n");

    printf("\nRoll\tName\tAge\tMarks\n");
    printf("--------------------------------\n");

    for(i = 0; i < n; i++) {
     printf("%d\t%s\t%d\t%.2f\n",
     roll[i], name[i], age[i], marks[i]);
    }

    return 0;
}