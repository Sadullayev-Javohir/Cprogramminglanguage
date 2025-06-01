// #include <stdio.h>

// int main()
// {
//   float son1, son2, result;
//   char operator;

//   printf("Birinchi sonni kiriting: ");
//   scanf("%f", &son1);

//   printf("Operatorni kiriting (*,/,-,+): ");
//   scanf(" %c", &operator);

//   printf("Ikkinchi sonni kiriting: ");
//   scanf("%f", &son2);

//   switch(operator)
//   {
//     case '-':
//       result = son1 - son2;
//       printf("Natija: %.2f", result);
//       break;
//     case '+':
//       result = son1 + son2;
//       printf("Natija: %.2f", result);
//       break;
//     case '*':
//       result = son1 * son2;
//       printf("Natija: %.2f", result);
//       break;
//     case '/':
//       if (son2 != 0)
//         result = son1 / son2;
//       else {
//         printf("0 ga bo'lib bo'lmaydi");
//         return 1;
//       }
//       printf("Natija: %.2f", result);
//       break;
//     default:
//       printf("Noto'g'ri amal kiritildi");
//   }

//   return 0;
// }



// #include <stdio.h>

// int main() {
//   int kun;
//   printf("Hafani raqam orqali kiriting: (1-7) ");
//   scanf("%d", &kun);

//   switch(kun) {
//     case 1:
//       printf("Dushanba");
//       break;
//     case 2:
//       printf("Seshanba");
//       break;
//     case 3:
//       printf("Chorshanba");
//       break;
//     case 4:
//       printf("Payshanba");
//       break;
//     case 5:
//       printf("Juma");
//       break;
//     case 6:
//       printf("Shanba");
//       break;
//     case 7:
//       printf("Yakshanba");
//       break;
//     default:
//       printf("Xatolik");
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int i = 1, n = 5;
//   long long factorial = 1;

//   while (i <= n)
//   {
//     factorial *= i;
//     i++;
//   }

//   printf("%d! = %lld\n", n, factorial);

//   return 0;
// }


// #include <stdio.h>

// int main() {
//   int son = 1234, sum = 0;

//   while (son != 0) {
//     sum += son % 10;
//     son /= 10;
//   }

//   printf("Yig'indi: %d", sum);
//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int son = 4, i = 2, tub = 1;

//   if (son <= 0) tub = 0;
//   else
//   {
//     while (i <= son / 2) {
//       if (son % i == 0) {
//         tub = 0;
//         break;
//       }
//       i++;
//     }
//   }

//   tub ? printf("Tub son: %d", son) : printf("Tub son emas: %d", son);

//   return 0;
// }


// #include <stdio.h>

// int main()
// {
//   int son = 6, a = 0, b = 1, next, count = 0;

//   while (count < son)
//   {
//     printf("%d ", a);
//     next = a + b;
//     a = b;
//     b = next;
//     count++;
//   }
// }



// #include <stdio.h>

// int main()
// {
//   int son = 5, daraja = 4, i = 0, natija = 1;

//   while (i < daraja)
//   {
//     natija *= son;
//     i++;
//   }
//   printf("%d ** %d = %d", son, daraja, natija);
// }
