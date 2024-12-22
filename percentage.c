#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    printf("Enter marks for subject 1: "); //subject 1 marks
    scanf("%d", &subject1);

    printf("Enter marks for subject 2: "); //subject 2 marks
    scanf("%d", &subject2);

    printf("Enter marks for subject 3: "); // subject 3 marks
    scanf("%d", &subject3);

    printf("Enter marks for subject 4: "); // subject 4 marks
    scanf("%d", &subject4);

    printf("Enter marks for subject 5: "); //subject 5 marks
    scanf("%d", &subject5);

    
    total = subject1 + subject2 + subject3 + subject4 + subject5; //for calculating total marks in 5 subjects

    
    percentage = (total / 5.0);  // Assuming each subject has a maximum score of 100 calculate percentage using percentage formula

    printf("Total marks: %f\n", total);
    printf("Percentage: %f\n", percentage);

    return 0;
}
/*output:
Enter marks for subject 1: 90
Enter marks for subject 2: 91  
Enter marks for subject 3: 54  
Enter marks for subject 4: 87  
Enter marks for subject 5: 68  
Total marks: 390.000000        
Percentage: 78.000000*/