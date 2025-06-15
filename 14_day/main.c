#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
// int x = 5;
// int *ptr = &x;

// printf("x qiymati: %d\n", x);
// printf("x manzili: %p\n", &x);
// printf("ptr orqali x: %d\n", *ptr);

// int a[10];
// a[0] = 5;
// a[1] = 10;

// printf("a[0] = %d\n", a[0]);
// printf("a[1] = %d\n", a[1]);

// int *p = malloc(10 * sizeof(int));

// for (int i = 0; i < 10; i++)
// {
//   p[i] = i * 2;
// }

// for (int i = 0; i < 10; i++)
// {
//   printf("%d ", p[i]);
// }

// int *arr = (int *) calloc(5, sizeof(int));
// printf("%d", arr[6]);

// int *p = malloc(5 * sizeof(int));

// for (int i = 0; i < 5; i++) p[i] = i * 10;

// p = realloc(p, 10 * sizeof(int));

// for (int i = 0; i < 10; i++)
// {
//   printf("%d ", p[i]);
// }

// free(p);

// int *ptr;
// ptr = (int*) malloc(5 * sizeof(int));

// if (ptr == NULL)
// {
//   printf("Xotira ajratilmadi");
// }
// else
// {
//   for (int i = 0; i < 5; i++)
//   {
//     ptr[i] = i + 1;
//     printf("%d ", ptr[i]);
//   }
// }

// free(ptr);

// int *ptr = (int*) malloc(2 * sizeof(int));
// ptr[0] = 1; ptr[1] = 2;

// ptr = (int*) realloc(ptr, 4 * sizeof(int));
// ptr[2] = 3; ptr[3] = 4;

// for (int i = 0; i < 4; i++)
// {
//   printf("%d ", ptr[i]);
// }

// free(ptr);

// int n;

// printf("Nechta massiv yaratmoqchisiz: ");

// scanf("%d", &n);

// int *p = (int*) malloc(n * sizeof(int));

// if (p == NULL)
// {
//   printf("Xotira ajratib bo'lmadi");
// }

// for (int i = 0; i < n; i++)
// {
//   printf("%d-son: ", i + 1);
//   scanf("%d", &p[i]);
// }

// for (int i = n - 1; i >= 0; i--)
// {
//   printf("[%d] => %d\n", i, p[i]);
// }

// free(p);
// p = NULL;

// char str[] = "Salom";
// printf("%zu", strlen(str));

// char name[] = "Javohir";
// char firstName[10];
// strcpy(firstName, name);
// printf("%s", firstName);

// char fullName[40] = "Javohir";
// char lastName[] = "Sadullayev";
// strcat(fullName, lastName);

// printf("%s", fullName);

// if (strcmp("hi", "hey") < 0) printf("hi < hey");
// else printf("hi > hey");

// char *matn = "Hey leave me alone";

// char *p = strchr(matn, 'e');
// printf("%s", p);

// char *p = strstr("Hey leave me alone", "me");
// printf("%s", p);

// char matn[100];
// int yosh = 19;
// sprintf(matn, "Sizning yoshingiz: %d", yosh);
// printf("%s", matn);

// char name[50];
// printf("Yilingizni kiriting: ");
// fgets(name, sizeof(name), stdin);
// name[strcspn(name, "\n")] = '\0';
// printf("Sizning yilingiz: ");
// puts(name);
// }

// int sozlarsoni(char *str)
// {
//   int count = 0, ichidami = 0;
//   while (*str)
//   {
//     if (*str != ' ' && !ichidami)
//     {
//       count++;
//       ichidami = 1;
//     }
//     else if (*str == ' ')
//     {
//       ichidami = 0;
//     }

//     str++;
//   }

//   return count;
// }

// int main()
// {
//   char *matn = "I have a mobile phone. Name of Mobile phone is Redmi";
//   int soni = sozlarsoni(matn);
//   printf("So'zlar soni: %d", soni);
// }


// int main()
// {
  // int arr[] = {1, 2, 3};
  // int *p = arr;
  // printf("%d", *p);
  // p++;
  // printf("%d", *p);

  // int a[] = {0, 1, 2, 3, 4, 5};
  // int *p = a;
  // printf("%d", *(p + 1));

//   int mat[3][3] =
//   {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//   };

//   int (*p)[3] = mat;

//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       printf("%d", *(*(p + i) + j));
//     }
//     printf("\n");
//   }
// }

// void change(int *p)
// {
//   *p = 29;
// }

// int main()
// {
//   int a = 5;
//   change(&a);
//   printf("%d", a);
// }


// int* max(int *a, int *b)
// {
//   return *a > *b ? a : b;
// }

// int main()
// {
//   int a = 5;
//   int b = 2;
//   int *natija = max(&a, &b);
//   printf("%d", *natija);
// }
