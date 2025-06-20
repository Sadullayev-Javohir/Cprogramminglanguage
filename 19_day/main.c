#include <stdio.h>

// int main()
// {
//   // int a = 10;
//   // int *ptr = &a;

//   // printf("a ning qiymati: %d\n", a);
//   // printf("p ning qiymati: (manzil): %p\n", ptr);

//   // int arr[5] = {25, 8, 12, 4, 7};
//   // int *p = arr;
//   // int *p1 = &arr[1];
//   // int *p2 = &arr[2];
//   // int diff = p2 - p1;
//   // printf("Farq: %d", diff);
//   // printf("%d", arr[0]);
//   // printf("%d", *(p));

//   // int arr[3] = {10, 20, 30};
//   // int *p = arr;

//   // printf("%d", *p);

//   // int a = 10;
//   // int *p = &a;
//   // int **pp = &p;
//   // printf("%d", **pp);
// }

// void kvadrat(int *x)
// {
//   *x = (*x) * (*x);
// }

// int main()
// {
//   int a = 5;
//   kvadrat(&a);
//   printf("%d", a);
// }

// void hello()
// {
//   printf("Hello");
// }

// int main()
// {
//   void (*fptr)() = hello;

//   fptr();
// }


int kvadrat(int x)
{
  return x * x;
}

int main()
{
  int (*fptr)(int) = kvadrat;
  int natija = fptr(5);
  printf("Natija: %d", natija);
}
