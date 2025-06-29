#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// int main()
// {
//   int *ptr = (int *)malloc(5 * sizeof(int));

//   if (ptr == NULL)
//   {
//     printf("Xotira ajratilmadi");
//     return 1;
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     ptr[i] = i * 2;
//     printf("%d", ptr[i]);
//   }

//   free(ptr);
//   return 0;
// }

// int main()
// {
//   int *ptr = (int *)malloc(3 * sizeof(int));

//   ptr[0] = 10;
//   ptr[1] = 20;
//   ptr[2] = 30;

//   printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
// }

// int main()
// {
//   printf("Dastur boshlandi");
//   exit(0);

//   printf("Bu kod ishlamaydi");
// }

// int main()
// {
//   char str[] = "123";
//   int son = atoi(str);
//   printf("Natija : %d\n", son);
//   return 0;
// }

// int main()
// {
//   char str[] = "3.14";
//   float pi = atof(str);
//   printf("Pi: %.2f", pi);
// }

// int main()
// {
//   int son = rand();
//   printf("Tasodifiy son %d", son);
// }

// #include <time.h>

// int main()
// {
//   srand(time(0));
//   int son = rand();
//   printf("Tasodifiy: %d", son);
// }

// int main()
// {
//   srand(time(0));
//   int son =  rand() % 100 + 1;
//   printf("%d", son);
// }

// int main()
// {
//   srand(time(NULL));

//   // for (int i = 0; i < 5; i++)
//   // {
//   //   printf("%d ", rand() % 10 + 1);
//   // }
//   // printf("%d", rand() % 10);
// }

// int main()
// {
//   // system("clear");
//   // exit(0);
//   char s[] = "123";
//   // int n = atoi(s);
//   float n = atof(s);
//   printf("%f", n);

// }

// int main()
// {
//   char matn[] = "salom";
//   int uzunlik = strlen(matn);
//   printf("Matn uzunligi: %d\n", uzunlik);
// }

// int main()
// {
//   char manba[] = "Dasturlash";
//   char nusxa[20];

//   strcpy(nusxa, manba);

//   printf("Nusxa: %s\n", nusxa);
// }

// int main()
// {
//   char manba[] = "OPENAI";
//   char nusxa[10];

//   strncpy(nusxa, manba, 4);

//   nusxa[4] = '\0';

//   printf("Nusxa: %s\n", nusxa);
// }

// int main()
// {
//   char a[20] = "Salom ";
//   char b[] = "dunyo";

//   strcat(a, b);

//   printf("Natija: %s\n", a);
// }

// int main()
// {
//   char a[] = "apple";
//   char b[] = "banana";

//   int natija = strcmp(a, b);

//   if (natija == 0)
//   {
//     printf("Stringlar teng");
//   }
//   else if (natija < 0)
//   {
//     printf("a < b\n");
//   }
//   else
//   {
//     printf("a > b\n");
//   }
// }

// int main()
// {

// #include <stdio.h>
// #include <string.h>

// char matn[] = "Hello World";
// puts(matn);

// char c = 'A';
// putchar(c);

// char belgi = getchar();
// putchar(belgi);
// char matn[] = "Bu bir test matni.";
// char *qidir = strstr(matn, "test");

// if (qidir != NULL)
//   printf("Topildi: %s\n", qidir); // test matni.
// else
//   printf("Topilmadi.\n");

// return 0;

// char matn[] = "programma";
// // char *p = strchr(matn, 'g');
// char *p = strstr(matn, "prog");

// if (p != NULL)
// {
//   printf("prog harfi topildi: %s\n", p);
// }
// else
// {
//   printf("Belgilar topilmadi");
// }
// char *ptr = "salom";

// printf("Uzunligi: %d", strlen(ptr));

// char a[30];
// char b[] = "World";
// strcpy(a, b);
// printf("%s", a);

// char a[20];
// char b[] = "hi";

// strncpy(a, b, 2);
// printf("%s", a);

// char a[50] = "Hello ";
// char b[] = "World";

// strcat(a, b);
// printf("%s", a);

// char a[] = "iphone";
// char b[] = "samsung";

// int natija = strcmp(a, b);

// if (natija == 0)
// {
//   printf("Ikkisi ham teng");
// }
// else if (natija < 0)
// {
//   printf("a < b");
// }
// else
// {
//   printf("a > b");
// }

// printf("%d", natija);
// }

// #include <math.h>

// int main()
// {
// printf("%f", sqrt(25));
// printf("%f", pow(2, 5));
// printf("%d", (int)fabs(-15));
// printf("%f", ceil(4.1));
// printf("%f", floor(4.99));
// printf("%f", (int)fmod(15, 2));
// }

// int main()
// {
//   time_t hozir = time(NULL);
//   printf("Joriy vaqt (time_t format): %ld\n", hozir);
// }

// int main()
// {
//   time_t hozir = time(NULL);

//   struct tm *vaqt = localtime(&hozir);

// char formatli[50];
// strftime(formatli, sizeof(formatli), "%Y-%m-%d %H:%M:%S", vaqt);

// printf("%s", formatli);

// char *matn = asctime(vaqt);
// printf("Vaqt: %s", matn);
// printf("%d, %d, %d", vaqt->tm_year + 1900, vaqt->tm_mon + 1, vaqt->tm_mday);
// printf("%02d:%02d:%02d", vaqt->tm_hour, vaqt->tm_min, vaqt->tm_sec);
// }

// int main()
// {
//   clock_t  boshlanish = clock();

//   for (long i = 0; i < 100000000; i++);

//   clock_t tugash = clock();

//   double sekund = (double)(tugash - boshlanish) / CLOCKS_PER_SEC;

//   printf("Dastur %.2f sekund ishladi.", sekund);

// }

// #include <stdio.h>
// #include <time.h>

// int main()
// {
//   time_t start, end;
//   start = time(NULL);

//   // Simulyatsiya (kutish)
//   for (long i = 0; i < 100000000; i++)
//     ;

//   end = time(NULL);

//   double farq = difftime(end, start);
//   printf("Farq: %.0f sekund\n", farq);
//   return 0;
// }

