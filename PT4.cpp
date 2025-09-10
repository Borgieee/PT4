#include <iostream>      // Include input/output stream library for cin/cout
#include <vector>        // Include vector library for dynamic arrays
#include <cstdlib>       // Include standard library for rand() and srand()
#include <ctime>         // Include time library for time() function
#include <algorithm>     // Include algorithm library for sort() function

using namespace std;     // Use standard namespace to avoid typing std::

int main() {             // Main function where program execution begins
    // Seed the random number generator with current time
    // This ensures different random numbers each time program runs
    srand(time(0));
    
    // Create a vector (dynamic array) to store 50 random numbers
    vector<int> numbers;
    
    // Generate 50 random numbers between 0 and 1000
    for(int i = 0; i < 50; i++) {  // Loop 50 times
        // Generate random number between 0 and 1000
        // rand() generates random number, % 1001 ensures it's between 0-1000
        int num = rand() % 1001;
        
        // Add the generated number to the end of the vector
        numbers.push_back(num);
    }
    
    // Display the original unsorted numbers
    cout << "Original numbers:" << endl;
    
    // Loop through all numbers in the vector
    for(int i = 0; i < numbers.size(); i++) {
        // Print each number followed by a space
        cout << numbers[i] << " ";
        
        // After every 10 numbers, print a newline for better formatting
        if((i + 1) % 10 == 0) cout << endl;
    }
    
    // Add two blank lines after displaying original numbers
    cout << endl << endl;
    
    // Sort numbers in increasing order
    // First make a copy of the original numbers
    vector<int> increasing = numbers;
    
    // Use sort function to arrange numbers from smallest to largest
    // begin() points to first element, end() points to last element
    sort(increasing.begin(), increasing.end());
    
    // Display numbers sorted in increasing order
    cout << "Sorted in increasing order:" << endl;
    
    // Loop through all numbers in the increasing vector
    for(int i = 0; i < increasing.size(); i++) {
        // Print each number followed by a space
        cout << increasing[i] << " ";
        
        // After every 10 numbers, print a newline
        if((i + 1) % 10 == 0) cout << endl;
    }
    
    // Add two blank lines after displaying increasing sorted numbers
    cout << endl << endl;
    
    // Sort numbers in decreasing order
    // Make another copy of the original numbers
    vector<int> decreasing = numbers;
    
    // Use sort function with greater<int>() to sort from largest to smallest
    sort(decreasing.begin(), decreasing.end(), greater<int>());
    
    // Display numbers sorted in decreasing order
    cout << "Sorted in decreasing order:" << endl;
    
    // Loop through all numbers in the decreasing vector
    for(int i = 0; i < decreasing.size(); i++) {
        // Print each number followed by a space
        cout << decreasing[i] << " ";
        
        // After every 10 numbers, print a newline
        if((i + 1) % 10 == 0) cout << endl;
    }
    
    // Return 0 to indicate program ended successfully
    return 0;
}