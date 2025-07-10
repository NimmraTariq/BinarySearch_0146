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
        if (nPanjang <= 10) // Validate that input does not exceed array limit
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }

    cout << "\n=============================================\n";
    cout << "               Masukkan Elemen Array         \n";
    cout << "=============================================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i]; //  Take input for each array element
    }
}

void bubbleSortArray() // Define a function to sort the array using bubble sort
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {

