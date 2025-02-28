#include<iostream>
#include<set>

using namespace std;

int count(int arr[], int size) {
    set<int> uniqueNumbers(arr, arr + size); 
    return uniqueNumbers.size();
}
