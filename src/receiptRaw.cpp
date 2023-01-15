#include <receiptRaw.h>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
receiptRaw::receiptRaw(std::string filepath){
    /** TODO: use tesseract to read get raw outpu from image in filepath**/
    rawText = "TODO!!!";
}

std::string receiptRaw::getRawText(){
    return rawText;
}