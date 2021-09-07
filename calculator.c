#include<stdio.h> // HEADER FILE 
#include<math.h>   // HEADER FILE 
int main()
{    
    int  cal = 0 , choice  , num , c , value ; // ACCEPTING VALUES 
    
    printf("Enter the user's choice : \n "); // USER'S CHOICE 
    printf(" 1 for Addition : \n");             
    printf(" 2 for Substraction : \n");         
    printf(" 3 for Multiplication : \n");
    printf(" 4 for Division : \n");

    scanf("%d" , &choice); 

    printf("Enter the number of inputs : \n "); 
    scanf("%d" , &num); 
    
    switch(choice) { 

        case 1: // CASE 1 FOR ADDITTON 
            printf("Enter the respective numbers : ");
            
            for (c = 1; c <= num; c++)
                {
                    scanf("%d", &value);
                    cal = cal + value;   // CALCULATION PART 
                }
            printf("The addition of the numbers are %d  " , cal); 
            return 0;
            
            break; 

            case 2: //  CASE 2 FOR SUBTRACTION 
            printf("Enter the respective numbers : ");
            
            for (c = 1; c <= num; c++)
                {
                    scanf("%d", &value);
                    cal = cal - value;   // CALCULATION PART 
                }
            printf("The subtraction of the numbers are %d  " , cal); 
            return 0;
            
            break; 

            case 3: // CASE 3 FOR MULTIPLICATION 
            printf("Enter the respective numbers : ");
            
            for (c = 1; c <= num; c++)
                {
                    scanf("%d", &value);
                    cal = cal * value;  // CALCULATION PART 
                }
            printf("The multiplication of the numbers are %d  " , cal); 
            return 0;
            
            break; 

            case 4: // CASE 4 FOR DIVISION 
            printf("Enter the respective numbers : ");
            
            for (c = 1; c <= num; c++)
                {
                    scanf("%d", &value);
                    cal = cal / value;  // CALCULATION PART 
                }
            printf("The division of the numbers are %d  " , cal); 
            return 0; // RETURN STATEMENT 
            
            break; 
    } // END OF SWITCH 
} // END OF MAIN 



        