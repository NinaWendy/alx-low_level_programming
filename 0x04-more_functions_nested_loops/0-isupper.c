#include "main.h"

/**
 *_isupper - checks if a  character is uppercase or not
 *@character: character to be tested
 *Return: 1 whether it is, 0 otherwise
 */

int _isupper(int character)
{
  if ((character >= 'A') && (character <= 'Z'))
    {
      return (1);
    }

  return (0);
}
