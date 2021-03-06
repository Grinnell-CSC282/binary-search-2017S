/**
 * USERID.c
 *   Binary search on arrays of integers, implemented by YOUR NAME.
 *
 * <insert appropriate FOSS license>
 */

// +---------+-------------------------------------------------------
// | Headers |
// +---------+

#include "search.h"
#include <stdio.h>

// +--------------------+--------------------------------------------
// | Exported Functions |
// +--------------------+

int
search (int val, int *vals, int n)
{
  int hlf = n/2;
  if (vals[hlf] == val)
  	return hlf;
  else if (vals[hlf] < val)
  	  search (val, vals, hlf);
  else if (vals[hlf] > val)
  	  search (val, vals + hlf, hlf);
  return -1;    // STUB
} // search

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
