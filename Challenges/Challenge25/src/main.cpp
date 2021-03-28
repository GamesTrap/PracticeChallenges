constexpr bool SetAlarm(const bool employed, const bool vacation)
{
	return employed && !vacation;
}

int main()
{
	static_assert(SetAlarm(true, true) == false);
	static_assert(SetAlarm(false, true) == false);
	static_assert(SetAlarm(false, false) == false);
	static_assert(SetAlarm(true, false) == true);
	
	return 0;
}