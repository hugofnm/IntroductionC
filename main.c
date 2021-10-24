#include <unistd.h>

void my_putchar(char c)
{
  write(1,&c,1);
}

void my_print_alpha()
{
  char lettre='a';
  while(lettre!='z'+1)
    {
      my_putchar(lettre);
      lettre=lettre+1;
    }
}

void is_neg(int nb)
{
  if (nb<0)
    {
      my_putchar('N');
    }
  else (nb>0);
  {
    my_putchar('P');
  }
}

void my_putstr(char *str)
{
  write(1,&*str,1);
}

int main()
{
  my_putchar('a');
  my_print_alpha();
  is_neg(40);
  my_putstr("Hello World\0");
  return(0);
}
