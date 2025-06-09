#include <stdio.h>
#include <string.h>

// Misol 1: 1 dan n gacha bo‘lgan sonlar yig‘indisi (funksiya bilan)

// int sum(int n)
// {
//   int a = 0;
//   for (int i = 1; i <= n; i++)
//   {
//     a += i;
//   }
//   return a;
// }

// int main()
// {
//   printf("%d", sum(10));
//   return 0;
// }

// Misol 2: Son faktorialini rekursiv hisoblash
// int faktorial(int n)
// {
//   if (n == 0) return 1;
//   else return n * faktorial(n - 1);
// }

// int main()
// {
//   printf("%d", faktorial(12));
//   return 0;
// }

// Kichik loyiha: Fibonacci sonlar ketma-ketligi

// Fibonacci ketma-ketligi: 0, 1, 1, 2, 3, 5, 8, ...

// void fibonacci(int n)
// {
//   int a = 0, b = 1, c;

//   for (int i = 2; i < n; i++)
//   {
//     c = a + b;
//     printf("%d ", c);
//     a = b;
//     b = c;
//   }
// }

// int main()
// {
//   fibonacci(12);
// }

int main()
{
  char s[] = "12345";
  char *res = strstr(s, "34");
  printf("%s", res);
}
