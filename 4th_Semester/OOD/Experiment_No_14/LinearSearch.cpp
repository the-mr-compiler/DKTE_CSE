#include <iostream>

template <typename T>
int linearSearch(T arr[], int size, T toFind)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == toFind)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    std::cout << "Index of 30 is " << linearSearch<int>(arr, 5, 30);
    float ar[] = {10.2, 23.4, 54.23, 65, 6.9};
    std::cout << "\nIndex of 23.4 is " << linearSearch<float>(ar, 5, 23.4);
}