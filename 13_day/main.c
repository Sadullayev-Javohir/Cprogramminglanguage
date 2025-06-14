#include <stdio.h>

// #include <stdio.h>

// int main()
// {
//   int a = 10;
//   a = 90;
//   int *p = &a;
//   *p = 15;
//   int **pp = &p;
//   **pp = 64;

//   printf("a = %d\n", a);
//   printf("*p = %d\n", *p);
//   printf("**p = %d\n", **pp);
// }

// #include <stdio.h>

// int qoshish(int a, int b) {return a + b;}
// int ayirish(int a, int b) {return a - b;}

// void hisobla(int (*f)(int, int))
// {
//   printf("Natija: %d", f(10, 16));
// }

// int main()
// {
//   hisobla(qoshish);
//   hisobla(ayirish);
// }

// #include <stdio.h>

// int main()
// {
//   int a = 42;
//   float b = 3.14;

//   void *ptr;
//   ptr = &a;

//   printf("%d", *(int*)ptr);
// }

// int main()
// {
//   void *ptr;
//   int a = 5;
//   ptr = &a;

//   printf("%d", *(int*)ptr);
// }

// int add(int a, int b)
// {
//   return a + b;
// }

// int main()
// {
//   int (*f)(int, int);

//   f = add;
//   printf("%d", f(15, 25));
// }

// int multiple(int a, int b)
// {
//   return a * b;
// }

// void hisobla(int (*f)(int, int))
// {
//   printf("Natija: %d", f(10, 15));
// }

// int main()
// {
//   hisobla(multiple);
// }

// int main()
// {
//   void *ptr;
//   int a = 50;
//   ptr = &a;
//   printf("%d", *(int*)ptr);
// }

// void salomlar()
// {
//   printf("Hello\n");
// }

// int main()
// {
//   void (*fptr)() = salomlar;
//   fptr();
// }

// int main()
// {
//   int arr[10];
//   arr[5] = 150;
//   for (int i = 0; i < 10; i++)
//   {
//     printf("[%d] = %d", i, arr[i]);
//   }
// }

// int main()
// {
//   int a = 10;
//   int *p = &a;
//   int **pp = &p;
//   **pp = 20;
//   printf("%d", a);
// }

// int main()
// {
//   int a = 10;
//   int *p = &a;
//   void *vp = p;
//   printf("%d", *(int*)vp);
// }

// int hello()
// {
//   printf("Hello\n");
//   return 1;
// }

// int world()
// {
//   printf("World\n");
//   return 2;
// }

// int main()
// {
//   int (*f[5])();

//   f[0] = hello;
//   f[1] = world;

//   f[0]();
//   f[1]();
// }

// int main()
// {
//   int a = 1, b = 53;
//   int *arr[2] = {&a, &b};
//   printf("%d", *arr[1]);
// }

// int main()
// {
//   int a = 235, b = 54;
//   int *arr[2] = {&a, &b};
//   printf("%d", *arr[0]);
// }

// int sum(int a, int b) {return a + b;}

// int main()
// {
//   int (*f)(int, int);
//   f = &sum;
//   printf("%d", f(15, 15));
// }

// ✅ 1-Misol: Ko‘rsatkichga ko‘rsatkich orqali qiymatni o‘zgartirish
// 📘 Shart:

// Foydalanuvchi kiritgan sonni funksiya yordamida ko‘rsatkichga ko‘rsatkich orqali ikki barobarga oshiring. Ya’ni, **pp orqali qiymatni o‘zgartiring.

// void ikkiBarobar(int **pp)
// {
//   **pp *= 2;
// }

// int main()
// {
//   int n;
//   printf("Son kiriting: ");
//   scanf("%d", &n);

//   int *p = &n;
//   int **pp = &p;
//   ikkiBarobar(pp);

//   printf("Kiritgan son 2 borabarga oshdi: %d", n);
// }

// ✅ 2-Misol: Funksiya ko‘rsatkichi yordamida turli amallarni bajarish
// 📘 Shart:

// Ikki son kiritiladi. Ularga nisbatan qo‘shish va ayirish amallarini funksiya ko‘rsatkichi orqali tanlab bajarish kerak.

// int qoshish(int a, int b)
// {
//   return a + b;
// }

// int ayirish(int a, int b)
// {
//   return a - b;
// }

// int main()
// {
//   int a = 5, b = 8;
//   int (*f)(int, int);
//   f = qoshish;
//   printf("Qoshish: %d\n", f(a, b));

//   f = ayirish;
//   printf("Ayirish: %d", f(a, b));

// }

// ✅ 3-Misol: Void pointer yordamida turli turdagi qiymatlarni chiqarish
// 📘 Shart:

// Void pointerga int, float va char tipidagi o‘zgaruvchilar manzilini joylashtirib, ularni chiqarish kerak. Har safar mos typeda cast qilish kerak.

// int main()
// {
//   int a = 5;
//   float b = 5.53;
//   char c = 'a';

//   void *ptr;

//   ptr = &a;
//   printf("%d", *(int*)ptr);

//   ptr = &b;
//   printf("%.2f", *(float*)ptr);

//   ptr = &c;
//   printf("%c", *(char*)ptr);
// }

// int main()
// {
//   int mat[3][3] =
//   {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//   };

//   int *p[3];

//   for (int i = 0; i < 3; i++)
//   {
//     p[i] = mat[i];
//   }

//   int **pp = p;
//   int sum = 0;

//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       sum += *(*(pp + i) + j);
//     }
//   }

//   printf("Natija: %d", sum);

// }

// ✅ 5-Misol: Dinamik xotira va void* bilan ro‘yxat
// 📘 Shart:

// Foydalanuvchi necha ta butun son kiritishini aytadi. malloc yordamida xotira ajratiladi, void* ko‘rsatkich yordamida elementlar kiritiladi va chiqariladi.

#include <stdlib.h>

int main()
{
  int n;
  printf("Nechta son kiritasiz: ");
  scanf("%d", &n);

  void *ptr = malloc(n * sizeof(int));
  if (ptr == NULL)
  {
    printf("Xotira ajratilmadi");
  }

  printf("Sonlarni kiriting: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &((int *)ptr)[i]);
  }

  printf("Kiritilgan sonlarni: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d", ((int *)ptr)[i]);
  }

  free(ptr);
}
