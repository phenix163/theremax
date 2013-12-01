//-----------------------------------------------------------------------------
// name: theremax-cv.h
// desc: cv stuff
//
// author: Myles Borins
//   date: 2013
//-----------------------------------------------------------------------------
#ifndef __THEREMAX_CV_H__
#define __THEREMAX_CV_H__

//http://docs.opencv.org/modules/imgproc/doc/histograms.html?highlight=histogram#CvHistogram*%20cvCreateHist%28int%20dims,%20int*%20sizes,%20int%20type,%20float**%20ranges,%20int%20uniform%29
#include <iostream>
#include <highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
#include "theremax-globals.h"
#include "x-thread.h"

class TheremaxCV
{
public:
    ~TheremaxCV();
public:
    bool init();
    void getIntensity();
    void process();
public:
    cv::VideoCapture * camStream;
};

#endif