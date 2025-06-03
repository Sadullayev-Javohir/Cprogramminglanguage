// 📘 1-mavzu: Bir o‘lchovli massivlar

// Masala 1: Eng katta sonni topish
// Sizga 10 ta butun son beriladi. Ushbu sonlar massivga saqlanadi. Sizdan talab qilinadi: bu sonlar orasidan eng kattasini topuvchi C dasturini yozing.

// #include <stdio.h>

// int Max(int son[], int n)
// {
//   int max = son[0];

//   for (int i = 0; i < n; i++)
//   {
//     if (son[i] > max)
//     {
//       max = son[i];
//     }
//   }

//   return max;
// }

// int main()
// {
//   int sonlar[] = {1, 2, 3, 6, 36, 3};
//   int n = sizeof(sonlar) / sizeof(sonlar[0]);
//   int max = Max(sonlar, n);
//   printf("%d", sizeof(sonlar));
// }



// 📗 2-mavzu: Ikki o‘lchovli massivlar (matritsalar)

// Masala 2: Matritsa elementlarining yig'indisi
// Foydalanuvchi 3x3 o‘lchamdagi matritsaning barcha elementlarini kiritadi. Siz esa bu elementlarning yig'indisini hisoblaydigan dastur yozishingiz kerak.

// #include <stdio.h>

// int hisobla(int arr[][3], int n)
// {
//   int total = 0;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       total += arr[i][j];
//     }
//   }
//   return total;
// }

// int main()
// {
//   int matritsa[3][3] =
//   {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
//   };

//   int natija = hisobla(matritsa, 3);
//   printf("Yig'indi: %d\n", natija);

//   return 0;
// }



// 📙 3-mavzu: Massivni funksiyaga uzatish

// Masala 3: Funksiya orqali massivdagi manfiy sonlar sonini hisoblash
// Foydalanuvchi 8 ta butun son kiritadi va ular massivda saqlanadi. Bu massivni funksiyaga uzating. Funksiya ushbu massivda nechta manfiy son borligini hisoblab, asosiy dasturga qaytarsin.

// #include <stdio.h>

// int manfiyHisobla(int arr[], int n)
// {
//   int count = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] < 0)
//     {
//       count++;
//     }
//   }

//   return count;
// }

// int main()
// {
//   int sonlar[] = {-2, -3, -4, 5, 7, -7};
//   int length = sizeof(sonlar) / sizeof(sonlar[0]);
//   int manfiy = manfiyHisobla(sonlar, length);
//   printf("Manfiy sonlar soni: %d", manfiy);
// }


