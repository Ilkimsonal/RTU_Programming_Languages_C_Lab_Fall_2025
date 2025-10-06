/*
 * week4_2_struct_student.c
 * Author: [Ilkim Sonal]
 * Student ID: [211ADB102]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Defines a 'Student' struct with name, id, and grade.
 *   Creates two student instances and prints their data.
 */

#include <stdio.h>
#include <string.h>

// ✅ Define struct Student with name, id, and grade
struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  // ✅ Declare two Student variables
  struct Student s1, s2;

  // ✅ Assign values to the first student (manual example)
  strcpy(s1.name, "Ilkim sonal");  // copy string into char array
  s1.id = 1001;
  s1.grade = 9.1f;

  // ✅ Assign values to the second student
  strcpy(s2.name, "ILKIM sONAL");
  s2.id = 1002;
  s2.grade = 8.7f;

  // ✅ Print struct contents
  printf("Student 1: %s, ID: %d, Grade: %.1f\n", s1.name, s1.id, s1.grade);
  printf("Student 2: %s, ID: %d, Grade: %.1f\n", s2.name, s2.id, s2.grade);

  return 0;
}