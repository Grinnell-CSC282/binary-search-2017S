/**
 * check.c
 *   A few quick checks for a search in ordered array algorithm.
 *
 * <insert appropriate FOSS license>
 */

// +---------+-------------------------------------------------------
// | Headers |
// +---------+

#include "search.h"
#include <stdio.h>

// +------+----------------------------------------------------------
// | Main |
// +------+

int
main (int argc, char *argv[])
{
  int errors = 0;       // A count of errors in the code
  int vals[] = { 3, 7, 8, 11, 12, 20, 21 };     // Values to search

  // Do some checks
  if (3 != search (11, vals, 7))
    {
      fprintf (stderr, "Search for 11 failed!\n");
      ++errors;
    }
  if (1 != search (7, vals, 7))
    {
      fprintf (stderr, "Search for 7 failed!\n");
      ++errors;
    }
  if (5 != search (20, vals, 7))
    {
      fprintf (stderr, "Search for 20 failed!\n");
      ++errors;
    }
  if (-1 != search(1000, vals, 7))
  {
    fprintf(stderr, "Search for 1000 failed!\n");
    ++errors;
  }
  for (int i = 0; i < 7; i++)
  {
      if (i != search(vals[i], vals, 7))
      {
        fprintf(stderr, "Search for %d  failed!\n", vals[i]);
        ++errors;
      }
  }

  if (6 != search (21, vals, 7))
    {
      fprintf (stderr, "Search for 21 failed!\n");
      ++errors;
    }
   if (0 != search (3, vals, 7))
    {
      fprintf (stderr, "Search for 3 failed!\n");
      ++errors;
    }
    if (-1 != search (10, vals, 7))
    {
      fprintf (stderr, "Search for 10 failed!\n");
      ++errors;
    }
  // Report on total number of errors.
  if (!errors)
    {
      fprintf (stderr, "No errors.\n");
    } // !errors
  else
    {
      fprintf (stderr, "You had %d errors.\n", errors);
    } // errors!

  // We're done
  return errors;
} // main
