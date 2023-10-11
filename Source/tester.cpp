#include <gtest/gtest.h>

#include "joystick.h"

// Test cases from data flow method.
TEST(DataFlow, DF1) {
	EXPECT_EQ(getJoystickDirection(1.8, 346), Direction::Right);
}
TEST(DataFlow, DF2) {
	EXPECT_EQ(getJoystickDirection(3.8, 0), Direction::Invalid);
}
TEST(DataFlow, DF3) {
	EXPECT_EQ(getJoystickDirection(0, -84), Direction::Invalid);
}
TEST(DataFlow, DF4) {
	EXPECT_EQ(getJoystickDirection(0, 10), Direction::None);
}
TEST(DataFlow, DF5) {
	EXPECT_EQ(getJoystickDirection(0.8, 38), Direction::Right);
}
TEST(DataFlow, DF6) {
	EXPECT_EQ(getJoystickDirection(0.8, 64), Direction::Up);
}
TEST(DataFlow, DF7) {
	EXPECT_EQ(getJoystickDirection(1.6, 214), Direction::Left);
}
TEST(DataFlow, DF8) {
	EXPECT_EQ(getJoystickDirection(2, 264), Direction::Down);
}