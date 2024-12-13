#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <iostream>

using namespace std;

class BubbleSort
{
    public:
        static const int arraySize = 10;

        BubbleSort();
        void sorts();
        void swaps( int * const , int * const );
        void displayMessages();

    protected:

    private:
        int sortedArray[ arraySize ];
};

#endif // BUBBLESORT_H
