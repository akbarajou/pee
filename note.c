#include <stdio.h>
#include <cs50.h>

/*Integer A, B are vectors, where int A[]= {2, 5, 3}, and int B[]= {2, 3, 4} .
Write a program to calculate scalar product A•B using for loop.*/
// int main() 
// {
//     int A[3] = {2,5,3};
//     int B[3] = {2,3,4};
//     int i, sum = 0;
//     for (i = 0; i < 3; i++) {
//         sum += A[i] * B[i];
//         printf("A•B = %d\n", sum);
//     }
    
//     return 0;
// }


/*Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

Your program should first prompt the user for a starting population size.
If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
Your program should then prompt the user for an ending population size.
If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.
*/
int main()
{
    int start, end, years = 0;
    do {
        start = get_int("Enter starting population size: ");
    } while (start < 9);

    do {
        end = get_int("Enter ending population size: ");
    } while (end < start);

    while (start < end) {
        start += start / 3 - start / 4;
        years++;
    }

    printf("Years: %d\n", years);
}














