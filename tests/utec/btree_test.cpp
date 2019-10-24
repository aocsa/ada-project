
// #include <utecdf/column/column.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <utec/btree.h>
#include <fmt/core.h>

struct SumTwoTest : public ::testing::Test
{
};

TEST_F(SumTwoTest, TestA) {
    btree<int> bt;
    std::string values = "zxcnmvafjdaqpirue";
    for(auto c : values) {
       bt.insert((int)c);
       bt.print();
    }
    bt.print();
}
 