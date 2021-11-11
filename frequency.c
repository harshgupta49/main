#include <stdio.h>

int
main ()
{
  int num, r, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i =
    0, j = 0;
  printf ("Enter the number :");
  scanf ("%d", &num);
  while (num != 0)
    {
      r = num % 10;
      switch (r)
	{
	case 0:
	  a++;
	  break;
	case 1:
	  b++;
	  break;
	case 2:
	  c++;
	  break;
	case 3:
	  d++;
	  break;
	case 4:
	  e++;
	  break;
	case 5:
	  f++;
	  break;
	case 6:
	  g++;
	  break;
	case 7:
	  h++;
	  break;
	case 8:
	  i++;
	  break;
	case 9:
	  j++;
	  break;
	}
      num = num / 10;
    }
  printf ("Number of 0 = %d\n", a);
  printf ("Number of 1 = %d\n", b);
  printf ("Number of 2 = %d\n", c);
  printf ("Number of 3 = %d\n", d);
  printf ("Number of 4 = %d\n", e);
  printf ("Number of 5 = %d\n", f);
  printf ("Number of 6 = %d\n", g);
  printf ("Number of 7 = %d\n", h);
  printf ("Number of 8 = %d\n", i);
  printf ("Number of 9 = %d\n", j);

  return 0;
}
