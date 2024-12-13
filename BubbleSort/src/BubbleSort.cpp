#include "BubbleSort.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

BubbleSort::BubbleSort()
{
    for ( int i = 0; i < arraySize; i++ )
    {
        sortedArray[ i ] = rand() % 100;
    }
}

void BubbleSort::sorts()
{
    bool swapped = false;

    for ( int i = 0; i < arraySize - 1; i++ )
    {
        for ( int j = 0; j < arraySize - i - 1; j++ )
        {
            if ( sortedArray[ j ] > sortedArray[ j + 1 ] )
            {
                swaps( &sortedArray[ j ], &sortedArray[ j + 1 ] );
                swapped = true;
            }
        }

        if ( !swapped )
        {
            break;
        }
    }
}

void BubbleSort::swaps( int * const first, int * const second )
{
    int hold = *first;
    *first = *second;
    *second = hold;
}

void BubbleSort::displayMessages()
{
    cout << "[";
    for ( int i = 0; i < arraySize; i++ )
    {
    cout << setw( 3 ) << sortedArray[ i ] << ", ";
    }
    cout << "] " << endl;
    cout << endl;
}
