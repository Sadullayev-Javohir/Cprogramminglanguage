#include <stdio.h>
#include <string.h>

// ✅ 1-misol: Satrni ekranga chiqarish

// 📝 Shart:
// Foydalanuvchining ismini satr sifatida e'lon qiling va uni ekranga chiqaring.

// #include <stdio.h>

// int main()
// {
//   char name[] = "Javohir";
//   printf("Foydalanuvchi ismi: %s", name);
// }


// ✅ 2-misol: Satr uzunligini aniqlash

// 📝 Shart:
// Berilgan satrning necha belgidan iborat ekanini aniqlang (bo‘sh joylar ham hisobga olinadi).


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char ism[] = "Hey leave me alone";

//   int uzunlik = sizeof(ism) / sizeof(ism[0]);
//   int uzunlik2 = strlen(ism);

//   printf("matn uzunligi: %d", uzunlik);
//   printf("matn uzunligi: %d", uzunlik2);

// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char a[30] = "strong ";
//   char b[] = "sturdy";

//   strcat(a, b);
//   printf("%s", a);
// }

// ✅ 4-misol: Satrlarni solishtirish

// 📝 Shart:
// Ikkita satr bir-biriga tengmi yoki yo‘q, shuni tekshirib chiqaring.



// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char a[] = "qwerty";
//   char b[] = "qwertyu";

//   if (strcmp(a, b) == 0)
//   {
//     printf("Teng");
//   }
//   else
//   {
//     printf("Teng emas");
//   }
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char ism[50];
//   char familya[50];

//   printf("Ismingizni kiriting: ");
//   scanf("%s", ism);

//   printf("Familyangizni kiriting: ");
//   scanf("%s", familya);

//   char info[100];
//   strcat(info, ism);
//   strcat(info, " ");
//   strcat(info, familya);
//   printf("Sizning ma'lumotlaringiz: %s", info);



// 🔍 1. Misol – strchr funksiyasi

// 📝 Shart:
// Foydalanuvchi kiritgan matnda birinchi uchragan a harfi bor-yo‘qligini tekshiring va topilgan joydan boshlab matnni chiqaring.
// int main()
// {
//   char *matn = "Hey leave me alone";

//   char *p = strchr(matn, 'a');
//   if (p != NULL)
//   {
//     printf("Topildi: %s", p);
//   }
// }


// 🔍 2. Misol – strchr bilan oxirgi belgi tekshiruvi

// 📝 Shart:
// Berilgan satr oxiri nuqta (.) bilan tugaydimi, tekshirib chiqaring.



// int main()
// {
//   char str[100] = "Javohir.a\n";


//   int len = strlen(str);

//   if(strchr(str, '.') == &str[len - 2])
//   {
//     printf("Nuqta bor");
//   }
//   else
//   {
//     printf("Nuqta yo'q");
//   }

// }



// 🔍 3. Misol – strstr funksiyasi

// 📝 Shart:
// Foydalanuvchi kiritgan matnda "kitob" so‘zi mavjudmi yoki yo‘qligini aniqlang.

// int main()
// {
//   char matn[200] = "Bu kitob 1984-yilda yozilgan";
//   if(strstr(matn, "kitob") != NULL)
//   {
//     printf("\"kitob\" so'zi mavjud");
//   }
//   else
//   {
//     printf("\"kitob\" so'zi mavjud emas");
//   }

// }


// 🔍4. Misol – strstr bilan kichik satrni ajratish

// 📝 Shart:
// Satr ichidan "@" belgisi mavjud bo‘lsa, o‘sha belgidan boshlab qolgan qismni (email domenga o‘xshash) ajratib ko‘rsating.


int main()
{
  char manzil[] = "user@example.com";

  char *domain = strstr(manzil, "@");

  if (domain != NULL)
  {
    printf("%s", domain);
  }
  else
  {
    printf("Topilmadi @ belgisi");
  }
}
