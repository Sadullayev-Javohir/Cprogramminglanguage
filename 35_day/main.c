#include <stdio.h>

// int main()
// {
//   int a = 3;
//   int b = 5;

//   printf("a & b %d\n", a & b);
//   printf("a | b = %d\n", a | b);
//   printf("a ^ b = %d\n", a ^ b);
//   printf("a ~ b = %d\n", ~a);
//   printf("a << 1 = %d\n", a << 1);
//   printf("a >> 1 = %d\n", a >> 1);
// }

// #include <stdio.h>

// struct Flags
// {
//   unsigned int isOn : 1;
//   unsigned int hasData: 1;
//   unsigned int error: 1;
// };

// int main()
// {
//   struct Flags f = {1, 0, 1};
//   printf("isOn: %u\n", f.isOn);
//   printf("hasData: %u\n", f.hasData);
//   printf("error: %u\n", f.error);
//   return 0;
// }

// int main()
// {
//   int x = 5;
//   int n = 3;

//   x = x | (1 << n);

//   printf("%d",1 << 3);
// }

// struct FLAGS
// {
//   unsigned int isOn: 1;
//   unsigned int error: 1;
//   unsigned int mode: 2;
// };

// int main()
// {
//   struct FLAGS device = {1, 0, 2};
//   printf("isOn = %d\n", device.isOn);
//   printf("error = %d\n", device.error);
//   printf("mode = %d\n", device.mode);
// }

// int main()
// {
//   // printf("%d", 1 << 7);
//   int ruxsat = 0;
//   // bitni yoqish
//   ruxsat |= (1 << 0);
//   ruxsat |= (1 << 2);

//   printf("Ruxsat kodi: %d\n", ruxsat);

//   if (ruxsat & (1 << 0))
//   {
//     printf("O'qish ruxsati bor");
//   }
//   if (ruxsat & (1 << 1))
//   {
//     printf("Yozish ruxsati bor.");
//   }
//   else
//   {
//     printf("Yozish ruxati yo'q");
//   }
// }

// #include <stdio.h>

// int main()
// {
//   int x = 14; // 00001110 (2-likda)
//   int n = 3;  // 3-bitni 0 ga o'rnatamiz

//   // bit ni o'chirish
//   x = x & ~(1 << n);

//   printf("Natija : %d\n", x);
// }

// int main()
// {
//   int x = 10;
//   int n = 1;
//   // almashtirish
//   x = x ^ (1 << n);

//   // printf("Natija: %d\n", x);
//   if (x & (1 << n))
//   {
//     printf("%d-bit ON\n", n);
//   }
//   else
//   {
//     printf("%d-bit OFF\n", n);
//   }
// }

void menu()
{
  printf("\n--- Bit Operatsiyalari Menyusi ---\n");
  printf("1. Bitni yoqish (1 ga o'rnatish)\n");
  printf("2. Bitni o'chirish (0 ga o'rnatish)\n");
  printf("3. Bitni tekshirish\n");
  printf("4. Ruxsatlarni ko'rish\n");
  printf("0. Chiqish\n");
  printf("----------------------------------\n");
}

int main()
{
  int ruxsat = 0;
  int tanlov, bit;

  do
  {
    menu();
    printf("Tanlang: ");
    scanf("%d", &tanlov);

    switch (tanlov)
    {
    case 1:
      printf("Qaysi bitni yoqmoqchisiz: (0-31)");
      scanf("%d", &bit);
      ruxsat = ruxsat | (1 << bit);
      printf("Bit %d yoqildi.\n", bit);
      break;
    case 2:
      printf("Qaysi bitni o'chirmoqchisiz: (0-31)");
      scanf("%d", &bit);
      ruxsat = ruxsat & ~(1 << bit);
      printf("Bit %d o'chirildi\n", bit);
      break;
    case 3:
      printf("Qaysi bitni tekshirmoqchisiz: (0-31)");
      scanf("%d", &bit);

      if (ruxsat & (1 << bit))
      {
        printf("Bit %d: Yoniq (1)\n", bit);
      }
      else
      {
        printf("Bit %d: O'chiq (0)\n", bit);
      }
      break;
      case 4:
        printf("Ruxsat kodi (decimal) %d\n", ruxsat);
        printf("Ruxsat kodi (binary): ");
        for (int i = 31; i >= 0; i--)
        {
          printf("%d", (ruxsat >> i) & 1);
          if (i % 4 == 0) printf(" ");
        }
        printf("\n");
        break;
      case 0:
        printf("Dastur tugadi");
        break;
      default:
        printf("Noto'g'ri tanlov");
    }
  } while (tanlov != 0);
  return 0;

}
