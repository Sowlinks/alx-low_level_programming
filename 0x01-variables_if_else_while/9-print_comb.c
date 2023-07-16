#include <stdio.h>

/**
 * main - to be done later
 * Descriptipn: file to be edited later
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
        int first, second;

        for (first = 0; first  < 10; first++)
        {
       
                for (second = first + 1; second < 10; second ++)
                {
                    putchar('0' + first);

                    putchar('0' + second);

		    if (first < 8 || second < 9)

		    {
                    	putchar (',');

                    	putchar (' ');
		    }

                }

        }
 
        putchar('\n');

        return (0);
}
