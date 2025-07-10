#include <iostream> // Add input/output stream for console operations
using namespace std;

int element[10]; // Declare an array to hold up to 10 elements
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang; // Read the number of elements from the user
