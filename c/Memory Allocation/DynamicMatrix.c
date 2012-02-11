/**
 * @file DynamicMatrix.c
 * @details ANSI-C DynamicMatrix snipet
 * @version
 * @date 2011-12-07
 * @author Emerson Rocha Luiz
 * @copyright
 * @license GPL3. See license-gpl3.txt
 * @license MIT. See license-mit.txt
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
//#include <string.h> //memset
int main()
{
    int rows = 10;
    int cols = 20;
    int **matrix;
    int i, j;

    //Fist, alocate rows
    matrix = (int **)calloc(rows, sizeof(int *)); //new int*[rows]
    //Second, allocate cols foreach row
    for (i=0; i< rows; ++i){
        matrix[i] = (int *)calloc(cols, sizeof (int)); //new int[cols]
        //memset(matrix[i], 0, sizeof(int)*cols);//To initialize with some value
    }

    //Will print only zeros, since calloc initialize all fields with 0
    //@todo invert rows vs cols
    for (i=0; i< rows; ++i){
        for(j=0; j<cols; ++j){
            printf(" %i ", &matrix[i][j]);
        }
        printf("\n");
    }
}


