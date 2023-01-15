#include <gtest/gtest.h>
#include <receiptRaw.h>

TEST(receiptRawTest, basicConstructor) {
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>("");
    EXPECT_NE(rr, nullptr);

    /* default value; will be replaced */
    EXPECT_STREQ("TODO!!!", rr->getRawText().c_str());
}
