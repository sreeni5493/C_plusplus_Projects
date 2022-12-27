int Add(int* a, int* b) {
	int c;
	c = *a + *b;
	return c;
}
void AddVal(int* a, int* b, int* result) {
	*result = *a + *b;
}
void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void Factorial(int* a, int* result)
{
	*result = 1;
	for (int i = 1; i <= *a; i++)
	{
		*result = *result * i;
	}
}