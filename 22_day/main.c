#include <stdio.h>

// int main()
// {
//   FILE *fptr = fopen("data.txt", "w");

//   if (fptr == NULL)
//   {
//     printf("Xatolik.");
//     return 1;
//   }

//   // fprintf(fptr, "You are welcome");
//   // fputs("How about you", fptr);
//   // fputc('a', fptr);

//   return 0;
// }

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   char str[100];
//   char ch;

//   if (fptr == NULL)
//   {
//     printf("Fayl ochilmadi");
//     return 1;
//   }

//   // while (fgets(str, sizeof(str), fptr) != NULL)
//   // {
//   //   printf("%s", str);
//   // }

//   // rewind(fptr);
//   while ((ch = fgetc(fptr)) != EOF)
//   {
//     putchar(ch);
//   }

//   fclose(fptr);
// }

// int main()
// {
//   FILE *file = fopen("data.txt", "r");
//   char str[190];
//   char ch;

//   // while (fgets(str, sizeof(str), file) != NULL)
//   // {
//   //   printf("%s", str);
//   // }

//   while ((ch = fgetc(file)) != EOF)
//   {
//     putchar(ch);
//   }

// }

// struct Talaba
// {
//   char ism[20];
//   int yosh;
// };

// int main()
// {
//   FILE *fptr = fopen("matn.bin", "wb");

// float qiymatlar[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
// fwrite(qiymatlar, sizeof(float), 5, fptr);

// struct Talaba t = {"Javohir", 19};

// fwrite(&t, sizeof(struct Talaba), 1, fptr);
// int son = 12345;

// fwrite(&son, sizeof(int), 1, fptr);
// fclose(fptr);
// }

// int main()
// {
//   FILE *fptr = fopen("matn.bin", "wb");

//   if (fptr == NULL)
//   {
//     printf("xatolik");
//   }

//   int yosh = 3535;
//   fwrite(&yosh, sizeof(int), 1, fptr);
//   fclose(fptr);
// }

// int main()
// {
//   FILE *file = fopen("data.txt", "wb");

//   if (file == NULL)
//   {
//     printf("Xatolik");
//     return 1;
//   }

//   int yosh = 29;
//   fwrite(&yosh, sizeof(int), 1, file);
//   printf("Binary son yozildi");
//   fclose(file);
// }

// int main()
// {
//   FILE *file = fopen("data.txt", "rb");

//   if (file == NULL)
//   {
//     printf("Xatolik");
//     return 1;
//   }

//   int yosh;
//   fread(&yosh, sizeof(int), 1, file);
//   printf("YOsh: %d", yosh);

//   fclose(file);
// }

// struct Talaba
// {
//   char ism[100];
//   int yosh;
// };

// int main()
// {
//   struct Talaba t1 = {"Javohir", 20}, t2;

//   FILE *file = fopen("data.txt", "wb");
//   if (file == NULL)
//   {
//     printf("Xatolik");
//     return 1;
//   }

//   fwrite(&t1, sizeof(struct Talaba), 1, file);

//   fclose(file);

//   file = fopen("data.txt", "rb");
//   fread(&t2, sizeof(struct Talaba), 1, file);
//   printf("Ismi: %s\nYoshi: %d\n", t2.ism, t2.yosh);
// }

// int main()
// {
//   if (remove("data.bin") == 0)
//   {
//     printf("O'chirildi");
//   }
//   else
//   {
//     printf("Xatolik");
//     return 1;
//   }
//   return 0;
// }

// int main()
// {
//   if (rename("DaATA.txt", "MALUMOT.txt") == 0)
//   {
//     printf("CHANGE NAME");
//   }
//   else
//   {
//     printf("NOT CHANGE NAME");
//   }
// }

// 🧩 1-MASALA: Matn yozish va o‘qish
// 📄 Shart:

// Foydalanuvchi tomonidan kiritilgan matnni info.txt fayliga yozing. So‘ng faylni o‘qing va undagi ma’lumotni ekranga chiqaring.

// int main()
// {
//   FILE *file;
//   char str[100];

//   printf("Matn kiriting: ");
//   fgets(str, sizeof(str), stdin);

//   file = fopen("data.txt", "w");
//   if (file == NULL)
//   {
//     printf("Xatolik");
//     return 1;
//   }

//   fputs(str, file);
//   fclose(file);

//   char str2[100];
//   file = fopen("data.txt", "r");

//   printf("Fayldan o'qilgan matn\n");
//   while (fgets(str2, sizeof(str2), file))
//   {
//     printf("%s", str2);
//   }
// }

// 🧩 2-MASALA: Raqamlarni binary faylga yozish va o‘qish
// 📄 Shart:

// Foydalanuvchi kiritgan 5 ta butun sonni raqamlar.dat binary fayliga yozing va keyin ularni fayldan o‘qib, konsolga chiqaring.

int main()
{
  FILE *file;
  int nums[5];
  int i;

  printf("5 ta son kiriting: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &nums[i]);
  }

  file = fopen("raqamlar.dat", "wb");
  fwrite(nums, sizeof(int), 5, file);
  fclose(file);

  int oqilgan[5];
  file = fopen("raqamlar.dat", "rb");
  fread(oqilgan, sizeof(int), 5, file);
  fclose(file);

  printf("Fayldan o'qilgan sonlar: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", oqilgan[i]);
  }
}
