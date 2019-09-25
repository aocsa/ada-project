
// #include <utecdf/column/column.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <utec/two_sum/two_sum.hpp>
#include <fmt/core.h>

struct SumTwoTest : public ::testing::Test
{
};

TEST_F(SumTwoTest, TestA)
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> response = two_sum(nums, target);
    std::vector<int> expected = {0, 1};
    fmt::print("log: {} == {}\n", target, nums[response[0]] + nums[response[1]]);
    EXPECT_EQ(response, expected);
}

TEST_F(SumTwoTest, TestB)
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    std::vector<int> response = two_sum(nums, target);
    std::vector<int> expected = {1, 2};
    fmt::print("log: {} == {}\n", target, nums[response[0]] + nums[response[1]]);
    EXPECT_EQ(response, expected);
}

TEST_F(SumTwoTest, TestC)
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    std::vector<int> response = two_sum(nums, target);
    std::vector<int> expected = {1, 2};
    fmt::print("log: {} == {}\n", target, nums[response[0]] + nums[response[1]]);
    EXPECT_EQ(response, expected);
}