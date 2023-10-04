#include <gtest/gtest.h>

#include "joystick.h"

// Test cases from control flow method.
TEST(ControlFlow, CF1) {
	EXPECT_EQ(getJoystickDirection(3, 0), Direction::Invalid);
}
TEST(ControlFlow, CF2) {
	EXPECT_EQ(getJoystickDirection(1.8, -8), Direction::Invalid);
}
TEST(ControlFlow, CF3) {
	EXPECT_EQ(getJoystickDirection(0.3, 88), Direction::None);
}
TEST(ControlFlow, CF4) {
	EXPECT_EQ(getJoystickDirection(2, 39), Direction::Right);
}
TEST(ControlFlow, CF5) {
	EXPECT_EQ(getJoystickDirection(1.5, 83), Direction::Up);
}
TEST(ControlFlow, CF6) {
	EXPECT_EQ(getJoystickDirection(1.6, 194), Direction::Left);
}
TEST(ControlFlow, CF7) {
	EXPECT_EQ(getJoystickDirection(0.6, 285), Direction::Down);
}
TEST(ControlFlow, CF8) {
	EXPECT_EQ(getJoystickDirection(1.7, 356), Direction::Right);
}