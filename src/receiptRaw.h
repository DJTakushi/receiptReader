#include <string>
class receiptRaw_i {
protected:
    std::string imagePath;
    std::string rawText;
public:
    receiptRaw_i(){};
    receiptRaw_i(std::string filepath) {};
    virtual std::string getRawText() = 0;
};

class receiptRaw : public receiptRaw_i {
public:
    receiptRaw(std::string filepath);
    std::string getRawText();
};