#include <iostream>

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

void swap(int &a, int &b)
{
    int buffer = a;
    a = b;
    b = buffer;
    return;
}

// int main(int argc, char const *argv[])
// {
//     int test;
//     std::cin >> test;
//     int arr[test];
//     for (int i = 0; i < test; i++)
//         std::cin >> arr[i];
//     // print_arr(arr, test);
//     for (int i = 0; i < test - 1; i++)
//     {
//         int min = i, pos{0};
//         bool change{false};
//         for (int j = i + 1; j < test; j++)
//         {
//             if (min > arr[j])
//             {
//                 min = arr[j];
//                 pos = j;
//                 change = true;
//             }
//             // print_arr(arr, test);
//         }
//         (change) ? swap(arr[i], arr[pos]) : swap(arr[i], arr[i]);
//         // std::cout << "min:" << min << " i:" << i << " pos:" << pos << "\n";
//         // print_arr(arr, test);
//     }
//     print_arr(arr, test);
//     exit(EXIT_SUCCESS);
// }

int main(int argc, char const *argv[])
{
    int size;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
    print_arr(arr, size);

    exit(EXIT_SUCCESS);
}