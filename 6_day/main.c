// SELECTION SORT

// #include <stdio.h>

// void selectionSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     int min = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[j] < arr[min])
//       {
//         min = j;
//       }
//     }
//     int temp = arr[min];
//     arr[min] = arr[i];
//     arr[i] = temp;
//   }
// }

// void printNum(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d ", arr[i]);
//   }
// }

// int main()
// {
//   int arr[] = {3, 6, 7, 23, 6754, 235, 212};
//   int length = sizeof(arr) / sizeof(arr[0]);
//   selectionSort(arr, length);
//   printNum(arr, length);
// }


// BUBBLE SORT

// #include <stdio.h>

// void bubbleSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         // 52, 5
//         int temp = arr[j]; // 52
//         arr[j] = arr[j + 1]; // 5
//         arr[j + 1] = temp; // 52
//       }
//     }
//   }
// }

// void printArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d ", arr[i]);
//   }
// }

// int main()
// {
//   int arr[] = {1, 235, 63, 7, 23, 7576, 323};
//   int length = sizeof(arr) / sizeof(arr[0]);
//   bubbleSort(arr, length);
//   printArray(arr, length);
// }
