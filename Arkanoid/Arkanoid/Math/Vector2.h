#pragma once
template<typename T>
class Vector2
{
public:
	Vector2():x(0), y(0) {};
	Vector2(T x, T y):x(x), y(y) {}

	void operator+(const Vector2& other)
	{
		x += other.x;
		y += other.y;
	}


	void operator-(const Vector2& other)
	{
		x -= other.x;
		y -= other.y;
	}


	void operator*(T value)
	{
		x *= value;
		y *= value;
	}

	T Dot(const Vector2& other)
	{
		return x * other.x + y * other.y;
	}

	T Size()
	{
		return sqrtf(x * x + y * y);
	}

	T Length(const Vector2& other)
	{
		return sqrtf(x * other.x + y * other.y);
	}

	Vector2& operator +=(const Vector2& other)
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2& operator -=(const Vector2& other)
	{
		return Vector2(x - other.x, y - other.y);
	}

	Vector2& operator *=(T value)
	{
		return Vector2(x * value, y * value);
	}

	T x;
	T y;
};

