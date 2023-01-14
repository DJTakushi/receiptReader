#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <iostream>
int main(int argc, char* argv[]){
    std::string filepath = "/receiptReader/examples/ehiorobo//test_image.jpg";
    if(argc == 1){
        std::cout << "using default input file:"<<filepath<<std::endl;}
    else{
        filepath = std::string(argv[1]);
    }

    char *outText;

    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init(NULL, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Open input image with leptonica library
    Pix *image = pixRead(filepath.c_str());
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("OCR output:\n%s", outText);

    // Destroy used object and release memory
    api->End();
    delete api;
    delete [] outText;
    pixDestroy(&image);

    return 0;
}
