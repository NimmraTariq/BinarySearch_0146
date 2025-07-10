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
                 int temp = element[j]; // Swap array elements if they are out of order
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}
void display() //  Create function to display the sorted array
{
    cout << "\n=============================================\n";
    cout << "        Elemen Array Setelah Diurutkan (Asc) \n";
    cout << "=============================================\n";
    for (int j = 0; j < nPanjang; j++)
    {
         cout << element[j]; //Print each array element to the console
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
}

void binarySearch() // Start function to perform binary search
{
    char ulang;
    do
    {
        cout << "\n=============================================\n";
        cout << "         Pencarian Binary Search             \n";
        cout << "=============================================\n";
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x; // Accept input for the element to be searched

        int low = 0;
        int high = nPanjang - 1;

        do
        {
             int mid = (low + high) / 2; // Calculate mid index for binary search
             if (element[mid] == x) // Check if the search target is found
            {
                cout << "\n[✓] Elemen " << x << " ditemukan pada indeks " << mid << ".\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
        {
