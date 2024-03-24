class Fraction {
private:
	int numerator;
	int denominator;
public:
	void SetFraction(int num, int denom);
	void Add(const Fraction& other);
	void Subtract(const Fraction& other);
	void Multiply(const Fraction& other);
	void Divide(const Fraction& other);
	void Simplify();
	void PrintResult();
};
