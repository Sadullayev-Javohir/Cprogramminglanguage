#include <stdio.h>

// #define DEBUG

// int main()
// {
//   int x = 10;

//   #ifdef DEBUG
//     printf("x qiymati: %d", x);
//   #endif
//     return 0;
// }

// #define TOSTRING(x) #x

// int main()
// {
//   printf("%s\n", TOSTRING("HELLO WORLD"));
// }

// #define CREATEVAR(name) int var_##name = 100

// int main()
// {
//   CREATEVAR(x);
//   printf("%d", var_x);
// }

// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//   int* ptr = (int *) malloc(5 * sizeof(int));

//   if (ptr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     exit(1);
//   }

//   srand(time(NULL));
//   for (int i = 0; i < 5; i++)
//   {
//     ptr[i] = rand() % 100;
//     printf("%d ", ptr[i]);
//   }

//   free(ptr);
// }

// #include <string.h>

// int main()
// {
//   char a[50] = "Hello ";
//   char b[] = "World";
//   char c[50];

//   strcat(a, b);
//   printf("Birinchi satr: %s\n", a);

//   strcpy(c, a);
//   printf("Nusxa %s\n", c);

//   int len = strlen(a);
//   printf("Uzunligi: %d\n", len);

//   if (strcmp(a, c) == 0)
//   {
//     printf("Satrlar teng\n");
//   }
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//   double x = 16.0, y = 2.0;

//   printf("%.2f", sqrt(x));
//   printf("%.2f", pow(x, y));
//   printf("%.2f", fabs(x - 29));
//   printf("%.2f", floor(3.5));
//   printf("%.2f", ceil(3.2));
// }

// #include <time.h>

// int main()
// {
//   time_t hozir;
//   time(&hozir);

//   printf("Hozirgi vaqt: %s", ctime(&hozir));
// }

// #include <time.h>

// int main()
// {
//   time_t start, end;
//   double sek;

//   time(&start);

//   for (int i = 0; i < 100000000; i++)
//   {}

//   time(&end);
//   sek = difftime(end, start);

//   printf("%.2f", sek);
// }

// #include <ctype.h>

// int main()
// {
//   char c = 'A';
//   char d = '7';

//   if (isalpha(c)) printf("%c - harf", c);
//   if (isdigit(d)) printf("%c - raqam", d);

//   printf("%c %c", c, tolower(c));
//   printf("%c", toupper('x'));
// }

// int main()
// {
//   int a = 5;
//   int *p = &a;

//   printf("a ning qiymati: %d", a);
//   printf("p ko'rsatgan qiymat: %d", *p);
//   printf("a ning manzili: %p", &a);
//   printf("p ning qiymati (manzili) %p", p);
// }

// int main()
// {
//   int arr[3] = {10, 20, 30};
//   int *p = arr;

//   printf("%d", *p);
//   printf("%d", *(p + 1));
// }


// int main()
// {
//   int arr[] = {1, 2, 3, 4};
//   int *p = arr;

//   for (int i = 0; i < 4; i++)
//   {
//     printf("%d ", *(p + i));
//   }
// }


// int main()
// {
//   int *p = NULL;

//   if (p != NULL)
//   {
//     printf("%d", *p);
//   }
// }

// void almashtir(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// void almashtir(int a, int b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// int main()
// {
//   int x = 5, y = 10;
//   almashtir(x, y);
//   printf("%d, %d", x, y);
// }

#include <stdlib.h>

// int main()
// {
//   int *p;
//   int n = 5;

//   p = (int *) malloc(n * sizeof(int));

//   if (p == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     return 1;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     printf("%d = %d\n", i, p[i]);
//   }

//   free(p);
// }


// int main()
// {
//   int *p;
//   int n = 5;

//   p = (int *) calloc(n, sizeof(int));

//   if (p == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     return 1;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     printf("p[%d] = %d\n", i, p[i]);
//   }

//   free(p);
//   return 0;
// }


