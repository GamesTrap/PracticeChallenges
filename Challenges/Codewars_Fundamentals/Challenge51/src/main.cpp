constexpr double GetVolumeOfCuboid(const double length, const double width, const double height)
{
	return length * width * height;
}

int main()
{
	static_assert(GetVolumeOfCuboid(1, 2, 2) == 4);
	static_assert(GetVolumeOfCuboid(6.3, 2, 5) == 63);
	
	return 0;
}