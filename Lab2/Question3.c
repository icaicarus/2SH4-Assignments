#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


// this is the very first question without hints in the comments.  read the manual to develop your own algorithm

// Read Questions.h to understand the definition of Q3Struct

void efficient(const int source[], struct Q3Struct effVector[], int size)
{
    int i, index = 0;
    for(i = 0; i < size; i++){
        if(source[i] != 0){
            // struct Q3Struct effVector[pos] = {source[i], i};
            effVector[index].pos = i;
            effVector[index].val = source[i];
            index++;
        }
    }

}

void reconstruct(int source[], int m, const struct Q3Struct effVector[], int n)
{
    int i, j;
    for(i = 0; i < m; i++){
        source[i] = 0;
    }

    for(j = 0; j < n; j++){
        source[effVector[j].pos] = effVector[j].val;
    }

}
