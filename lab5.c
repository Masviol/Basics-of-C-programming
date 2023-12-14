#include "stdio.h"

int main()
{
    int m[] = { 10, 20, 30, 40, 50, 60, 70 };
    int m1[2][2] = { { 1, 2 }, { 3, 4 } };
    int m2[2][2] = { {1, 0 }, { 0, 1 } };
    int res[2][2] = { { 0 } };
    for ( int i=0; i<2; ++i )
    {
        for ( int n=0; n<2; ++n )
        {
            for ( int k = 0; k < 2; k++)
            {
                res[i][n] += m1[i][k] * m2[k][n];
            }
        }
    }
    for ( int i = 0; i < 2; i++ )
    {
        printf ( "\n" );
        for ( int n = 0; n < 2; n++ )
        {
            printf ( "%d ", res[i][n] );
        }

    }
}
