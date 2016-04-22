



class Rectangle
{
private:
	int a, b;
public:
	int Perimetr(int _a, int _b)
	{
		a = _a;
		b = _b;
		if (a > 20 || a < 0)
		{
			a = 1;
		}
		if (b > 20 || b < 0)
		{
			b = 1;
		}
		return a + b;
	}
	int Square(int _a, int _b)
	{
		
		a = _a;
		b = _b;
		if (a > 20 || a < 0)
		{
			a = 1;
		}
		if (b > 20 || b < 0)
		{
			b = 1;
		}
		return a * b;
	}
	void Squared(int _a, int _b)
	{
		a = _a;
		b = _b;
		if (a > 20 || a < 0)
		{
			a = 1;
		}
		if (b > 20 || b < 0)
		{
			b = 1;
		}
		if (a == b)
		{
			cout << "It is a Square!\n";
		}
		else cout << "It is not a Square!\n";
	}
	void DrawSquare(int _a, int _b)
	{
		a = _a;
		b = _b;	
		if (a > 20 || a < 0)
		{
			a = 1;
		}
		if (b > 20 || b < 0)
		{
			b = 1;
		}
		char c;
		while (true)
		{
			cout << "Choose: <*>, </> or <->:";
			cin >> c;
			if (c == '*' || c == '/' || c == '-')
				break;
		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
};