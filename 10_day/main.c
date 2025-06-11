#include <stdio.h>

// void change(int *p)
// {
//   *p = 50;
// }

// int main()
// {
//   // int arr[3] = {44, 80, 90};
//   // int *p = arr;
//   // printf("%d", *(p) + *(p + 1) + *(p + 2));

//   int a = 5;
//   int b = 154;
//   int *p = &a;
//   int **pp = &p;
//   **pp = 154;
//   printf("%d", a);

// }

// Ikki sonning yig'indisini hisoblovchi funksiya yozing (ko'rsatkich orqali)

// void hisobla(int *a, int *b, int *yigindi)
// {
//   *yigindi = *a + *b;
// }

// int main()
// {
//   int a = 15;
//   int b = 35;
//   int yigindi;

//   hisobla(&a, &b, &yigindi);

//   printf("%d", yigindi);
// }

// Massivning eng katta elementini topuvchi funksiya yozing (ko'rsatkich qaytarish orqali)

// int* maxElement(int *arr, int n)
// {
//   int *max = arr;
//   for (int i = 1; i < n; i++)
//   {
//     if (arr[i] > *max)
//     {
//       max = &arr[i];
//     }
//   }
//   return max;
// }

int main()
{
  int *p = 10;
  int x = *p;
  printf("%d", x);
  return 0;
}
