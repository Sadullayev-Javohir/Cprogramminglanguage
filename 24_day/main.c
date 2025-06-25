#include <stdio.h>
#include <string.h>

// struct Nomi
// {
//   int yosh;
//   char ism[50];
//   float baho;
// };

// int main()
// {
//   struct Nomi obj;
//   obj.yosh = 50;
//   scanf("%s", &obj.ism);
//   obj.baho = 15.5;

//   printf("Sizning yoshingiz: %d, ismingiz: %s, bahongiz: %.2f", obj.yosh, obj.ism, obj.baho);
// }

// typedef struct Talaba1
// {
//   char ism[100];
//   int yosh;
//   float gpa;
// } Talaba;

// int main()
// {
//   Talaba talaba1 = {"Husan", 16, 4};
//   printf("Ismi: %s, Yoshi: %d, Gpa: %.2f", talaba1.ism, talaba1.yosh, talaba1.gpa);
// }

// typedef struct
// {
//   char ism[100];
//   int yosh;
// } Talaba;

// void print(Talaba *t1)
// {
//   printf("Ismi :%s, Yoshi: %d", t1->ism, t1->yosh);
// }

// int main()
// {
//   Talaba t1 = {"Javohir", 19};
//   print(&t1);
// }

// struct Student
// {
//   char name[20];
//   int age;
// };

// void print(struct Student t1)
// {
//   printf("Ismi: %s, yoshi: %d", t1.name, t1.age);
// }

// int main()
// {
//   struct Student group[3] =
//       {
//           {"Ali", 29},
//           {"Vali", 30},
//           {"Sami", 26},
//       };
//   print(group[0]);
//   print(group[1]);
//   print(group[2]);

// }

// struct Talaba
// {
//   char name[50];
//   int age;
// };

// int main()
// {
//   struct Talaba t1 = {"Javohir", 15};
//   struct Talaba *ptr = &t1;

//   printf("Ismingiz: %s, Yoshingiz: %d", ptr->name, ptr->age);
// }

// struct Adress
// {
//   char street[100];
//   int zip;
// };

// struct Person
// {
//   char name[100];
//   struct Adress adr;
// };

// int main()
// {
//   struct Person p1 = {"Javohir", {"Iqtisodchilar ko'chasi 2-uy", 100100}};

//   printf("Ismi: %s, manzil: %s, zip code: %d", p1.name, p1.adr.street, p1.adr.zip);
// }

// union Data
// {
//   int i;
//   float f;
//   char str[20];
// };

// int main()
// {
//   union Data d;
//   d.i = 10;
//   d.f = 2.4;
//   printf("%f", d.f);
// }

// enum Day {MON = 1, TUE, WED, THU, FRI};

// int main()
// {
//   enum Day today = WED;
//   printf("%d", today);
// }

// int main()
// {
//   FILE *f = fopen("data.txt", "w");

//   if (f == NULL)
//   {
//     printf("Fayl ochilmadi");
//   }

//   fprintf(f, "Salom dunyo");
//   fputs("\tHey leave me alone", f);

//   fclose(f);

//   FILE *rf = fopen("data.txt", "r");
//   char matn[199];
//   if (rf == NULL)
//   {
//     printf("Fayl yo'q");
//   }

//   fgets(matn, sizeof(matn), rf);

//   printf("O'qilgan matn: %s", matn);

//   fclose(rf);
// }

// int main()
// {
//   FILE *f =fopen("data.bin", "wb");

//   char student[] = "Ali Valiyev";

//   fwrite(student, sizeof(student), 1, f);

//   fclose(f);

//   FILE *rf = fopen("data.bin", "rb");

//   if (rf == NULL)
//   {
//     printf("Topilmadi");
//   }
//   char matn[50];

//   fread(matn, sizeof(matn), 10, rf);

//   printf("O'qilgan matn: %s", matn);

//   fclose(rf);
// }

// int main()
// {
//   int status = remove("data.bin");

//   if (status == 0)
//   {
//     printf("Fayl o'chirildi");
//   }
//   else
//   {
//     printf("Fayl topilmadi");
//   }
// }

// int main()
// {
//   int result = rename("hey.txt", "data.txt");

//   if (result == 0)
//   {
//     printf("Fayl nomi o'zgartirildi");
//   }
//   else
//   {
//     printf("topilmadi");
//   }
// }

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   char c;
//   while ((c = fgetc(fptr)) != EOF)
//   {
//     putchar(c);
//   }
//   // fseek(fptr, 0, SEEK_END);
//   // rewind(fptr);
//   // long pozitsiya = ftell(fptr);
//   // printf("Pozitsiya: %ld", pozitsiya);
// }

// struct Talaba
// {
//   char familya[50];
//   char ism[50];
//   int yosh;
//   float gpa;
// };

// int engKattaGpa(struct Talaba t[], int n)
// {
//   int kattaIndex = 0;
//   for (int i = 1; i < n; i++)
//   {
//     if (t[i].gpa > t[kattaIndex].gpa)
//     {
//       kattaIndex = i;
//     }
//   }
//   return kattaIndex;
// }

// int main()
// {
//   int talabasoni;
//   printf("Nechta talaba kiritasiz: ");
//   scanf("%d", &talabasoni);

//   struct Talaba talabalar[talabasoni];

//   for (int i = 0; i < talabasoni; i++)
//   {
//     printf("\n%d-talaba ma'lumotlarini kiriting: \n", i+1);
//     printf("Ism: ");
//     scanf("%s", talabalar[i].ism);

//     printf("Familya: ");
//     scanf("%s", talabalar[i].familya);

//     printf("Yoshi: ");
//     scanf("%d", &talabalar[i].yosh);

//     printf("Gpa: ");
//     scanf("%f", &talabalar[i].gpa);

//     int top = engKattaGpa(talabalar, talabasoni);

//     printf("Katta gpa bali bor o'quvchi: ");
//     printf("Ismi: %s", talabalar[top].ism);
//     printf("Famiyasi: %s", talabalar[top].familya);
//     printf("Yoshi: %d", talabalar[top].yosh);
//     printf("Gpa: %.2f", talabalar[top].gpa);
//   }
// }

// struct Manzil
// {
//   char shahar[100];
//   int zip_code;
// };

// struct Xodim
// {
//   char ism[100];
//   int id;
//   struct Manzil m;
// };

// void print(struct Xodim x)
// {
//   printf("Xoidmlar: ");
//   printf("Ismi: %s", x.ism);
//   printf("Id: %d", x.id);
//   printf("Shahar: %s", x.m.shahar);
//   printf("Zip Code: %d", x.m.zip_code);

// }

// void Toshkentdagilar(struct Xodim x[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (strcmp(x[i].m.shahar, "Toshkent") == 0)
//     {
//       printf("Toshkentdagi xodimlar: ");
//       print(x[i]);
//     }
//   }
// }

// int main()
// {
//   int soni;
//   printf("Nechta xodim kiritasiz: ");

//   scanf("%d", &soni);

//   struct Xodim x[soni];

//   for (int i = 0; i < soni; i++)
//   {
//     printf("%d-talaba : ", i + 1);
//     printf("Ismi: ");
//     scanf("%s", x[i].ism);

//     printf("Id: ");
//     scanf("%d", &x[i].id);

//     printf("Shahar: ");
//     scanf("%s", x[i].m.shahar);

//     printf("Zip Code: ");
//     scanf("%d", &x[i].m.zip_code);

//   }
//   Toshkentdagilar(x, soni);

// }

typedef enum
{
  SENSOR,
  CAMERA,
  MICROPHONE,
} DeviceType;

typedef union
{
  float temperatura;
  int piksellar;
  char aniqlik;
} DeviceValue;

typedef struct
{
  DeviceType type;
  DeviceValue value;
} Device;

int main()
{
  Device d;
  d.type = SENSOR;
  d.value.piksellar = 365;

  printf("Temperatura %d", d.value.piksellar);
}
