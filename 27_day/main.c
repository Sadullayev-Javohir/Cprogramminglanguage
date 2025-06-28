#include <stdio.h>

// #define TOSTRING(x) #x
// #define DEBUG(x) printf(#x " = %d\n", x)
// #define COMMAND(name) "Executing command: " #name
// int main()
// {
//   printf("%s\n", COMMAND(UpdateDB));
//   int yosh = 25;
//   DEBUG(yosh);
//   // printf("%s", TOSTRING(hey));
// }

// #define WARNING(x) puts("Warning: " #x)
// #define PRINTVAR(var) printf(#var " = %d\n", var);
// int main()
// {
//   int a = 10, b = 2;
//   PRINTVAR(a);
//   PRINTVAR(b);
// }

// #define CREATEVAR(name, number) int name##number = number;

// int main()
// {
//   CREATEVAR(x, 5);

//   printf("%d", x5);
// }

// #define COMBINE(a, b) int a##b = b

// int main()
// {
//   // int son12 = 4;
//   COMBINE(son, 12);

//   printf("%d", son12);
// }

// #define TOSTRING(x) #x

// int main()
// {
//   printf("%s", TOSTRING(HEY LEAVE ME ALONE));
// }

// #define YASASH(a, b) a##b

// int main()
// {
//   int son14 = 15;
//   printf("%d", YASASH(son, 14));
// }


// 🧩 1-Masala: Parametrli makros orqali yuzani hisoblang

// Shart: #define yordamida YUZA(a, b) nomli makros yozing. Bu makros to‘g‘ri to‘rtburchak yuzasini hisoblasin (a * b). Asosiy funksiyada ikkita sonni kiritib, makros yordamida yuzani hisoblang.

// #define YUZA(a, b) ((a) * (b))

// int main()
// {
//   int a = 23, b = 35;
//   printf("%d", YUZA(a, b));
// }


// 🧩 2-Masala: Makros orqali stringga aylantiring

// Shart: Parametrni matnga aylantiruvchi # operatorli makros yozing. Kiruvchi parametrni ekranga matn sifatida chiqarsin.

// #define TOSTRING(text) #text

// int main()
// {
//   printf("%s", TOSTRING("HI THERE WHATS UP"));
// }

// 🧩 3-Masala: Token birlashtiruvchi ## operator bilan makros yarating

// Shart: JOIN(a, b) nomli makros yozing, u ikki parametrni birlashtirib o‘zgaruvchi nomiga aylantirsin. Asosiy funksiyada int data2025 = 99; degan o‘zgaruvchi bo‘lsin va makros yordamida uni chaqirib chiqaring.

// #define Join(a, b) a##b

// int main()
// {
//   int data2025 = 99;
//   printf("%d", Join(data, 2025));
// }


// 🧩 4-Masala: Shartli kompilyatsiya bilan DEBUG rejimni nazorat qiling

// Shart: Dastur DEBUG rejimda ishga tushsa, o‘zgaruvchilarning qiymatini chiqarsin. Aks holda faqat natijani chiqarsin. Buning uchun #ifdef va #endif dan foydalaning.

// #define DEBUG

// int main()
// {
//   int natija, a = 4, b = 5;

//   #ifdef DEBUG
//     natija = a + b;
//     printf("%d + %d = %d", a, b, natija);
//     #else
//     natija = a + b;
//     printf("%d", natija);
//   #endif

// }



// 🧩 5-Masala: Makros orqali maksimal qiymatni toping

// Shart: MAX(a, b) nomli parametrli makros yarating. U ikki sonning kattasini qaytarsin. Asosiy funksiyada MAX orqali 3 va 7 sonining kattasini toping.

// #define MAX(a, b) ((a > b) ?(a) :(b))

// int main()
// {
//   printf("Max son: %d", MAX(4, 6));
// }


// 🧩 6-Masala: #ifndef bilan makrosni faqat bir marta aniqlang

// Shart: LIMIT degan makros faqat aniqlanmagan bo‘lsa, uni 100 deb belgilang. LIMIT qiymatini chiqaruvchi dastur yozing.

// #ifndef LIMIT
// #define LIMIT 100
// #endif

// int main()
// {
//   printf("%d", LIMIT);
// }


// 🧩 7-Masala: Makrosdan noto‘g‘ri foydalanish holatini ko‘rsating

// Shart: Quyidagi noto‘g‘ri yozilgan SQUARE makrosni ishlating va qanday xato natija chiqishini ko‘rsatib bering. Keyin uni to‘g‘rilang.

// #define SQUARE(x) (x) * (x)

// int main()
// {
//   int r = 2;
//   printf("Kvadrat: %d\n", SQUARE(r + 1));
// }

// #define MAKEVAR(name) int var##name = 0

// int main()
// {
//   MAKEVAR(age);
//   MAKEVAR(year);
//   MAKEVAR(month);

//   varage = 25;
//   varyear = 6;
//   varmonth = 75;
// }








































































































































































































































































































































