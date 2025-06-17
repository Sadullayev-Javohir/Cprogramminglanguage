#include <stdio.h>
#include <string.h>

// // struct Student
// // {
// //   char name[50];
// //   int age;
// //   float gpa;
// // };

// // int main()
// // {
// //   struct Student s1 = {"Ali", 29, 3.5};
// //   struct Student *ptr = &s1;

// //   strcpy(s1.name, "Vali");
// //   printf("%s", s1.name);
// //   printf("%d", ptr->age);
// //   printf("%.2f", s1.gpa);
// // }

// // struct Student
// // {
// //   char name[50];
// //   int age;
// //   float gpa;
// // };

// // void printStudent(struct Student s)
// // {
// //   printf("Ismi: %s\n", s.name);
// //   printf("Yoshi: %d\n", s.age);
// //   printf("GPA: %.2f\n", s.gpa);
// // }

// // int main()
// // {
// //   struct Student student1;
// //   strcpy(student1.name, "Javohir");
// //   student1.age = 21;
// //   student1.gpa = 3.65;

// //   printStudent(student1);
// // }

// // struct Student
// // {
// //   char name[50];
// //   int age;
// //   float gpa;
// // };

// // void printStudent(struct Student *s)
// // {
// //   printf("Ismi: %s", s->name);
// //   printf("Yoshi: %d", s->age);
// //   printf("GPA: %.2f", s->gpa);
// // }

// // int main()
// // {
// //   struct Student student1;
// //   strcpy(student1.name, "Javohir");
// //   student1.age = 25;
// //   student1.gpa = 4.5;

// //   printStudent(&student1);
// // }

// // struct Car
// // {
// //   char brand[50];
// //   int year;
// //   float price;
// // };

// // void showCar(struct Car c)
// // {
// //   printf("Brand: %s, Year: %d, %.2f mln", c.brand, c.year, c.price);
// // }

// // int main()
// // {
// //   struct Car car1;
// //   fgets(car1.brand, sizeof(car1.brand), stdin);
// //   car1.year = 2020;
// //   car1.price = 10000.50;

// //   showCar(car1);
// // }

// // typedef struct Student
// // {
// //   char name[50];
// //   int age;
// // } Student;

// // void printStudent(Student s)
// // {
// //   printf("Ismi: %s", s.name);
// //   printf("Yoshi: %d", s.age);

// // }
// // int main()
// // {
// //   struct Student students[3];

// //   strcpy(students[0].name, "Javohir");
// //   students[0].age = 20;

// //   strcpy(students[1].name, "Husan");
// //   students[1].age = 19;

// //   strcpy(students[2].name, "Temur");
// //   students[2].age = 21;

// //   printStudent(students[0]);
// //   printStudent(students[1]);
// //   printStudent(students[2]);
// // }

// // typedef struct Books
// // {
// //   char bookName[50];
// //   char bookAuthor[50];
// //   int datePrint;
// // }Books;

// // void printBook(Books book)
// // {
// //   printf("Kitob nomi: %s\n", book.bookName);
// //   printf("Kitob muallifi: %s\n", book.bookAuthor);
// //   printf("Kitob chop etilgan sanasi %d\n", book.datePrint);
// // }

// // int main()
// // {
// //   Books book1;
// //   strcpy(book1.bookName, "The C programming");
// //   strcpy(book1.bookAuthor, "Dennis Ritchie");
// //   book1.datePrint = 1973;

// //   printBook(book1);

// // }

// int main()
// {
//   // int a = 10;
//   // int *p;
//   // p = &a;

//   // printf("a ning qiymati: %d\n", a);
//   // printf("p ning ko'rsatgan qiymati: %d\n", *p);
//   // printf("a ning manzili: %p\n", &a);
//   // printf("p ning o'zi: %p\n", p);

//   // int *p;
//   // *p = 29;
//   // printf("%d", *p);

//   // int arr[3] = {34, 5, 75};
//   // int *p = arr;
//   // printf("%d ", *(p + 2));

// }

#include <stdio.h>

// void changeArray(int arr[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     arr[i] = arr[i] * 2;
//   }
// }

// int main()
// {
//   int numbers[3] = {1, 2, 3};

//   changeArray(numbers, 3);

//   for (int i = 0; i < 3; i++)
//   {
//     printf("%d ", numbers[i]);
//   }
// }

// struct User
// {
//   char username[50];
//   int isActive;
// };

// void deactivate(struct User *u)
// {
//   u->isActive = 0;
// }

// void active(struct User *u)
// {
//   u->isActive = 1;
// }

// int main()
// {
//   struct User u = {"Husan", 1};
//   deactivate(&u);
//   active(&u);
//   (u.isActive == 0) ? printf("Bloklangan") : printf("Faol");
// }

// void swap(int *a, int *b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main()
// {
//   int a = 5;
//   int b = 6;
//   swap(&a, &b);
//   printf("%d %d", a, b);
// }

// struct Student
// {
//   char name[50];
//   int age;
//   float gpa;
// };

// int main()
// {
//   struct Student students[3] =
//       {
//           {"Ali", 30, 3.5},
//           {"Javohir", 19, 4.5},
//           {"Husan", 23, 2.5}};

//   for (int i = 0; i < 3; i++)
//   {
//     printf("Ismi: %s, Yoshi: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
//   }
// }

// struct Address
// {
//   char city[20];
//   int zip;
// };

// struct Student
// {
//   char name[50];
//   int age;
//   struct Address address;
// };

// int main()
// {
//   struct Student s1 =
//   {"Temur", 18, {"Tashkent", 100100}};

//   printf("Ismi: %s ", s1.name);
//   printf("Yoshi: %d ", s1.age);
//   printf("Shahar: %s ", s1.address.city);
//   printf("Index kodi: %d ", s1.address.zip);
// }

// struct A
// {
//   int x;
//   float y;
// };

// int main()
// {
//   struct A *p = malloc(sizeof(struct A));
//   p->x = 5;
// }

// struct Student
// {
//   char name[50];
//   int age;
//   float grade;
// };

// int main()
// {
//   struct Student students[3];

//   strcpy(students[0].name, "Javohir");
//   students[0].age = 20;
//   students[0].grade = 5.2;

//   strcpy(students[1].name, "Husan");
//   students[1].age = 16;
//   students[1].grade = 4.5;

//   strcpy(students[2].name, "Temur");
//   students[2].age = 10;
//   students[2].grade = 4.7;
//   float sum = 0;
//   for (int i = 0; i < 3; i++)
//   {
//     sum += students[i].grade;

//     printf("Ismi: %s, Yoshi: %d, Baho: %.1f\n", students[i].name, students[i].age, students[i].grade);
//   }
//   float average = sum / 3;
//   printf("Umumiy o'rtacha baho: %.2f", average);
// }

