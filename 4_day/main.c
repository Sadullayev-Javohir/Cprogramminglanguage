// ✅ 1-masala: Funksiya prototipi va modulli dasturlash

// Masala:
// Quyidagi topshiriqni modulli tarzda yozing: foydalanuvchi 3 ta son kiritadi. Har bir sonni alohida funksiyada qabul qilib, ularning maksimalini aniqlovchi asosiy funksiyani yozing. Funksiya prototiplarini to‘g‘ri joylashtiring.

// Talablar:

//     Har bir son uchun getInput() funksiyasi bo‘lsin.

//     Maksimal qiymatni findMax(int a, int b, int c) funksiyasi hisoblasin.

//     main() faqat chaqiruvchi bo‘lsin.

// #include <stdio.h>

// int getIndex(int index);
// int Max(int a, int b, int c);


// int main()
// {
//   int son1 = getIndex(1);
//   int son2 = getIndex(2);
//   int son3 = getIndex(3);

//   int max = Max(son1, son2, son3);
//   printf("Katta son: %d", max);
// }

// int getIndex(int index)
// {
//   int value;
//   printf("%d-sonni kiriting: ", index);
//   scanf("%d", &value);
//   return value;
// }

// int Max(int a, int b, int c)
// {
//   int max = a;
//   if (b > max)
//     max = b;
//   if (c > max)
//     max = c;
//   return max;
// }


// 🔁 2-masala: Rekursiv funksiya orqali faktorial

// Masala:
// Foydalanuvchi kiritgan musbat butun sonning faktorialini rekursiv funksiya orqali hisoblang.

// Namuna:

// Input: 5
// Output: 120

// Izoh:
// Faktorial: 5! = 5 * 4 * 3 * 2 * 1 = 120

// Qo‘shimcha talab:
// Agar foydalanuvchi manfiy son kiritsa, "Xato: manfiy son uchun faktorial aniqlanmagan" deb chiqsin.

// #include <stdio.h>

// int faktorial(int n)
// {
//   if (n == 0)
//     return 1;
//   else if (n > 0)
//   {
//     return n * faktorial(n - 1);
//   }
//   else
//   {
//     printf("Xatolik %d", n);
//     return -1;
//   }
// }

// int main()
// {
//   int natija = faktorial(-1);
//   if (natija != -1)
//   {
//     printf("Faktorial: %d", natija);
//   }
// }


// 👉 3-masala: Funksiyaga pointer uzatish

// Masala:
// Ikki xil arifmetik amal bajaradigan ikkita funksiya yozing:

//     int qo‘shish(int a, int b)

//     int ayirish(int a, int b)

// Keyin bitta umumiy hisobla funksiyasi yarating, bu funksiyaga ikki son bilan birga funksiya pointeri uzatiladi.
// Programma foydalanuvchidan amal turini (1 = qo‘shish, 2 = ayirish) so‘raydi va pointer yordamida to‘g‘ri funksiyani bajaradi.

// Izoh:

//     hisobla(int a, int b, int (*oper)(int, int))

//     Foydalanuvchi kiritgan qiymatga qarab kerakli funksiya pointeri uzatiladi.


// #include <stdio.h>

// int qoshish(int a, int b);
// int ayirish(int a, int b);
// int hisobla(int a, int b, int (*oper)(int, int));

// int main()
// {
//   int a, b, tanlov;
//   printf("Birinchi sonni kiriting: ");
//   scanf("%d", &a);
//   printf("Ikkinchi sonni kiriting: ");
//   scanf("%d", &b);

//   printf("Amal turini tanlang: \n");
//   printf("1-Qo'shish\n");
//   printf("2-Ayirish\n");
//   printf("Tanlovingiz: ");
//   scanf("%d", &tanlov);

//   int (*operPointer)(int, int);

//   if (tanlov == 1)
//   {
//     operPointer = qoshish;
//   }
//   else if (tanlov == 2)
//   {
//     operPointer = ayirish;
//   }
//   else
//   {
//     printf("Noto'g'ri tanlov!\n");
//     return 1;
//   }

//   int natija = hisobla(a, b, operPointer);
//   printf("Natija: %d\n", natija);

//   return 0;
// }

// int qoshish(int a, int b)
// {
//   return a + b;
// }

// int ayirish(int a, int b)
// {
//   return a - b;
// }

// int hisobla(int a, int b, int (*oper)(int, int)) {
//   return oper(a, b);
// }




// #include <stdio.h>

// void swap(int *x, int *y)
// {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }

// int main()
// {
//   int a = 10, b = 20;
//   swap(&a, &b);
//   printf("a = %d, b = %d", a, b);

//   return 0;
// }
