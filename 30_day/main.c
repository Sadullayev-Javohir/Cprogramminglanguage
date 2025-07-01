#include <stdio.h>
#include <string.h>

// int main()
// {
//   for (int i = 1; i <= 10; i++)
//   {
//     if (i != 5)
//     {
//       printf("%d", i);
//     }
//     else
//     {
//       printf("hey");
//     }
//   }
// }

// int main()
// {
//   int n, son;
//   printf("Nechta son kiritasiz? ");
//   scanf("%d", &n);

//   for (int i = 0; i < n; i++)
//   {
//     printf("%d-sonni kiriting: ", i + 1);
//     scanf("%d", &son);

//     if (son > 0 && son != 0)
//     {
//       printf("Bu musbat va nolga teng emas: %d\n", son);
//     }
//     else
//     {
//       printf("Bu nol yoki manfiy son\n");
//     }
//   }

//   return 0;
// }

// int main()
// {
//   char matn[] = "salom dunyo";

//   for (int i = 0; i < strlen(matn); i++)
//   {
//     if (matn[i] != 'o')
//     {
//       printf("%c", matn[i]);
//     }
//     else
//     {
//       printf("%c", '5');
//     }
//   }
// }

// int main()
// {
//   int sirlison = 6;
//   int kiritilgan;

//   printf("1 dan 10 gacha son toping.\n");

//   for(;;)
//   {
//     printf("Sonni kiriting: ");

//     scanf("%d", &kiritilgan);

//     if (kiritilgan != sirlison)
//     {
//       printf("Xato! Qayta urinib ko'ring.\n");
//     }
//     else
//     {
//       printf("To'g'ri topdingiz!\n");
//       break;
//     }
//   }
// }

// int main()
// {
//   int son[] = {5,7, 8, 9, 3, 5};
//   int len = sizeof(son) / sizeof(son[0]);
//   int flag = 0;

//   for (int i = 0; i < len; i++)
//   {
//     if (son[i] == 0)
//     {
//       flag = 1;
//       break;
//     }
//   }

//   if (flag != 0)
//   {
//     printf("0 mavjud");
//   }
//   else
//   {
//     printf("0 yo'q");
//   }
// }

// int main()
// {
//   char *a = "javohirsadullayev836@gmail.com";
//   int flag = 0;

//   for (int i = 0; i < strlen(a); i++)
//   {
//     if (a[i] == '@')
//     {
//       flag = 1;
//       break;
//     }
//   }

//   if (flag != 0)
//   {
//     printf("@ belgisi bor");
//   }
//   else
//   {
//     printf("@ yo'q");
//   }
// }


// int main()
// {
//   int nums[] = {1, -2, 3, 4, 5};
//   int len = sizeof(nums) / sizeof(nums[0]);
//   int flag = 0;

//   for (int i = 0; i < len; i++)
//   {
//     if (nums[i] > nums[i + 1])
//     {
//       flag = 1;
//       break;
//     }
//   }

//   if (flag != 0)
//   {
//     printf("Massiv o'suvchi emas");
//   }
//   else
//   {
//     printf("Massiv o'suvchi");
//   }
// }

// int main()
// {
//   char *matn = "dad";
//   int len = strlen(matn);
//   len = len / 2;
//   int flag = 0;

//   for (int i = 0; i < len; i++)
//   {
//     if (matn[i] != matn[len - i  - 1])
//     {
//       flag = 1;
//       break;
//     }
//   }
//   (flag) ? printf("palindrom emas") : printf("palindrom");
// }


// int main()
// {
//   char *matn = "I want to study abroad in the future and work in the international company";
//   int matnIchidamiRaqam = 0;
//   int sozlarSoni = 0;
//   int len = strlen(matn);

//   for (int i = 0; i < len; i++)
//   {
//     if (matn[i] != ' ')
//     {
//       if (matnIchidamiRaqam == 0)
//       {
//         sozlarSoni++;
//         matnIchidamiRaqam = 1;
//       }
//     }
//     else
//     {
//       matnIchidamiRaqam = 0;
//     }
//   }

//   printf("%d", sozlarSoni);
// }


int main()
{
  char gap[200] = "hey leave me alone";
  char soz[50];
  char enguzun[50];
  int max = 0, len = 0;

  for (int i = 0, j = 0; i <= strlen(gap); i++)
  {
    if (gap[i] != ' ' && gap[i] != '\0' && gap[i] != '\n')
    {
      soz[j++] = gap[i];
      len++;
    }
    else
    {
      soz[j] = '\0';
      if (len > max)
      {
        max = len;
        strcpy(enguzun, soz);
      }
      len = 0;
      j = 0;
    }
  }

  printf("Eng uzun: %d", max);
  printf("Eng uzun so'z: %s", enguzun);
}
