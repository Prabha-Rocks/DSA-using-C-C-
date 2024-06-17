#include <iostream>

class Array
{
private:
    int *A;
    int size;
    int len;

public:
    Array() // Default Constructor
    {
        size = 10;
        len = 0;
        A = new int[size];
    }

    Array(int sz) // Parameterized Constructor
    {
        size = sz;
        len = 0;
        A = new int[size];
    }

    void Display();                 // Display Function
    void Insert(int index, int x);  // Insert Function
    int Delete(int index);          // Delete Function
    void swap(int *x, int *y);      // Swap Function
    int LSearch(int x);             // Linear Search Function
    int Sum();                      // Sum Function

    ~Array() // Destructor
    {
        delete[] A;
    }
};

void Array::Display() // Display Function
{
    std::cout << "Print Array elements: ";
    for (int i = 0; i < len; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

void Array::Insert(int index, int x) // Insert Function
{
    if (index >= 0 && index <= len)
    {
        for (int i = len; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        len++;
    }
}

int Array::Delete(int index) // Delete Function
{
    int x = 0;
    if (index >= 0 && index < len)
    {
        x = A[index];
        for (int i = index; i < len - 1; i++)
        {
            A[i] = A[i + 1];
        }
        len--;
    }
    return x;
}

void Array::swap(int *x, int *y) // Swap Function
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Array::LSearch(int x) // Linear Search Function
{
    for (int i = 0; i < len; i++)
    {
        if (x == A[i])
        {
            swap(&A[i], &A[0]);
            return i;
       
int Array::Sum() // Sum Function
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int ch, x, index, sz;
    std::cout << "Enter array size: ";
    std::cin >> sz;

    Array arr(sz);

    std::cout << "Menu" << std::endl;
    std::cout << "1. Insert" << std::endl;
    std::cout << "2. Delete" << std::endl;
    std::cout << "3. Search" << std::endl;
    std::cout << "4. Sum" << std::endl;
    std::cout << "5. Display" << std::endl;
    std::cout << "6. Exit" << std::endl;

    std::cout << "Enter Choice: ";
    std::cin >> ch;

    do
    {
        switch (ch)
        {
        case 1:
            std::cout << "Enter element and index: ";
            std::cin >> x >> index;
            arr.Insert(index, x);
            break;

        case 2:
            std::cout << "Enter index: ";
            std::cin >> index;
            x = arr.Delete(index);
            std::cout << "Deleted element is: " << x << std::endl;
            break;

        case 3:
            std::cout << "Enter element to search: ";
            std::cin >> x;
            index = arr.LSearch(x);
            if (index != -1)
                std::cout << "Element found at index: " << index << std::endl;
            else
                std::cout << "Element not found." << std::endl;
            break;

        case 4:
            std::cout << "Sum: " << arr.Sum() << std::endl;
            break;

        case 5:
            arr.Display();
            break;
        }

        std::cout << "Enter Choice: ";
        std::cin >> ch;

    } while (ch < 6);

    return 0;
}

