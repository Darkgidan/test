#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet  (void)
{
  int i=0;
  char c='a';
  while (i<26)
    {
      write(1, &c, 1);
      i++;
      c++;
    }
}

int main ()
{
  ft_print_alphabet();
  return 0;
}
