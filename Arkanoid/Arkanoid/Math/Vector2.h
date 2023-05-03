#pragma once
template<typename T>
class Vector2
{
public:
	Vector2():x(0), y(0) {};
	Vector2(T x, T y):x(x), y(y) {}

	Vector2<T> operator+(const Vector2& other)
	{
		Vector2<float> result;
		result.x = x + other.x;
		result.y = y + other.y;

		return result;
	}

	Vector2<T> operator-(const Vector2& other)
	{
		Vector2<float> result;
		result.x = x - other.x;
		result.y = y - other.y;

		return result;
	}


	Vector2<T> operator*(T value)
	{
		Vector2<float> result;
		result.x = x * value;
		result.y = y * value;

		return result;
	}

	Vector2<T>& operator +=(const Vector2& other)
	{
		return Vector2<T>(x + other.x, y + other.y);
	}

	Vector2<T>& operator -=(const Vector2& other)
	{
		return Vector2<T>(x - other.x, y - other.y);
	}

	Vector2<T>& operator *=(T value)
	{
		return Vector2<T>(x * value, y * value);
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

	Vector2<T> Normal()
	{
		return Vector2<T>(x/Size(), y/Size());
	}

	T x;
	T y;
};

