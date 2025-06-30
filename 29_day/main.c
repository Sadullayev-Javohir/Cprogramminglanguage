#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//   time_t hozir = time(NULL);

//   struct tm *vaqt = localtime(&hozir);

//   printf("%d, %d, %d", vaqt->tm_year + 1900, vaqt->tm_mon + 1, vaqt->tm_mday);
//   printf("%d:%d:%d", vaqt->tm_hour, vaqt->tm_min, vaqt->tm_sec);
// }

// int main()
// {
//   char c = 'a';
//   if (isalpha(c))
//   {
//     printf("'%c' harfdir", c);
//   }
//   else
//   {
//     printf("%c harf emas", c);
//   }
// }

// int main()
// {
//   char c = 'A';
//   char kichik = tolower(c);
//   printf("%c", kichik);
// }


// int main()
// {
//   int *p = (int *)malloc(sizeof(int) * 100);

//   p = NULL;
//   return 0;
// }


// int main()
// {
//   int *p = (int *)malloc(sizeof(int));
//   *p = 10;
//   free(p);
//   p = NULL;
//   printf("%d", p);
// }


// int main()
// {
//   int a = 5;
//   int b = 0;
//   int c = a / b;

//   printf("Natija: %d\n", c);
// }


// 🔁 2-misol: Matnni teskari qilish (manual)

// Matn:
// Foydalanuvchi kiritgan matnni teskari ko‘rinishda chiqaring (masalan, salom -> molas).


// int main()
// {
//   char matn[100];
//   printf("Matn kiriting: ");
//   fgets(matn, sizeof(matn), stdin);

//   int len = strlen(matn);

//   if (matn[len - 1] == '\n') matn[len - 1] = '\0';
//   len = strlen(matn);

//   for (int i = len; i >= 0; i--)
//   {
//     printf("%c", matn[i]);
//   }
// }


int main()
{
  char *matn = "level";

  int len = strlen(matn);
  int isPa = 1;
  for (int i = 0; i < len / 2; i++)
  {
    if (tolower(matn[i]) != tolower(matn[len - 1 - i]))
    {
      isPa = 0;
      break;
    }
  }
  if (isPa)
  {
    printf("palindrome");
  }
  else
  {
    printf("palindrome emas");
  }
}



// int main()
// {
//   char *matn = "who's there";
//   int soni = 0;

//   for (int i = 0; matn[i] != '\0'; i++)
//   {
//     if (isalpha(matn[i]))
//     {
//       soni++;
//     }
//   }

//   printf("%d", soni);
// }


int main()
{
  char *matn = "hello what's your name";
  int harfsoni[26] = {0};

  for (int i = 0; matn[i] != '\0'; i++)
  {
    if (isalpha(matn[i]))
    {
      char kichik = tolower(matn[i]);
      harfsoni[kichik - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    if (harfsoni[i] > 0)
    {
      printf("%c -  %d marta", i + 'a', harfsoni[i]);
    }
  }

}
