#include <stdio.h>
#include <unistd.h>

void ft_print_numbers  (void)
{
  int i = 0 ;
  char n='0';
  while ( i < 10 )
    {
      write(1, &n, 1);
      i++;
      n++;
    }
}

int main ()
{
  ft_print_numbers();
  return 0;
}
