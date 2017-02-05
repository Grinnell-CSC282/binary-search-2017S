/**
 * test.c
 *   A more comprehensive set of checks.
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
  int tests = 0;        // A count of tests we've run
  int errors = 0;       // A count of errors in the code
  int vals[33];         // Values to search
  int i;                // Counter variable
  int size;             // Size of array we are searching

  // Initialize the array with even numbers
  for (i = 0; i <= 32; i++)
    {
      vals[i] = i*2;
    } // for

  // For each size of array
  for (size = 0; size <= 32; size++)
    {
      // For each position in the array
      for (i = 0; i < size; i++)
        {
          tests += 2;
          // Check for a value that's at that position
          if (search (i*2, vals, size) != i)
            {
              fprintf (stderr, 
                       "Failed to find %d at pos %d in array of size %d.\n",
                       i*2, i, size);
              ++errors;
            } // if
          // Check for the value that comes after that position but
          // before the next position
          if (search (i*2 + 1, vals, size) != -1) 
            {
              fprintf (stderr,
                       "Incorrect result for %d in array of size %d.\n",
                       i*2 + 1, size);
              ++errors;
            } // if
        } // for i
      // Before the front of the array
      ++tests;
      if (search (-1, vals, size) != -1) 
        {
          fprintf (stderr,
                   "Incorrect result for -1 in array of size %d.\n",
                   size);
        } // if
    } // for size

  // Report on total number of errors.
  fprintf (stderr, "%d tests, %d errors\n", tests, errors);
  if (errors > 0)
    {
      fprintf (stderr, "I believe that Yahoo is still hiring.\n");
    } //

  // We're done
  return errors;
} // main
