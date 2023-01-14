#include <string>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <opencv2/opencv.hpp>
  
int main(int argc, char* argv[])
{
    std::string outText, imPath = argv[1];
 
    cv::Mat im = cv::imread(imPath, cv::IMREAD_COLOR);
	
	tesseract::TessBaseAPI *ocr = new tesseract::TessBaseAPI();
     
    ocr->Init(NULL, "eng", tesseract::OEM_LSTM_ONLY);
    ocr->SetPageSegMode(tesseract::PSM_AUTO);
    ocr->SetImage(im.data, im.cols, im.rows, 3, im.step);
    
    outText = std::string(ocr->GetUTF8Text());
    std::cout << outText;
	
	ocr->End();

    return 0;
}