/**
 * @file calloc1.c
 * @details ANSI-C calloc snipet
 * @version
 * @date 2011-12-07
 * @author Emerson Rocha Luiz
 * @copyright
 * @license GPL3. See license-gpl3.txt
 * @license MIT. See license-mit.txt
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int i;
    int *vector;

    vector = calloc(n, sizeof (int));

    //Will print only zeros, since calloc initialize all fields with 0
    for(i=0; i<n; ++i){
        printf("%i \n", vector[i]);
    }

}


