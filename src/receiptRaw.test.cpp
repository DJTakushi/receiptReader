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
TEST(receiptRawTest, jewelOsco_01) {
    std::string fn = "/receiptReader/src/sampleReceipts/01_jewelOsco.jpg";
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>(fn);
    EXPECT_NE(rr, nullptr);

    std::string exp = "Jewel\n";
    exp+="Osco.\n";
    exp+="Store 3465 Dir Bill Kugler\n";
    exp+="Main: (847) 677-3331 Rx: (8479 677-2564\n";
    exp+="9449 N Skokie Blvd\n";
    exp+="Skokie IL 60076\n";
    exp+="LIQUOR\n";
    exp+="SOU. COM GS 750ML 12.49 T\n";
    exp+="Age Restricted: 21\n";
    exp+="COOK CNTY LIQR TAX 0,50\n";
    exp+="Age Restricted: 21\n";
    exp+="perelar Price 13.99\n";
    exp+="Sale Savings 1.50-\n";
    exp+="TAX 1.53\n";
    exp+="* BALANCE 14.52\n";
    exp+="Credit Purchase 09/03/22 08:33\n";
    exp+="CARD. # eeeRKKKKEEH5 BB\n";
    exp+="REF: 923307458630 AUTH: 0009269C\n";
    exp+="PAYMENT AMOUNT 14.52\n";
    exp+="AL CHASE VISA\n";
    exp+="AID A0000000031010\n";
    exp+="TVR 0000008000\n";
    exp+="TSI E800\n";
    exp+="Visa 14.52 ;\n";
    exp+="CHANGE 0.00\n";
    exp+="10.25% SALES TAX 1.28 :\n";
    exp+="2.00% Sales Tax 0.25\n";
    exp+="TOTAL TAX 1:90\n";
    exp+="TOTAL NUMBER OF ITEMS SOLD = 2\n";
    exp+="09/03/22 08:33 3465 51 31 8851\n";
    exp+="YOUR CASHIER TODAY WAS SELF\n";
    exp+="YOUR SAVINGS\n";
    exp+="Store Savings 1.50\n";
    exp+="Total 1.50\n";
    exp+="aT ACA Ty ui\nAOR |\n";
    exp+="Thank you for shopping Jewel-Osco!\n";
    exp+="For _JEWEL-OSCO FOR U questions call\n";
    exp+="877-276-9637 or Jewelosco. com/foru\n";\
    EXPECT_STREQ(exp.c_str(), rr->getRawText().c_str());
}
TEST(receiptRawTest, aldi_02) {
    std::string fn = "/receiptReader/src/sampleReceipts/02_aldi.jpg";
    std::shared_ptr<receiptRaw> rr = std::make_shared<receiptRaw>(fn);
    EXPECT_NE(rr, nullptr);

    std::string exp = "ALDI\n";
    exp+="Store #068\n";
    exp+="2211 OAKTON ST.\n";
    exp+="EVANSTON\n";
    exp+="Your cashier today was\n";
    exp+="Rising Crust Pizza 3.69 FB\n";
    exp+="TC Cheese/Supreme 3.29 FB\n";
    exp+="Chicken Thighs 9.73 FB\n";
    exp+="Steam Green Beans 1.68 FB\n";
    exp+="26 0.84\n";
    exp+="Extra Shrp Cheddar 1.99 FB\n";
    exp+="Pln English Muffin 2.38 FB\n";
    exp+="26 1.19\n";
    exp+="Whole Milk 2,92 FB\n";
    exp+="Flat Leaf Spinach 1.49 FB\n";
    exp+="Large Eggs 3.01 FB\n";
    exp+="Semi-Sweet Morsels 1.89 FD\n";
    exp+="WH/BS Morsels 2.32 FD\n";
    exp+="Parmesan Cheese 2.65 FB\n";
    exp+="Bread Croutons 2.91 FB\n";
    exp+="3 @ 0.97\n";
    exp+="Ang] Hr/Fettuccine 1.84 FB :\n";
    exp+="Plain Bagels 1.55 FB :\n";
    exp+="Org Baby Carrots 1.39 FB\n";
    exp+="12 Grain Bread 2.09 FB\n";
    exp+="38 oz. Ketchup 1,59 FB\n";
    exp+="Sauerkraut 1.65 FB\n";
    exp+="24 oz. Pasta Sauce 1.45 FB\n";
    exp+="Cashews H&P 12 oz. 4,99 FB\n";
    exp+="Cocktail Peanuts 1.95 FB\n";
    exp+="Restaur Tortilla 1,79 FB\n";
    exp+="Shredded Wheat 3.18 FB\n";
    exp+="2@ 1.59\n";
    exp+="Mandar ins 2.99 FB\n";
    exp+="Winking Owl CabSau 2.95 NE\n";
    exp+="SUBTOTAL 69.36 .\n";
    exp+="E-Taxable @16,250% 0.49 \"|\n";
    exp+="D-Taxable @10.250% 0.42\n";
    exp+="B-Taxable @1.250% 0.78\n";
    exp+="AMOUNT DUE 71,05\n";
    exp+="TOTAL usp 71.05\n";
    exp+="31 ITEMS\n";
    exp+="Debit Card uSD 71.05\n";
    exp+="5032 440/068/005/801 09/08/22 04:08PM\n";
    exp+="SpE ERE HERE RRR ERROR EROS IE\n";
    exp+="Like ALDI? Tel] ALDI!\n";
    exp+="Tell us how we did at\n";
    exp+="www. tellaldi.us\n";
    exp+="Enter the drawing for a chance\n";
    exp+="to win a $100 ALDI gift card.\n";
    exp+="Must be 18 years old to enter.\n";
    exp+="No purchase necessary.\n";
    exp+="Sign up for ALDI emails and save!\n";
    exp+="www.aldi.us/signup\n";
    exp+="VISA 71,05\n";
    exp+="| ppebeRRHSBOS ONLINE\n";
    exp+="09/08/22 16:08 Ref/Seq # 0\n";
    exp+="Ath # N5IR3IC\n";
    EXPECT_STREQ(exp.c_str(), rr->getRawText().c_str());
}