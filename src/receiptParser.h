#include <string>

struct receiptData{
    std::string title;
    std::string vendor;
    std::string date_s; 
    int total_d;
    int total_c;
};
class receiptParser_i{
    public:
    receiptParser_i(){};
    receiptParser_i(std::string rawText){};
};
class receiptParser: public receiptParser_i{
    receiptData data;
public:
    receiptParser();
    receiptParser(std::string rawText);
};