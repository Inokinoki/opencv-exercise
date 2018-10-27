#include <iostream>
#include <stdlib.h>
#include <opencv/cv.hpp>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout<<"Should give filename"<<std::endl;
        exit(1);
    }
    cv::Mat A, C;
    A = cv::imread(argv[1], cv::IMREAD_COLOR);      // Color Cai Se
    C = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);  // Gray Scale Hui Jie

    cv::namedWindow("Color", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Black", cv::WINDOW_AUTOSIZE);

    cv::imshow("Color", A);

    cv::imshow("Black", C);
    cv::waitKey(0);
    return 0;
}