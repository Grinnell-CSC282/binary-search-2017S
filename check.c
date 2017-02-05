/**
 * check.c
 *   A few quick checks for an algorithm that searches in an 
 *   ordered array.
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
  int i;                // Counter variable for loops

  // Check every position in the array
  for (i = 0; i < 7; i++)
    {
      if (i != search(vals[i], vals, 7))
        {
          fprintf(stderr, "Search for %d  failed!\n", vals[i]);
          ++errors;
        }
    } // for

  // Check for a few values not in the array
  if (-1 != search (10, vals, 7))
    {
      fprintf (stderr, "Search for 10 failed!\n");
      ++errors;
    }
  if (-1 != search(1000, vals, 7))
    {
      fprintf(stderr, "Search for 1000 failed!\n");
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
