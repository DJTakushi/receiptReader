#include <gtest/gtest.h>
#include <string>
#include <receiptRaw.h>

TEST(receiptRawTest, basicConstructor) {
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>("");
    EXPECT_NE(rr, nullptr);

    EXPECT_STREQ("null", rr->getRawText().c_str());
}
TEST(receiptRawTest, ehiorobo) {
    std::string fn = "/receiptReader/src/sampleReceipts/test_image.jpg";
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>(fn);
    EXPECT_NE(rr, nullptr);

    std::string exp;
    exp="1.1 What is computer vision?\n\n";
    exp+="As humans, we perceive the three-dimensional structure of the world around us with apparent\n";
    exp+="ease. Think of how vivid the three-dimensional percept is when you look at a vase of flowers\n";
    exp+="sitting on the table next to you. You can tell the shape and translucency of each petal through\n";
    exp+="the subtle patterns of light and Shading that play across its surface and effortlessly segment\n";
    exp+="each flower from the background of the scene (Figure 1.1). Looking at a framed group por-\n";
    exp+="trait, you can easily count (and name) all of the people in the picture and even guess at their\n";
    exp+="emotions from their facial appearance. Perceptual psychologists have spent decades trying to\n";
    exp+="understand how the visual system works and, even though they can devise optical illusions!\n";
    exp+="to tease apart some of its principles (Figure 1.3), a complete solution to this puzzle remains\n";
    exp+="elusive (Marr 1982; Palmer 1999; Livingstone 2008).\n";
  
    EXPECT_STREQ(exp.c_str(), rr->getRawText().c_str());
}
TEST(receiptRawTest, shell_00) {
    std::string fn = "/receiptReader/src/sampleReceipts/00_shell.jpg";
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>(fn);
    EXPECT_NE(rr, nullptr);

    std::string exp = ">\nWelcome to Shell\n";
    exp+="SUBWAY OPEN\n";
    exp+="UNTIL 8 PM\n";
    exp+="57443860705\n";
    exp+="Evanston Shell\n";
    exp+="2494 OAKTON ST\n";
    exp+="EVANSTON IL\n";
    exp+="60202\n";
    exp+="DATE 9/8/22 15:34\n";
    exp+="TRAN# 9107545\n";
    exp+="PUMP# 10 ,\n";
    exp+="SERVICE LEVEL: SELF\n";
    exp+="PRODUCT: REGULR\n";
    exp+="GALLONS: 6.340\n";
    exp+="PRICE/G: 4.659\n";
    exp+="FUEL SALE 29.54\n";
    exp+="CREDIT 29.54\n";
    exp+="CHASE VISA\n";
    exp+="USD$29.54\n";
    exp+="XXXX XXXX XXXX 5863\n";
    exp+="(OAR Read\n";
    exp+="APPROVED\n";
    exp+="AUTH # 07247C\n";
    exp+="INV # 016691\n";
    exp+="Mode: Issuer\n";
    exp+="AID: A0000000031010 :\n";
    exp+="TVR: 0000008000\n";
    exp+="TAD: 06021203Aa0B002\n";
    exp+="TST: \xC2\xA3" "800\n";
    exp+="ARC: 00\n";
    exp+="Please come again\n";
    EXPECT_STREQ(exp.c_str(), rr->getRawText().c_str());
}
