#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{

	int min;
	int hrs;
	char h_tens;
	char h_ones;
	char m_tens;
	char m_ones;

	for (hrs = 0; hrs < 24; hrs++)
	{
		h_tens = '0' + hrs / 10;
		h_ones = '0' + hrs % 10;

		for (min = 0; min < 60; min++)
		{
			_putchar(h_tens);
			_putchar(h_ones);
			_putchar(':');

			m_tens = '0' + min / 10;
			m_ones = '0' + min % 10;

			_putchar(m_tens);
			_putchar(m_ones);
			_putchar('\n');
		}
	}
}
