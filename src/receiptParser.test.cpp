#include <gtest/gtest.h>
#include <receiptParser.h>

TEST(receiptParserTest, basicConstructor){
    std::shared_ptr<receiptParser> rr = std::make_shared<receiptParser>();
    EXPECT_NE(rr, nullptr);
}