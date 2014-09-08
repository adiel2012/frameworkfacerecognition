#include "stdafx.h"
#include "opencv2/opencv.hpp"
int main()
 {
     IplImage* img = cvLoadImage("C:/hello.jpg");
     

	  if (!img)
    printf("Image can NOT Load!!!\n");

  cvNamedWindow("myfirstwindow");
  cvShowImage("myfirstwindow", img);

  cvWaitKey(0);
  cvReleaseImage(&img);

     return 0;
 }