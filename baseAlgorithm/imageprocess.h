﻿#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

class ImageProcess
{
public:
    ImageProcess();
    ~ImageProcess();

    int savePicture(cv::Mat roi,const std::string &fileNamePath);//基于opencv的图片保存png

    void drawCenter(cv::Mat &inFrame,std::vector<cv::Point2f> vectorPoint,cv::Scalar color=cv::Scalar(255,255,255));//在图像上绘制中心点
    void drawRect(cv::Mat &inFrame,std::vector<cv::Rect> vectorRect,cv::Scalar color=cv::Scalar(255,255,255));//在图像上绘制矩形框
    cv::Mat drawObjectContours(const cv::Mat &inMat,const std::vector< std::vector<cv::Point> > &objectContours,const std::vector<cv::Rect> &objectRect,cv::Scalar color=cv::Scalar(255,255,255));//绘制图像的轮廓

private:
    cv::RNG rng;//随机数生成器
    void init();
};

#endif // IMAGEPROCESS_H