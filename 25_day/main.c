// #include <stdio.h>

// typedef enum
// {
//   SENSOR,
//   CAMERA,
//   MICROPHONE,
// } DeviceType;

// typedef union
// {
//   int piksellar;
//   char aniqlik;
//   float temperatura;
// } DeviceValue;

// typedef struct
// {
//   DeviceType type;
//   DeviceValue value;
// } Device;

// int main()
// {
//   Device qurilma;
//   qurilma.type = SENSOR;
//   float temp = qurilma.value.temperatura = 24;

//   if (qurilma.type == SENSOR)
//   {
//     printf("Sensor temperaturasi: %.2f", temp);
//   }
// }

// 📌 Masala 4 – “Talabalarni faylga yozish va qayta o‘qish”

// Masala sharti:

//     Har bir talaba haqida quyidagi ma’lumotlar mavjud:

//         Ism (char)

//         Familiya (char)

//         Yosh (int)

//         GPA (float)

//     Bu ma’lumotlarni saqlash uchun struktura yarating.

//     Foydalanuvchidan N ta talaba ma’lumotini kiritishni so‘rang va bularni "talabalar.txt" nomli matnli faylga yozing.

//     Keyin faylni qayta ochib, ichidagi barcha talabalar ro‘yxatini ekranga chiqaring:

// #include <stdio.h>

// typedef struct
// {
//   char ism[100];
//   char familya[100];
//   int yosh;
//   float gpa;
// } Talaba;

// void TalabaSaqlash(Talaba t[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d-talaba: \n", i + 1);
//     printf("Ismi: ");
//     scanf("%s", t[i].ism);
//     printf("Familyasi: ");
//     scanf("%s", t[i].familya);
//     printf("Yosh: ");
//     scanf("%d", &t[i].yosh);
//     printf("GPA: ");
//     scanf("%f", &t[i].gpa);
//   }

//   printf("Barcha ma'lumotlar kiritildi");
// }

// void TalabaFile(Talaba t[], int n)
// {
//   FILE *fptr = fopen("data.txt", "w+");
//   if (fptr == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   for (int i = 0; i < n; i++)
//   {
//     fprintf(fptr,  "%d-talaba: Ism: %s, Familyasi: %s, Yosh: %d, GPA: %.2f\n", i+1, t[i].ism, t[i].familya, t[i].yosh, t[i].gpa);

//   }
//   fclose(fptr);
//   printf("data.txt ga ma'lumotlar yozildi");
// }

// void FileRead(Talaba t[], int n)
// {
//   FILE *file = fopen("data.txt", "r");

//   char str[1000];
//   if (file == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   printf("Talabalar ma'lumotlari\n");
//   while (fgets(str, sizeof(str), file) != NULL)
//   {
//     printf("%s", str);
//   }

//   fclose(file);

// }

// int main()
// {
//   int soni;
//   printf("Nechta talaba kiritmoqchisiz: ");
//   scanf("%d", &soni);
//   Talaba talabalar[soni];

//   TalabaSaqlash(talabalar, soni);
//   TalabaFile(talabalar, soni);
//   FileRead(talabalar, soni);
// }

// 📌 Masala 5 – “Binary fayl bilan xodimlar ro‘yxati”

// Masala sharti:

//     Har bir xodim quyidagi ma’lumotlarga ega:

//         Ism (char[])

//         ID (int)

//         Maosh (float)

//     Xodimlar haqida ma’lumotni saqlash uchun struktura yarating.

//     Foydalanuvchidan N ta xodim ma’lumotini kiritib, binary faylga ("xodimlar.dat") yozing.

//     Faylga yozib bo‘lgach, u yerdan barcha xodimlar ma’lumotlarini qayta o‘qing va konsolga chiqaring.

//     Yakunda "xodimlar.dat" faylini:

//         "arxiv_xodimlar.dat" deb qayta nomlang.

//         So‘ng uni o‘chirib tashlang.

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//   char ism[100];
//   int ID;
//   float maosh;
// } Talaba;

// void dataStruct(Talaba t[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d-talabaning ma'lumotlari\n", i + 1);
//     printf("Ismi: ");
//     scanf("%s", t[i].ism);

//     printf("ID: ");
//     scanf("%d", &t[i].ID);

//     printf("Maosh: ");
//     scanf("%f", &t[i].maosh);
//   }
//   printf("Struktura qilindi\n");
// }

// void BinaryWrite(Talaba t[], int n)
// {
//   FILE *file = fopen("binary.bin", "wb");
//   if (file == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   fwrite(t, sizeof(Talaba), n, file);

//   printf("Ma'lumotlar binary faylga saqlandi\n");

//   fclose(file);
// }

// void BinaryRead(Talaba t[], int n)
// {

//   FILE *file = fopen("binary.bin", "rb");

//   if (file == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   fread(t, sizeof(Talaba), n, file);
//   printf("\n📋 Binary fayldan o‘qilgan ma’lumotlar:\n");

//   for (int i = 0; i < n; i++)
//   {
//     printf("Ism: %s, Yosh: %d, ID: %d\n", t[i].ism, t[i].ID, t[i].maosh);
//   }

//     fclose(file);
// }
// int main()
// {
//   int soni;
//   printf("Nechta xodim kiritmoqchisiz:");
//   scanf("%d", &soni);

//   Talaba talabalar[soni];
//   dataStruct(talabalar, soni);
//   BinaryWrite(talabalar, soni);
//   BinaryRead(talabalar, soni);
// }

// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//   int id;
//   char name[100];
//   float gpa;
// } Student;

// void WriteStruct(Student s[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d-talaba ma'lumotlari: \n", i + 1);

//     printf("Ismni kiriting: ");
//     scanf("%s", s[i].name);

//     printf("Id ni kiriting: ");
//     scanf("%d", &s[i].id);

//     printf("Gpa ni kiriting: ");
//     scanf("%f", &s[i].gpa);
//   }

//   printf("Struktura saqlandi\n");
// }

// void FileWrite(Student s[], int n)
// {
//   FILE *file = fopen("students.bin", "wb");

//   if (file == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   fwrite(s, sizeof(Student), n, file);

//   fclose(file);
// }

// void FileRead(Student s[], int idnum, int n)
// {
//   FILE *file = fopen("students.bin", "rb");

//   if (file == NULL)
//   {
//     printf("Fayl topilmadi");
//   }

//   fread(s, sizeof(Student), n, file);
//   int topildi = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if (s[i].id == idnum)
//     {
//       topildi = 1;
//       printf("Topildi\n");
//       printf("Ismi: %s, Id: %d, Gpa: %.2f \n", s[i].name, s[i].id, s[i].gpa);
//     }
//   }
//   if (!topildi) printf("Topilmadi\n");
//   fclose(file);
// }

// int main()
// {
//   int numbers = 2;
//   int idnum;
//   // printf("Nechta talaba kiritasiz: \n");
//   // scanf("%d", &numbers);

//   Student s[numbers];
//   // WriteStruct(s, numbers);
//   // FileWrite(s, numbers);

//   printf("Id kiriting: ");
//   scanf("%d", &idnum);




//   FileRead(s, idnum, numbers);
// }
