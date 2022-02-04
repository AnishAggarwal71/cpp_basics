#include <algorithm> 
#include <vector> 
#include <iterator> 
#include <iostream> 
using namespace std; 

int main() 
{ 
    int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75}; 
    vector<int> vecList(9); 
    ostream_iterator<int> screen(cout, " ");

    cout << "intArray: "; 
    copy(intArray, intArray + 9, screen);
    cout << endl; 

    copy(intArray, intArray + 9, vecList.begin()); 
    cout << "vecList: "; 

    copy(vecList.begin(), vecList.end(), screen); 
    cout << endl; 

    copy(intArray + 1, intArray + 9, intArray); 
    cout << "After shifting the elements one position to the left, intArray: " << endl; 

    copy(intArray, intArray + 9, screen); 
    cout << endl; 

    copy(vecList.rbegin() + 2, vecList.rend(), vecList.rbegin()); 
    cout << "After shifting the elements down by two positions, vecList:" << endl; 

    copy(vecList.begin(), vecList.end(), screen); 
    cout << endl;

    return 0; 
}