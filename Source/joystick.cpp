#include "joystick.h"

Direction getJoystickDirection(const double r, const double a) {
	if (r < 0 || r > 2)
		return Direction::Invalid;
	if (a < 0 || a >= 360)
		return Direction::Invalid;
	if (r < 0.5)
		return Direction::None;
	if (a < 45)
		return Direction::Right;
	if (a < 135)
		return Direction::Up;
	if (a < 225)
		return Direction::Left;
	if (a < 315)
		return Direction::Down;
	return Direction::Right;
}