// function definition
int add(int x, int y)
{
	int output;
	output = x + y;
	return output;
}

int subtract(int x, int y)
{
	int output;
	output = x - y;
	return output;
}

int multiply(int x, int y)
{
	int output;
	output = x * y;
	return output;
}

int divide(int x, int y)
{
	int output;
	output = x / y;
	return output;
}

int factorial(int x)
{
	int output = 1;
	for (int i = 1; i <= x; i++) {
		output = output * i;
	}
	return output;
}