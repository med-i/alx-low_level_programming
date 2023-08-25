int rand(void)
{
	static int numbers[] = {8, 8, 7, 9, 23, 74};
	static int idx = 0;

	return (numbers[idx++]);
}
