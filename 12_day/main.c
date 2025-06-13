#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   int *ptr;
//   ptr  = (int*)malloc(5 * sizeof(int));

//   if (ptr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//   }
//   else
//   {
//     printf("Xotira ajratildi");
//   }
// }

// int main()
// {
//   int *ptr;
//   ptr = (int *)calloc(3434434234345, sizeof(int));

//   if (ptr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//   }
// }

// int main()
// {
//   int *ptr;
//   int n = 5;

//   ptr = (int*) calloc(n, sizeof(int));

//   if(ptr == NULL)
//   {
//     printf("Xotira ajratilmadi\n");
//     return 1;
//   }

//   printf("Ajratilgan xotira qiymatlari:\n");
//   for(int i = 0; i < n; i++)
//   {
//     printf("ptr[%d] = %d\n", i, ptr[i]);
//   }

//   for (int i = 0; i < n; i++)
//   {
//     ptr[i] = (i + 1) * 10;
//   }

//   printf("Yangilangan qiymatlar: \n");
//   for (int i = 0; i < n; i++)
//   {
//     printf("ptr[%d] = %d\n", i, ptr[i]);l
//   }
// }

// int main()
// {
//   int *a = (int *)malloc(5 * sizeof(int));
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d ", a[i]); // Tasodifiy sonlar chiqishi mumkin
//   }
// }

// int main()
// {
//   int *arr;
//   int n = 3;

//   arr = (int*) malloc(n * sizeof(int));

//   if (arr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     return 1;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     arr[i] = i + 1;
//   }

//   arr = (int*) realloc(arr, 5 * sizeof(int));

//   if (arr == NULL)
//   {
//     printf("Xotirani kengaytirib bo'lmadi");
//     return 1;
//   }

//   arr[3] = 4;
//   arr[4] = 5;

//   for (int i = 0; i < 5; i++)
//   {
//     printf("arr[%d] = %d\n", i, arr[i]);
//   }

// }

// int main()
// {
//   for (int i = 0; i < 100; i++)
//   {
//     int *ptr = (int *) malloc(100 * sizeof(int));
//     ptr[i] = i;
//     printf("%d\n", ptr[i]);
//     printf("\n");
//     free(ptr);
//     ptr = NULL;
//   }

//   printf("Dasturni tugatdik (xotira toza)");
// }

// int main()
// {
//   int n, i;
//   int *arr;

//   printf("Elementlar sonini kiriting: ");
//   scanf("%d", &n);

//   arr = (int*) malloc(n * sizeof(int));

//   if (arr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     return 1;
//   }

//   for (i = 0;  i < n; i++)
//   {
//     arr[i] = i * i;
//   }

//   printf("Kvadratlar\n");
//   for (i = 0; i < n; i++)
//   {
//     printf("%d\n", arr[i]);
//   }
//   free(arr);
//   arr = NULL;

//   return 0;
// }

// int main()
// {
//   int *a = (int *)malloc(sizeof(int));
//   *a = 50;
//   free(a);
//   *a = 70;
//   printf("%d", a);
// }

// 🟦 1. malloc() uchun masala:

// 📝 Masala nomi: Student Baholari

// Sharti:
// Sizga talabalarning baholarini saqlash kerak. Foydalanuvchidan necha nafar talabaga baho qo‘yilishini so‘raysiz. Har bir talabaning bahosi butun son (integer) bo‘ladi. Siz bu qiymatlarni dinamik xotirada saqlashingiz va barcha baholarni kiritgandan so‘ng ularning o‘rtacha bahosini hisoblab chiqishingiz kerak.

// 🔹 Xotirani malloc() orqali ajrating.
// 🔹 O‘rtacha qiymatni floating-point formatda (float yoki double) chiqaring.
// 🔹 Dastur oxirida ajratilgan xotirani tozalang.

// int main()
// {
//   int n, sum = 0;
//   float average;

//   printf("Nechta baho kiritmoqchisiz: ");
//   scanf("%d", &n);

//   int *baholar = (int*) malloc(n * sizeof(int));

//   for (int i = 0; i < n; i++)
//   {
//     printf("[%d] = ", i);
//     scanf("%d", &baholar[i]);
//     sum += baholar[i];
//   }

//   average = sum / n;
//   printf("O'rtacha baho: %.2f", average);

//   free(baholar);
//   baholar = NULL;
// }

// 🟩 2. calloc() uchun masala:

// 📝 Masala nomi: Nolga To‘ldirilgan Massiv

// Sharti:
// Sizga n ta butun sonli massiv kerak, unda boshlang‘ich qiymatlar 0 bo‘lishi kerak. Foydalanuvchidan n qiymatini olasiz va calloc() yordamida massiv ajratasiz. Keyin, foydalanuvchi kiritgan k indeksga qiymat berishingiz kerak (massiv[k] = x). Faqat k indeks massiv chegarasidan chiqmasligi kerak. Oxirida massivdagi barcha qiymatlarni ekranga chiqaring.

// 🔹 calloc() orqali boshlang‘ich qiymatlarni 0 ga teng bo‘lgan massiv ajrating.
// 🔹 Xatoliklar (masalan, noto‘g‘ri indeks) bo‘lsa, mos xabar chiqaring.
// 🔹 Xotirani free() bilan tozalang.

// int main()
// {
//   int n, x, a;
//   printf("Nechta massiv bo'lsin: ");
//   scanf("%d", &n);
//   int *sonlar = (int *)calloc(n, sizeof(int));

//   for (int i = 0; i < n; i++)
//   {
//     printf("([%d] %d)\n", i, sonlar[i]);
//   }

//   printf("Qaysi indexga son qo'ymoqchisiz: ");
//   scanf("%d", &x);

//   printf("Qaysi raqamni kiritasiz: ");
//   scanf("%d", &a);
//   sonlar[x] = a;

//   printf("Natija: ");
//   for (int i = 0; i < n; i++)
//   {
//     printf("([%d] %d)\n", i, sonlar[i]);
//   }

//   free(sonlar);
//   sonlar = NULL;
// }



