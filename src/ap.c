#include <stdio.h>
#include <stdlib.h> // For exit()
int main(int argc, char** argv) {
  FILE *fp1, *fp2;
  char c;
  // Open one file for reading
  fp1 = fopen(*(argv+1), "r");
  if (fp1 == NULL) {
        printf("%s file does not exist..", fname1);
        exit(0);
  }
  // Open another file for appending content
  fp2 = fopen(*(argv+2), "a");
  if (fp2 == NULL) {
        printf("%s file does not exist...", fname2);
        exit(0);
  }
  // Read content from file
  c = fgetc(fp1);
  while (c != EOF) {
        fputc(c,fp2);
        c = fgetc(fp1);
  }
  fclose(fp1); fclose(fp2);
  return 0;
}
