#include <sys/stat.h>
#include <iostream>
#include <unistd.h>
#include <receiptRaw.h>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
inline bool exists_test3 (const std::string& name) {
  //https://stackoverflow.com/questions/12774207/fastest-way-to-check-if-a-file-exists-using-standard-c-c11-14-17-c
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
} 
receiptRaw::receiptRaw(std::string filepath){
    rawText = "null";
    if(exists_test3(filepath)){

        tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
        // Initialize tesseract-ocr with English, without specifying tessdata path
        if (api->Init(NULL, "eng")) {
            fprintf(stderr, "Could not initialize tesseract.\n");
        }
        else{
            try{
                // Open input image with leptonica library
                Pix* image = pixRead(filepath.c_str());
                api->SetImage(image);
                // Get OCR result
                char* outText = api->GetUTF8Text();
                rawText = std::string(outText);
        
                api->End();
                delete api;
                delete [] outText;
                pixDestroy(&image);
                std::cout << "constructor complete."<<std::endl;
            }
            catch(const std::exception& e){
                    std::cout << " a standard exception was caught, with message '"
                    << e.what() << "'\n";
            }
        }
    }

}

std::string receiptRaw::getRawText(){
    return rawText;
}