#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   int massiv[3][3] =
//       {
//           {1, 2, 3},
//           {4, 5, 6},
//           {7, 8, 9}};

//           for (int i = 0; i < 3; i++)
//           {
//             for (int j = 0; j < 3; j++)
//             {
//               printf("%d ", *(*(massiv + i) + j));
//             }
//             printf("\n");
//           }

//   // int *p = &massiv[0][0];

//   // for (int i = 0; i < 3; i++)
//   // {
//   //   for (int j = 0; j < 3; j++)
//   //   {
//   //     printf("%d", *(p + i * 3 + j));
//   //   }
//   // }
// }

// int* max(int *a, int *b) {return *a > *b ? a : b;}

// int main()
// {
//   int a = 25;
//   int b = 32;

//   int *natija = max(&a, &b);
//   printf("%d", *natija);
// }

// int main()
// {
// int arr[3] = {1, 2, 3};

// printf("%d", *(arr + 1));

// char *ism = "Javohir";
// printf("%s", ism);
// printf("%c", *ism);

// char ism[] = "Javohir";
// printf("%c", *ism);

// char *s = "salom";
// while (*s != '\0')
// {
//   printf("%c", *s);
//   *s++;
// }

// char *s = "C tili";
// for (int i = 0; s[i] != '\0'; i++)
// {
//   printf("%c", s[i]);
// }

// char *s = "C tili";
// int count = 0;
// while (*s++)
// {
//   count++;
// }

// printf("uzunligi: %d", count);

// }

// void printStr(char *str);

// int main()
// {
//   char *s = "Pointerlar";
//   printStr(s);
// }

// void printStr(char *str)
// {
//   printf("Matn: %s\n", str);
// }

// int main()
// {
// char *words[] = {"one", "two", "three"};
// printf("%s", *(words + 1));

// char str[3][10] = {"one", "two", "three"};

// printf("%c", str[0][0]);

// int *p = (int*) malloc(5 * sizeof(int));

// p = (int*) realloc(p, 10 * sizeof(int))

// int *a = (int*)malloc(1 * sizeof(int));
// *a = 5;
// printf("%d", *a);

// int *b = (int*) calloc(1, sizeof(int));
// *b = 54;
// printf("%d", *b);

// int x = 10;
// int *p = &x;
// int **pp = &p;

// char *matnlar[] = {"one", "two", "three"};
// printf("%s", *matnlar);

// int arr[] = {1, 2, 3};
// int (*p)[3] = &arr;

// printf("%d", (*p)[0]);
// }

// int plus (int a, int b)
// {
//   return a + b;
// }

// int main()
// {
//   int (*ftr)(int, int) = plus;
//   printf("%d", ftr(14, 35));
// }

// void change(int *p)
// {
//   *p = 199;
// }

// void nestedChange(int **pp)
// {
//   **pp = 342;
// }

// int main()
// {
//   int a = 5;
//   int *p = &a;
//   nestedChange(&p);
//   printf("%d",*p);
// }

// int sum(int a, int b)
// {
//   return a + b;
// }

// int (*fptr)(int, int) = sum;

// int main()
// {
//   int a = 5, b = 3;
//   printf("%d", fptr(a, b));
// }

// int main()
// {
//   int a = 15;
//   float f = 25.25;
//   void *p;
//   // p = &a;
//   // printf("%d", *(int*)p);

//   // p = &f;
//   // printf("%.2f", *(float*)p);
// }

// void print(void *ptr, char a)
// {
//   if (a == 'i')
//   {
//     printf("%d", *(int*)ptr);
//   }
//   else if (a == 'f')
//   {
//     printf("%.2f", *(float*)ptr);
//   }
//   else
//   {
//     printf("Noma'lum tur");
//   }
// }

// int main()
// {
//   int a = 5;
//   float f = 25.235;

//   print(&a, 'i');
//   print(&f, 'f');
// }

#include <string.h>

int main()
{
  // char str[] = "Dastur";
  // printf("%d", strlen(str));

  // char str[] = "abcde";
  // char *p = strchr(str, 'c');
  // printf("%s", p);

  // char str[] = "C dastur";
  // char *p = strstr(str, "das");
  // printf("%c", *p);

  // char *sozlar[] = {"bir", "ikki", "uch"};
  // printf("%s", sozlar[1]);

  // char satr[3][6] =
  // {"bir", "ikki", "uch"};
  // printf("%c", satr[2][0]);

  // int a = 5;
  // void *p = &a;
  // printf("%d", *(int*)p);


  int arr[5];
  int *p = arr;
  p[2] = 10;
  printf("%d", p[2]);

}
