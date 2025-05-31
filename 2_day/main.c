// Masala : Foydalanuvchi kiritgan 3 xonali sonning raqamlarining o‘zaro joylarini almashtirib, yangi son hosil qiling.Shart : Masalan, agar foydalanuvchi 123 kiritsa, uni 321 ko‘rinishiga o‘zgartiring.So‘ng ularning farqini hisoblang.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int son, yuzlik, onlik, birlik, teskari, farq;

//   printf("Uch xonali son kiriting: ");
//   scanf("%d", &son);

//   yuzlik = son / 100;
//   onlik = (son / 10) % 10;
//   birlik = son % 10;

//   teskari = birlik * 100 + onlik * 10 + yuzlik;

//   farq = abs(son - teskari);

//   printf("Teskari %d", teskari);
//   printf("Farq: %d", farq);
// }

// 🧩 Masala 2 :

//     Masala : Foydalanuvchidan ikkita butun son oling.Har ikkala son musbat,
//     manfiy yoki biri musbat, biri manfiy ekanligini aniqlang.Chiqarish : "Ikkalasi musbat", "Ikkalasi manfiy", "Biri musbat, biri manfiy".

// #include <stdio.h>

// int main() {
//   int a, b;
//   printf("Birinchi sonni kiriting: ");
//   scanf("%d", &a);

//   printf("Ikkinchi sonni kiriting: ");
//   scanf("%d", &b);

//   if (a > 0 && b > 0)
//   {
//     printf("Ikkalasi musbat");
//   }
//   else if (a < 0 && b < 0)
//   {
//     printf("Ikkalasi manfiy");
//   }
//   else
//   {
//     printf("Biri musbat biri manfiy");
//   }
// }

// 🧩 Masala 3 :

//     Masala : Foydalanuvchi kiritgan sonni 2 ga,
//              3 ga va 5 ga bo‘linishini alohida - alohida tekshirib,
//              har bir shart bo‘yicha mos xabar chiqaring.

// #include <stdio.h>

// int main() {
//   int a;
//   printf("Son kiriting: ");
//   scanf("%d", &a);

//   if (a % 5 == 0) {
//     printf("Son 5 ga bo'linadi %d", a);
//   }
//   if (a % 2 == 0) {
//     printf("Son 2 ga bo'linadi %d", a);
//   }
//   if (a % 3 == 0) {
//     printf("Son 3 ga bo'linadi %d", a);
//   }
// }

// 🔹 MAVZU 2 : Kiritish - chiqarish funksiyalari
//                             🧩 Masala 1 :

//     Masala : scanf yordamida foydalanuvchidan to‘liq
//              ism(char name[50]),
//     yoshi(int age) va bahosi(float grade) ni kiriting.Chiqarish : printf orqali bu ma’lumotlarni tartiblangan holda chiqarib bering :

//     Ism : Ali
//           Yosh : 18 Bahosi : 4.5

// #include <stdio.h>

// int main() {
//   char ism[50];
//   int yoshi;
//   float bahosi;

//   printf("Ism kiriting: ");
//   scanf("%s", ism);

//   printf("Yoshini kiriting: ");
//   scanf("%d", &yoshi);

//   printf("Bahosini kiriting: ");
//   scanf("%f", &bahosi);

//   printf("Ismi %s, Yoshi %d, Bahosi: %.2f", ism, yoshi, bahosi);
// }

// 🧩 Masala 2 :

//     Masala : getchar() va putchar() funksiyalaridan foydalanib,
//              foydalanuvchi kiritgan belgini qabul qiling va uning ASCII kodini chiqarib bering.

// #include <stdio.h>

// int main() {
//   char belgi;
//   printf("Belgi kiriting: ");
//   belgi = getchar();

//   printf("Belgi ASCII raqami %d\n", belgi);
//   putchar(belgi);
// }

// 🧩 Masala 3 – Yechim

//     Vazifa : Foydalanuvchi kiritgan matndan faqat unli harflarni ajratib chiqarish.

//              🔤 Unli harflar : O‘zbek tilida – a,
//     e, i, o, u va ular katta harflari : A, E, I, O, U

// #include <stdio.h>
// int main()
// {
//   char matn[100];
//   printf("Matn kiriting: ");
//   scanf("%[^\n]", matn);

//   printf("Unli harflar: ");

//   for (int i = 0; matn[i] != '\0'; i++) {
//     char ch = matn[i];
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//       printf("%c", ch);
//     }
//   }

//   return 0;
// }


// 🔹 MAVZU 3: Shartli operatorlar
// 🧩 Masala 1:

// Masala: Foydalanuvchi baho kiritadi (0 dan 100 gacha). Quyidagi shartlarga ko‘ra bahoni talqinqiling:

//     90–100: A

//     80–89: B

//     70–79: C

//     60–69: D

//     0–59: F
//     Eslatma: noto‘g‘ri kiritilgan qiymat bo‘lsa, “Noto‘g‘ri baho!” deb chiqaring.


// #include <stdio.h>

// int main() {
//   int baho;
//   printf("Baho kiriting (0-100): ");
//   scanf("%d", &baho);

//   if (baho >= 90 && baho <= 100)
//   {
//     printf("A");
//   }
//   else if (baho >= 80 && baho <= 89) 
//   {
//     printf("B");
//   }
//   else if (baho >= 70 && baho <= 79) {
//     printf("C");
//   }
//   else if (baho >= 60 && baho <= 69) {
//     printf("D");
//   }
//   else if (baho >= 0 && baho <= 59)
//   {
//     printf("F");
//   }
//   else 
//   {
//     printf("Xatolik");
//   }
// }

// 🧩 Masala 2 :

//     Masala : Foydalanuvchi tug‘ilgan yilini kiritsin.Tizim hozirgi
//              yil(masalan, 2025) bilan taqqoslab,
//     uning yoshi va u voyaga yetganmi yoki yo‘qmi degan xabarni chiqarsin.Chiqarish :

//     Sizning yoshingiz : 19 Siz voyaga yetgansiz.

// #include <stdio.h>

// int main() {
//   int tugilganYil, hozirgiYil, yosh;
//   hozirgiYil = 2025;
//   printf("Tug'ilgan yilingizni kiriting: ");
//   scanf("%d", &tugilganYil);

//   yosh = hozirgiYil - tugilganYil;

//   if (yosh > 18) 
//   {
//     printf("Voyaga yetgan %d", yosh);
//   }
//   else
//   {
//     printf("Voyaga yetmagan %d", yosh);
//   }
// }

// 🧩 Masala 3 :

//     Masala : Uchta son kiriting.Ulardan eng kattasini,
//     eng kichigini va o‘rtadagi qiymatni aniqlab, ularni alohida - alohida chiqarib bering.

#include <stdio.h>

int main() {
  int a, b, c;
  int max, min, mid;

  printf("1-sonni kiriting: ");
  scanf("%d", &a);

  printf("2-sonni kiriting: ");
  scanf("%d", &b);

  printf("3-sonni kiriting: ");
  scanf("%d", &c);

  max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;

  min = a;
  if (b < min)
    min = b;
  if (c < min)
    min = c;

  mid = a + b + c - max - min;

  printf("Eng katta son %d\n", max);
  printf("Eng kichik son %d\n", min);
  printf("O'rtadagi qiymat %d\n", mid);
}