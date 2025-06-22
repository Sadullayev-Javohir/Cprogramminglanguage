#include <stdio.h>

// int main()
// {
//   char matn[100];
//   FILE *fptr = fopen("data.txt", "r");

//   if (fptr == NULL)
//   {
//     printf("Fayl ochilmadi");
//   }

//   fgets(matn, sizeof(matn), fptr);
//   fclose(fptr);
//   printf("O'qilgan matn: %s", matn);
// }

// int main()
// {
// FILE *fptr;

// r   o'qish uchun ochish (fayl mavjud bo'lishi kerak)
// fptr = fopen("data.txt", "r");

// w yozish uchun ochish (agar mavjud bo'lsa, tozalanadi)
// fptr = fopen("data.txt", "w");

// a yozish uchun ochish, oxiriga qo'shadi(append)
// fptr = fopen("data.txt", "a");

// r+ o'qish va yozish
// fptr = fopen("data.txt", "r+");

// w+ o'qish va yozish, fayl bo'lsa o'chiriladi
// fptr = fopen("data.txt", "w+");

// a+ o'qish va yozish, oxiriga yozadi
// fptr = fopen("data.txt", "a+");

// FILE *fptr = fopen("data.txt", "w");
// // fputs("Bu fputs funksiyasi.\n", fptr);
// fputc('A', fptr);
// fclose(fptr);

// int yosh;
// FILE *fptr = fopen("data.txt", "r");
// if (fptr == NULL)
// {
//   printf("Fayl ochilmadi.\n");
//   return 1;
// }
// fscanf(fptr, "%d", &yosh);
// fclose(fptr);

// printf("Fayldan o'qilgan yosh: %d", yosh);
// }

// int main()
// {
//   // FILE *fptr = fopen("data.txt", "w");
//   // fprintf(fptr, "Salom");
//   // fprintf(fptr, "Salom");
//   // fclose(fptr);

//   FILE *fptr = fopen("data.txt", "w");

//   if (fptr == NULL)
//   {
//     printf("Xato");
//     return 1;
//   }
//   fputs("Bu fputs", fptr);
//   fputc('A', fptr);
// }


// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   int yosh;
//   fscanf(fptr, "%d", &yosh);
//   printf("%d", yosh);
// }

// int main()
// {
//   FILE *fptr = fopen("data.txt", "r");
//   char matn[100];
//   // fgets(matn, 100, fptr);
//   // fscanf(fptr, "%s", matn);
//   // printf("%s", matn);
//   char ch;
//   ch = fgetc(fptr);
//   printf("%c", ch);
// }


int main()
{
  FILE *fptr;

  fptr = fopen("info.txt", "w");
  if (fptr == NULL)
  {
    printf("Fayl ochilmadi");
    return 1;
  }

  fprintf(fptr, "Ism: Javohir\nYosh: 20\n");
  fclose(fptr);

  fptr = fopen("info.txt", "r");
  char ch;
  while ((ch = fgetc(fptr)) != EOF)
  {
    putchar(ch);
  }
  fclose(fptr);
}
