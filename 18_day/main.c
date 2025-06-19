#include <stdio.h>
#include <string.h>

// union Data
// {
//   int i;
//   float f;
// };
// int main()
// {
//   union Data d;
//   d.i = 10;
//   d.f = 2.4;
//   printf("%.1f", d.f);

// }

// enum Day {MON = 1, TUE, WED};

// int main()
// {
//   enum Day today = WED;
//   if (today == WED)
//   {
//     printf("Today is %d", WED);
//   }
// }

// #define function void
// typedef int integer;
// #define print printf

// function salom()
// {
//   print("Salom");
// }

// int main()
// {
//   salom();
// }

// union MaishiyQurilma
// {
//   int muzlatgich;
//   float konditsioner;
//   char televizor;
// };

// int main()
// {
//   union MaishiyQurilma qurilma;

//   qurilma.muzlatgich = 1;
//   printf("muzlatgich: %d", qurilma.muzlatgich);

//   qurilma.televizor = '+';
//   printf("televizor: %c", qurilma.televizor);

//   qurilma.konditsioner = 2.34;
//   printf("konditsioner: %.f", qurilma.konditsioner);

// }

// enum HaftaKunlari
// {
//   Dushanba = 1,
//   Seshanba,
//   Chorshanba,
//   Payshanba,
//   Juma,
//   Shanba,
//   Yakshanba,
// };

// int main()
// {
//   enum HaftaKunlari bugun = Juma;

//   if (bugun == Juma)
//   {
//     printf("Bugun Juma");
//   }

//   printf("Bugun kun raqamda %d", bugun);
// }

// typedef int son;

// int main()
// {
//   son yosh = 25;
//   printf("Yosh %d", yosh);
// }

// typedef struct
// {
//   int x;
//   int y;
// } Nuqta;

// int main()
// {
//   Nuqta A = {10, 15};
//   printf("Nuqta (%d, %d)", A.x, A.y);
// }

// union SensorData
// {
//   float harorat;
//   int bosim;
//   int yoruglik;
// };

// enum SensorType
// {
//   HARORAT,
//   BOSIM,
//   YORUGLIK
// };

// void sensoroqish(union SensorData data, enum SensorType type)
// {
//   switch (type)
//   {
//   case HARORAT:
//     printf("Harorat: %.2f grade Celcius", data.harorat);
//     break;
//   case BOSIM:
//     printf("Bosim: %d Pascal", data.bosim);
//     break;
//   case YORUGLIK:
//     printf("Yorug'lik: %d XL", data.yoruglik);
//   }
// }

// int main()
// {
//   union SensorData data;

//   data.bosim = 2;
//   sensoroqish(data, BOSIM);

//   data.harorat = 4.5;
//   sensoroqish(data, HARORAT);

//   data.yoruglik = 6;
//   sensoroqish(data, YORUGLIK);

// }

// enum HOLAT
// {
//   YANGI,
//   JARAYONDA,
//   TUGALLANGAN,
// };

// void holatniChiqar(int holat)
// {
//   switch(holat)
//   {
//     case YANGI:
//       printf("Topshiriq: yangi");
//       break;
//     case JARAYONDA:
//       printf("Topshiriq: jarayonda");
//       break;
//     case TUGALLANGAN:
//       printf("Topshiriq: tugallangan");
//       break;
//   }
// }

// int main()
// {
//   enum HOLAT task1 = YANGI;
//   holatniChiqar(task1);

//   task1 = JARAYONDA;
//   holatniChiqar(task1);

//   task1 = TUGALLANGAN;
//   holatniChiqar(task1);

// }

// struct Nuqta
// {
//   int x;
//   int y;
// };

// struct Nuqta NuqtaQosh(struct Nuqta a, struct Nuqta b)
// {
//   struct Nuqta natija;
//   natija.x = a.x + b.x;
//   natija.y = a.y + b.y;

//   return natija;
// }

// int main()
// {
//   struct Nuqta A = {3, 5};
//   struct Nuqta B = {5, 6};

//   struct Nuqta C = NuqtaQosh(A, B);
//   printf("Natija: (%d, %d)", C.x, C.y);
// }

// typedef struct
// {
//   int x;
//   int y;
// } Nuqta;

// Nuqta NuqtaQosh(Nuqta a, Nuqta b)
// {
//   Nuqta natija;
//   natija.x = a.x + b.x;
//   natija.y = a.y + b.y;

//   return natija;
// }

// int main()
// {
//   Nuqta A = {5, 7};
//   Nuqta B = {6, 2};

//   Nuqta C = NuqtaQosh(A, B);
//   printf("Natija: C = (%d, %d)", C.x, C.y);
// }

typedef struct
{
  int rpm;
  float temperature;
  char errorCode[10];
} MotorData;

enum TizimStatus
{
  NORMAL,
  QIZIBKETDI,
  XATOLIK
};

union SensorUnion
{
  float temperature;
  int tebranish;
  int signal;
};

int main()
{
  MotorData motor;
  motor.rpm = 3200;
  motor.temperature = 85.5;
  // strcpy(motor.errorCode, "E01");

  enum TizimStatus holat;

  holat = (motor.temperature > 90.0) ? QIZIBKETDI : (strcmp(motor.errorCode, "E01") == 0) ? XATOLIK : NORMAL;
  
  union SensorUnion sensor;

  sensor.temperature = motor.temperature;

  printf("Motor aylanish tezligi (RPM): %d\n", motor.rpm);
  printf("Motor harorati: %.2f\n", sensor.temperature);
  printf("Xatolik kodi: %s\n", motor.errorCode);

  printf("Tizim holati: ");
  switch (holat)
  {
  case NORMAL:
    printf("Normal\n");
    break;
  case QIZIBKETDI:
    printf("Qizib ketdi!\n");
    break;
  case XATOLIK:
    printf("Xatolik mavjud!\n");
    break;
  default:
    printf("Noma'lum holat\n");
    break;
  }
}
