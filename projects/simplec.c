// one function per token
// one function for statement
// save lexemes
// emit LLVM IR, filling in the template
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 1
#define PRINT 2

struct token {
  char *lexeme;
  int tokenid;
};

// true if recognized, false otherwise
boolean printT()
{
  char c = fgetc(file);
  char buffer = (char*)malloc(50*sizeof(char));
  int compare;

  while (isalpha(c))
  {
    buffer = strcat(buffer, c);
    c = fgetc(file);
  }

  free(c);
  compare = strcmp(buffer, "print");

  if (compare == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

char* operatorT()
{
  char c = fgetc(file);

  if (c == '+')
  {
    return "add nsw";
  }
  else if (c == '-')
  {
    return "sub nsw";
  }
  else if (c == '*')
  {
    return "mul nsw";
  }
  else if (c == '/')
  {
    return "sdiv";
  }
  else if (c == '%')
  {
    return "srem";
  }
  else
    return NULL;
}

void semicolonT()
{
  char c = fgetc(file);
  while (c != EOF)
  {
    if (c == ';')
    {

    }
  }
}

// check for EOF
if ()
{

}

// lexeme string or NULL
char* numberT()
{
  char* c = (char*)malloc(10*sizeof(char));
  c = fgetc(file);
  char test;
  if (isdigit(c))
  {
    test = fgetc(file);
    while (isdigit(test))
    {
      c = strcat(c, test);
    }
    return c;
  }
  else
  {
    return NULL;
  }
}

// function for each tokens

// whitespace


statement(int x) {
  // at the beginning of the file
  printT();
  // check if recognized
  OP1 = numberT();
  c = fgetc(file);
  if (isdigit(c)) {
    oplexeme = operatorT();
    // convert from simplec operator to LLVM operator, e.g., '+' "add nsw"
    OP2 = numberT();
    semicolonT();
    printf("%t%d = %s i32 %s, %s\n", x, oplexeme, OP1, OP2);
    printf("call void @print_integer(i32 %t%d)\n", x);
  }
  if (c == ';')
  {
    printf("\n");
  }
}

// takes a file, returns an array of tokens
int* lex(file *in)
{
  int array[]
}

int main()
{

  return 0;
}
