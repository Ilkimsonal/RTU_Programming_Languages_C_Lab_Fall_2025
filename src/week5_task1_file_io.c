// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// Completed by [Your Name]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strlen() ve strcpy() için gerekli

int main(void) {
  FILE *fp;
  char filename[100];
  char line[256];
  int lineCount = 0;

  // BONUS: ask user for filename instead of using default "data.txt"
  printf("Enter filename to use (default: data.txt): ");
  if (fgets(filename, sizeof(filename), stdin) != NULL) {
    // remove newline if exists
    size_t len = strlen(filename);
    if (len > 0 && filename[len - 1] == '\n') filename[len - 1] = '\0';
  }

  // if user pressed Enter without typing, use default
  if (filename[0] == '\0') {
    strcpy(filename, "data.txt");
  }

  // 1. Open file for writing (mode = "w")
  fp = fopen(filename, "w");

  // 2. Check if file opened successfully
  if (fp == NULL) {
    perror("Error opening file for writing");
    return 1;
  }

  // 3. Write 2–3 lines of text to the file using fprintf()
  fprintf(fp, "Hello, this is line 1.\n");
  fprintf(fp, "This is line 2, written using fprintf.\n");
  fprintf(fp, "And this is line 3.\n");

  // 4. Close the file
  fclose(fp);

  printf("Data successfully written to '%s'.\n", filename);

  // 5. Open file again for reading (mode = "r")
  fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Error opening file for reading");
    return 1;
  }

  printf("\n--- File Contents ---\n");

  // 6. Use fgets() in a loop to read and print each line to the console
  while (fgets(line, sizeof(line), fp) != NULL) {
    printf("%s", line);
    lineCount++;
  }

  // 7. Close the file
  fclose(fp);

  printf("\n--- End of File ---\n");
  printf("Total lines read: %d\n", lineCount);

  return 0;
}