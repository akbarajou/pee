//  yutest4.c  230503

#include <stdio.h>
int main()  {
   int A[3][3]= {1,2,3, 4,5,6, 1,2,3};

   printf("%p  %p  %p \n", A[0][0], A[0][1], A[0][2]);
   printf("%p  %p  %p \n", A[1][0], A[1][1], A[1][2]);
   printf("%p  %p  %p \n", A[2][0], A[2][1], A[2][2]);
   printf("\n");

   for(int i=0; i<3; i++)  {
      printf("%d   %d   %d  \n", A[i][0], A[i][1], A[i][2]);
   }

   return 0;
}
		
/*
00000001  00000002  00000003
00000004  00000005  00000006
00000001  00000002  00000003

0061FEF8   0061FEFC   0061FF00
0061FF04   0061FF08   0061FF0C
0061FF10   0061FF14   0061FF18
*/