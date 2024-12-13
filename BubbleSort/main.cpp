#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "BubbleSort.h"

using namespace std;

int main()
{
    BubbleSort algorithm;

    cout << "Array before sorting: " << endl;
    algorithm.displayMessages();

    algorithm.sorts();

    cout << "Array after sorting: " << endl;
    algorithm.displayMessages();
    return 0;
}
