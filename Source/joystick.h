enum class Direction {
	Invalid,
	None,
	Up,
	Down,
	Left,
	Right
};

Direction getJoystickDirection(double r, double a);