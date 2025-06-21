#include <stdio.h>
#include <stdlib.h>

// int kvadrat(int *x)
// {
//   return *x * *x;
// }

// int main()
// {
//   int a = 5;
//   int (*func)(int *) = kvadrat;
//   printf("%d\n", func(&a));
//   printf("%d\n", a);
// }

// float bolish(float a, float b)
// {
//   return a / b;
// }

// int main()
// {
//   float (*fptr)(float, float) = bolish;
//   float result = fptr(15.0, 3.0);
//   printf("Natija: %f", result);
// }

// char teskari(char c)
// {
//   return (c == 'A') ? 'Z' : 'A';
// }

// void ishlat(char (*func)(char))
// {
//   printf("%c", func('A'));
// }

// int main()
// {
//   ishlat(teskari);
// }

// void kvadrat(int *x)
// {
//   *x = *x * *x;
// }

// int main()
// {
//   int a = 5;
//   kvadrat(&a);
//   printf("%d", a);
// }

// int main()
// {
//   int *p = (int *)malloc(sizeof(int));

//   *p = 453535555;
//   printf("%d", *p);
// }
// int main()
// {
//   int a = 5;
//   // const int *p = &a;
//   // int *const p = &a;
//   const int *const p;
//   printf("%d", *p);
// }
// int main()
// {
//   char *s = "Hello";
//   printf("%s", s);
// }

// struct Talaba
// {
//   int yosh;
// };

// int main()
// {
//   struct Talaba t = {20};
//   struct Talaba *ptr = &t;
//   printf("%d", ptr->yosh);
// }

// int main()
// {
//   void *p;
//   int a = 5;
//   p = &a;

//   printf("%d", *(int *)p);
// }


// int main()
// {
//   int n[] = {15, 16, 75, 23, 6};
//   int *p = n;

//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d, ", *(p + i));
//   }
// }


// int main()
// {
//   int a = 5;
//   int *p = &a;
//   int **pp = &p;

//   printf("%d", **pp);
// }


// int main()
// {
//   int *p = (int *)malloc(sizeof(int));

//   if (p == NULL)
//   {
//     printf("Xatolik");
//   }

//   *p = 123;

//   printf("%d", *p);

//   free(p);
// }


// int main()
// {
//   char *s = "Salom";
//   printf("2-harf: %c", *(s+1));
// }



// int main()
// {
//   int i = 56;
//   float f = 35.35;

//   void *p;

//   p = &i;
//   printf("%d", *(int *)p);

//   p = &f;
//   printf("%.2f", *(float *)p);
// }


// struct Talaba
// {
//   char ism[20];
//   int yosh;
// };

// int main()
// {
//   struct Talaba t1 = {"Javohir", 19};
//   struct Talaba *s = &t1;
//   printf("Ismi: %s", s->ism);
//   printf("Yoshi: %d", s->yosh);
// }


// int main()
// {
//   int mat[2][3] =
//   {
//     {1, 2, 3},
//     {4, 5, 6}
//   };

//   int *p = &mat[0][0];

//   for (int i = 0; i < 6; i++)
//   {
//     printf("%d ", *(p + i));
//   }
// }


// void salom()
// {
//   printf("Salom");
// }

// int main()
// {
//   void (*fptr)() = salom;
//   fptr();
// }

