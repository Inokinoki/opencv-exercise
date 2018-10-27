#include <iostream>
#include <opencv/cv.hpp>

/**
    Default
    cout << "R (default) = " << endl <<        R           << endl << endl;
    Python
    cout << "R (python)  = " << endl << format(R, Formatter::FMT_PYTHON) << endl << endl;

    Comma separated values (CSV)
    cout << "R (csv)     = " << endl << format(R, Formatter::FMT_CSV   ) << endl << endl;

    Numpy
    cout << "R (numpy)   = " << endl << format(R, Formatter::FMT_NUMPY ) << endl << endl;

    C
    cout << "R (c)       = " << endl << format(R, Formatter::FMT_C     ) << endl << endl;
 */

int main()
{
    cv::Mat a;
    std::cout<<a<<std::endl;
    return 0;
}
