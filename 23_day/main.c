// #include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("example.txt", "r");

//   // fseek(fptr, 0, SEEK_SET);
//   // fseek(fptr, 10, SEEK_CUR);

//   // fseek(fptr, 5, SEEK_END);
//   char str[140];
//   rewind(fptr);
//   fgets(str, sizeof(str), fptr);
//   long pos = ftell(fptr);
//   printf("%ld", pos);

// }

// ✅ MASALA 1: Matndan ma'lum pozitsiyadagi belgini o‘qish
// 🎯 Masala sharti:

// "data.txt" faylida yozilgan matn mavjud. Foydalanuvchi kiritgan pozitsiyadagi belgini o‘qing va ekranga chiqaring. Fayl mavjud bo‘lsa, 0 dan boshlanadi.

// #include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   int poz;

//   if (fptr == NULL)
//   {
//     printf("Xatolik");
//   }

//   printf("Pozitsiyani kiriting: ");
//   scanf("%d", &poz);

//   fseek(fptr, poz, SEEK_SET);

//   char ch = fgetc(fptr);
//   printf("Pozitsiya belgisi: %c", ch);

// }

// ✅ MASALA 2: Fayl oxiridagi oxirgi 5 belgini o‘qish
// 🎯 Masala sharti:

// "sample.txt" faylidan oxirgi 5 ta belgini o‘qib ekranga chiqaring. Faylda yetarli belgilar mavjud deb faraz qilamiz.

// #include <stdio.h>
// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");

//   if (fptr == NULL)
//   {
//     printf("Xatolik");
//   }

//   fseek(fptr, -5, SEEK_END);

//   char str[6];

//   fgets(str, sizeof(str), fptr);

//   printf("%s", str);
// }

// ✅ MASALA 3: Fayl uzunligini aniqlash (baytlarda)
// 🎯 Masala sharti:

// Faylning umumiy uzunligini (necha bayt ekanligini) aniqlovchi dastur tuzing.

// #include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   fseek(fptr, 0, SEEK_END);
//   long length = ftell(fptr);
//   printf("Matn %ld baytdir.", length);

//   fclose(fptr);
// }


// ✅ MASALA 4: Fayldagi matnni boshidan oxirigacha o‘qish va nechta belgi borligini hisoblash
// 🎯 Masala sharti:

// "input.txt" faylidan matnni belgilar bilan birga o‘qib chiqib, jami nechta belgi borligini aniqlang (EOF orqali).

// #include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");

//   char ch;
//   int count = 0;

//   while (ch = fgetc(fptr) != EOF)
//   {
//     count++;
//   }

//   printf("%d ta belgi bor", count);
// }



// ✅ MASALA 5: Faylga yozib, boshidan o‘qish (rewind())
// 🎯 Masala sharti:

// "test.txt" fayliga matn yozing, so‘ng rewind() orqali fayl boshiga qaytib, yozilgan matnni o‘qib ekranga chiqaring.


// #include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("data.txt", "w+");
//   char matn[1000];
//   printf("Faylga yozuv kirting: ");

//   fgets(matn, sizeof(matn), stdin);

//   fputs(matn, fptr);

//   rewind(fptr);

//   char read[1000];
//   fgets(read, sizeof(read), fptr);
//   printf("O'qilgan matn: %s", read);

// }


