#include<stdio.h>

int Employee_rating(int N, int workload[]); //Function prototype

int main() 
{
    int N, i; //N=No of working days & i for the array pass element
    
    printf("Enter the number of working days: "); //Input working days
    scanf("%d", &N);
    
    int workload[N];
    
    printf("Enter the workload for each day:\n"); //Input workload for each days
    
    for(i = 0; i < N; ++i)
    {
        printf("Day %2d: ", i+1); // Fixed width specifier for day number by %2d
        scanf("%d", &workload[i]);
    }
    
    printf("Rating for the employer : %d\n", Employee_rating(N, workload)); //Calling the function
    
    return 0;
}

int Employee_rating(int N, int workload[]) // Fuction
{
    int max = 0, a = 0, i = 0; //max for the maximum interval length & a for the current length 
    
    for(i = 0; i < N; ++i)
    {
        if (workload[i] > 6) // Checking if the workload is greater than 6 
        {
            a++; // Inceasing the current interval length by 1 
            
            if(a > max) // Checking if the a is greater than max value
            {
                max = a; 
            }
        }
        else
        {
            a = 0; //Set the current value to 0 
        }
    }
    return max; // Return the max value as rate
}

