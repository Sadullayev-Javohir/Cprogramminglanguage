#include <stdio.h>
// #define KUB(x) ((x) * (x) * (x))
// #define Salom printf("Salom, dunyo!\n");
// // #define Katta(a, b) ((a) > (b) ? (a) : (b))
// #define Katta(a, b) a > b ? a : b

// int main()
// {
//   int a = KUB(3);
//   Salom;
//   printf("%d", a);
//   int x1 = 5, x2 = 7;
//   int katta = Katta(x1 + 3, x2);
//   printf("Katta son: %d", katta);
// }

// #define TEST
// // #define PRO

// int main()
// {
//   // #ifdef TEST
//   //   printf("Test yoqilgan");
//   // #endif
//   //   return 0;
//   #ifndef PRO
//     printf("PRO versiyasi yo'q, bepul versiyasi ishlayapti");
//   #endif
//     return 0;
// }

// #define Version 4

// int main()
// {
//   #if Version == 1
//     printf("1-versiya.\n");
//   #elif Version == 2
//     printf("2-versiya.\n");
//   #elif Version == 3
//     printf("3-versiya.\n");
//   #else
//     printf("Noma'lum versiya");
//   #endif
//     return 0;
// }

// #define DEBUG

// int main()
// {
//   #ifdef DEBUG
//     printf("Debug rejimi yoqilgan. Xatolarni tekshirayapmiz");
//   #else
//     printf("Oddiy ishlash rejimi");
//   #endif
//     return 0;
// }

// #define DEMO
// #undef DEMO

// int main()
// {
//   #ifdef DEMO
//     printf("Demo rejimi yoqilgan");
//   #else
//     printf("Demo rejimi o'chirilgan");
//   #endif
//     return 0;
// }

// #define DEMO

// int main()
// {
// #ifdef DEMO
//   printf("Demo bor");
// #endif

// #ifndef DEMO
//   printf("Demo yo'q");
// #endif
// }

// #define kvadrat(x) ((x) * (x))

// int main()
// {
//   int a = kvadrat(5);
//   printf("%d", a);
// }

// #define PrintVar(x) printf(#x " = %d", x);

// int main()
// {
//   int gpa = 100;
//   PrintVar(gpa);
//   PrintVar(4);
// }

// #define MAKEVAR(name) int var##name = 0;

// int main()
// {
//   MAKEVAR(age);
//   MAKEVAR(year);
//   MAKEVAR(score);

//   varage = 25;
//   varyear = 1992;
//   varscore = 50;

//   printf("%d", varage);
// }

// #define TOSTRING(x) #x
// #define TOSTRING(x) #x
// #define COMBINE(a, b) a##b
// #define KUB(x) ((x)*(x)*(x))

// int main()
// {
//   // printf("Matnga aylantirilgan: %s", TOSTRING(HELLOWORLD));
//   int COMBINE(test, 1) = 10;
//   printf("Yangi o'zgaruvchi: %d", test1);
// }

// ✅ 1-MASALA: #define, #ifdef, #ifndef va #include ishlatilishi (36-kun)
// 📘 Masala sharti:

// Siz ikkita holatni tasavvur qiling:

//     Agar DEBUG makrosi aniqlangan bo‘lsa, dastur "Debug rejimi: Hisoblash boshlandi" deb chiqarsin.

//     Aks holda, faqat oddiy hisoblashni bajarsin va natijani chiqarsin.

//     Hisoblash – foydalanuvchidan 2 ta son olib, ularni qo‘shish.

//     Bonus: #include orqali stdio.h kutubxonasidan foydalaning

// #define DEBUG

// int main()
// {
//   int a, b;
// #ifdef DEBUG
//   printf("Debug rejimi: Hisoblash boshlandi");
// #endif
//   printf("Ikkita son kiriting: ");
//   scanf("%d %d", &a, &b);

//   int natija = a + b;
// #ifndef DEBUG
//   printf("Natija: %d", natija);
// #else
//   printf("Debug: %d + %d = %d", a, b, natija);
// #endif
//   return 0;
// }
