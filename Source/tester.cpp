#include <gtest/gtest.h>

#include "joystick.h"

// Test cases from equivalent class partitioning method.
TEST(EquivalentClassPartitioning, EC1) {
	EXPECT_EQ(getJoystickDirection(0.4, 7), Direction::None);
}
TEST(EquivalentClassPartitioning, EC2) {
	EXPECT_EQ(getJoystickDirection(1, 78), Direction::Up);
}
TEST(EquivalentClassPartitioning, EC3) {
	EXPECT_EQ(getJoystickDirection(0.3, 152), Direction::None);
}
TEST(EquivalentClassPartitioning, EC4) {
	EXPECT_EQ(getJoystickDirection(1.1, 266), Direction::Down);
}
TEST(EquivalentClassPartitioning, EC5) {
	EXPECT_EQ(getJoystickDirection(0, 359), Direction::None);
}
TEST(EquivalentClassPartitioning, EC6) {
	EXPECT_EQ(getJoystickDirection(-0.5, 22), Direction::Invalid);
}
TEST(EquivalentClassPartitioning, EC7) {
	EXPECT_EQ(getJoystickDirection(2.5, 51), Direction::Invalid);
}
TEST(EquivalentClassPartitioning, EC8) {
	EXPECT_EQ(getJoystickDirection(0.2, -69), Direction::Invalid);
}
TEST(EquivalentClassPartitioning, EC9) {
	EXPECT_EQ(getJoystickDirection(1.7, 409), Direction::Invalid);
}

// Test cases from decision table method.
TEST(DecisionTable, DC1) {
	EXPECT_EQ(getJoystickDirection(-0.4, 0), Direction::Invalid);
}
TEST(DecisionTable, DC2) {
	EXPECT_EQ(getJoystickDirection(0.3, 0), Direction::None);
}
TEST(DecisionTable, DC3) {
	EXPECT_EQ(getJoystickDirection(2, 42), Direction::Right);
}
TEST(DecisionTable, DC4) {
	EXPECT_EQ(getJoystickDirection(1.4, 99), Direction::Up);
}
TEST(DecisionTable, DC5) {
	EXPECT_EQ(getJoystickDirection(1.1, 135), Direction::Left);
}
TEST(DecisionTable, DC6) {
	EXPECT_EQ(getJoystickDirection(0.8, 283), Direction::Down);
}
TEST(DecisionTable, DC7) {
	EXPECT_EQ(getJoystickDirection(0.7, 330), Direction::Right);
}
TEST(DecisionTable, DC8) {
	EXPECT_EQ(getJoystickDirection(2.3, 0), Direction::Invalid);
}
TEST(DecisionTable, DC9) {
	EXPECT_EQ(getJoystickDirection(0, -75), Direction::Invalid);
}
TEST(DecisionTable, DC10) {
	EXPECT_EQ(getJoystickDirection(0, 368), Direction::Invalid);
}