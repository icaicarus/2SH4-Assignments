#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr [])
{

    // This is the first programming (scripting) question without any initial setup as hints.

    // This is also the first question requiring you to come up with an algorithm on paper 
    // with mathematical analysis before implementing the code.

    // High Level Hint:
    //  Assume a 3x3 square matrix, look at the SUM of the row and column indices of each element.
    //  You should be able to see a numerical pattern after doing so.
    int index = 0, loop, i, j;

    for(loop = 0; loop < N3; loop++){
        j = loop;
        i = 0;
        while(j >= 0){
            arr[index] = mat[i][j];
            index++;
            j--;
            i++;
        }
    }
    for(loop = 1; loop < N3; loop++){
        j = N3 - 1;
        i = loop;
        while(i < N3){
            arr[index] = mat[i][j];
            index++;
            j--;
            i++;
        }
    }

    

}
