#include <stdio.h>
#include <string.h>

int main()
{
  // char *color[] = {"red", "blue", "yellow", "green"};

  // for (int i = 0; i < 4; i++)
  // {
  //   printf("%d %s\n", i + 1, *(color + i));
  // }

  // char names[3][10] =
  // {
  //   "Ali",
  //   "Vali",
  //   "Guli"
  // };

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("Ism %d: %s\n", i + 1, names[i]);
  // }

  // char *s = "Hello";
  // while(*s != '\0')
  // {
  //   printf("%c", *s);
  //   *s++;
  // }
  // char *str = "Pointer";
  // printf("%c\n", *(str + 3));
  // char *str[] = "Hello";
  // str[0] = 'h';
  // printf("%s\n", str);

  // char *words[] = {"one", "two", "three"};
  // printf("%c\n", words[1][2]);
  // char str[5] = "Hi";
  // printf("%s\n", str);

  // char *s = "World";
  // while (*s)
  // {
  //   printf("%c-", *s);
  //   s++;
  // }

  // char s[] = "coding";
  // char *p = s;
  // *(p + 1) = 'a';
  // printf("%s\n", s);

  // char arr[][5] = {"ABC", "DEF", "GHI"};
  // printf("%s\n", *(arr + 1));
  // return 0;

  //   ✅ 1-MISOL: Satr uzunligini hisoblash

  // 🔹 Sharti:
  // Foydalanuvchi tomonidan berilgan satr uzunligini ko‘rsatkich (pointer) yordamida hisoblang.

  // char *matn = "Salom";
  // char *p = matn;
  // int len = 0;
  // while (*matn != '\0')
  // {
  //   len++;
  //   matn++;
  // }

  // printf("%s ning uzunligi: %d", p, len);

  // char str[] = "Salom";
  // int len = (sizeof(str) / sizeof(str[0]));

  // for (int i = len; i >= 0; i--)
  // {
  //   printf("%c", *(str + i));
  // }

  //   ✅ 3-MISOL: Ko‘rsatkichlar massivi orqali satrlar chiqarish

  // 🔹 Sharti:
  // Ko‘rsatkichlar massivida 4 ta meva nomi berilgan. Ularni ekranga chiqaring.

  // char *arr[] = {"anor", "olma", "nok", "banan"};

  // for (int i = 0; i < 4; i++)
  // {
  //   printf("%s\n", arr[i]);
  // }

  //   ✅ 4-MISOL: Kichik harflarni katta harfga o‘zgartirish

  // 🔹 Sharti:
  // Berilgan satrdagi barcha kichik harflarni katta harfga o‘zgartiring.

  // char str[] = "World";
  // char *p = str;

  // for (int i = 0; i < strlen(str); i++)
  // {
  //   if (*p >= 'a' && *p <= 'z')
  //   {
  //     *p -= 32;
  //   }
  //   *p++;
  // }

  // printf("katta harf: %s", str);

  //   ✅ 5-MISOL: 2D Satrlar massivini chiqarish

  // 🔹 Sharti:
  // Shahar nomlari berilgan satrlar massivini ekranga chiqaring.

  // char cities[3][10] = {"Tashkent", "Dushanbe", "Anqara"};

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("%d => %s\n", i + 1, cities[i]);
  // }

  //   ✅ 6-MISOL: Ma’lum bir harfni sanash

  // 🔹 Sharti:
  // Berilgan satrda ‘A’ yoki ‘a’ harflari necha marta ishtirok etganini hisoblang.

  // char *matn = "My favourite type of book is adventure";
  // int count = 0;
  // for (int i = 0; i < strlen(matn); i++)
  // {
  //   if (*(matn + i) == 'a' || *(matn + i) == 'A')
  //   {
  //     count++;
  //   }
  // }

  // printf("%s ning ichida a = %d ta bor", matn, count);
}
