// #include <stdio.h>
// #include <string.h>

// union Data
// {
//   int i;
//   float f;
//   char str[20];
//   struct {
//     char name[10];
//     int age;
//   } person;
// };

// int main()
// {
//   union Data data;
//   strcpy(data.str, "Hello");
//   data.i = 10;
//   data.f = 220.5;

//   printf("%s", data.str);
//   printf("Union hajmi: %lu bayt\n", sizeof(union Data));
// }

// typedef union
// {
//   int x;
//   float y;
// } MyUnion;

// int main()
// {
//   MyUnion u;
//   u.x = 100;
//   u.y = 24.4;
//   printf("%f", u.y);
// }

// union U4
// {
//   char buf[8];
//   int x;
// } u;
// int main()
// {
//   strcpy(u.buf, "ABCDEFG");
// }

// union U6
// {
//   short a;
//   short b;
// }u =
// {
//   .a = 4,
//   .b = 7,
// };

// int main()
// {
//   printf("%d %d", u.a, u.b);
// }

// union U7
// {
//   unsigned char byte;
//   struct
//   {
//     unsigned flag : 1;
//     unsigned val : 7;
//   } bits;
// } u;

// int main()
// {
//   u.byte = 0x85;
// }

// #include <stdio.h>

// enum Days
// {
//   Monday,
//   Tuesday,
//   Wednesday,
//   Thursday,
//   Friday,
//   Saturday,
//   Sunday,
// };

// int main()
// {
//   enum Days today = Friday;
//   printf("Today is %d\n", today);
// }

// enum TrafficLight
// {
//   RED,
//   YELLOW,
//   GREEN
// };
// enum TrafficLight signal = RED;

// int main()
// {
//   if (signal == RED)
//   {
//     printf("Stop");
//   }
// }

// enum Color
// {
//   RED = 10,
//   GREEN,
//   BLUE
// };

// typedef enum
// {
//   LOW = 20,
//   MEDIUM,
//   HIGH
// } Priority;

// int main()
// {
//   enum Color c = GREEN;
//   Priority p = HIGH;

//   printf("c = %d, p = %d\n", c, p);
// }

// typedef int intNum;
// typedef float floatNum;
// typedef char* string;

// int main()
// {
//   intNum num1 = 2;
//   floatNum float1 = 5.35;
//   string matn = "That's amazing";

//   printf("intNum: %d\n", num1);
//   printf("floatNum: %.2f\n", float1);
//   printf("matn: %s\n", matn);
// }

// struct Point
// {
//   int x;
//   int y;
// };

// struct Point p1;

// typedef struct
// {
//   int x;
//   int y;
// } Point;

// Point p1;

// typedef int* IntPtr;

// int main()
// {
//   IntPtr a, b;
//   int x = 10;

//   a = &x;
//   b = &x;
//   printf("%d", *a);
// }
