#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp" 
#include <iostream> 
void shaastra(cv::Mat &image);
using namespace cv;
using namespace std;
int main(int argc, char* argv[ ]) 
{
  VideoCapture cap(0); // open the video camera no. 0 
  if (!cap.isOpened())  // if not success, exit program 
{      cout<<"error1"<<endl;
 return 0; 
  } 
  while (1) 
  {
Mat frame; 
 bool bSuccess = cap.read(frame); 
   // read a new frame from video 
if (!bSuccess) //if not success, break loop 
{ 
cout<<"error2"<<endl;
 break; 
} 
else 
{ shaastra(frame);
}
void shaastra (cv::Mat &image){
float  rh= image.rows/4000;
float  rv= image.cols/4000;
int m;io;jo;
float pi;pj;sm;
for (int j=0; j<image.rows; j++) {
for (int i=0; i<image.cols; i++) {
if(image.at<cv::Vec3b>[0]=255,image.at<cv::Vec3b>[1]=182,image.at<cv::Vec3b>[2]=193)
{m=1;
cout<<”w”;}
else
{m=0;
}
pi=pi+m*i;
pj=pj+m*j;
sm=sm+m;
}}
io=pi/sm;
jo=pi/sm;
//navigate to (910,2520)
While(io<910*rh)
{i++; // max motor speed
// publish 255 and 255
cout<<”speed 255 and 255”<<endl;
}
//right turn
//by publishing -255 and 255
cout<<”right turn 0 and 128”<<endl;
While (jo<2520*rv)
{ j++; // max motor speed
//255 and 255
}
Void subgrid1(cv::Mat &image){
//io,jo
For (io=910*rh;io<1430*rh;io++)
{
io++;
cout<<”right turn -255 and 255”<<endl;

// max motor speed
// publish 255 and 255
}
//placing block
//led}
Void subgrid2(cv::Mat &image)
//io,jo
For (io=2990*rh;io>2470*rh;io--)
{
io++;
cout<<”right turn -255 and 255”<<endl;
// max motor speed
// publish 255 and 255
}
//placing block
//led 
} 


//to decide which block to place
void block(cv::Mat &image) //here image is the image of a particular subgrid
{
int r=0,g=0,b=0,y=0;
for(i=0;i<image.rows; i++){
for(j=0;j<image.columns;j++){
if(image.at<cv::Vec3b>(i,j)[0]>=220,image.at<cv::Vec3b>(i,j)[1]<=30,image.at<cv::Vec3b>(i,j)[2]<=30){
r++;
}
if(image.at<cv::Vec3b>(i,j)[0]<=30,image.at<cv::Vec3b>(i,j)[1]>=220,image.at<cv::Vec3b>(i,j)[2]<=30){
g++;
}
if(image.at<cv::Vec3b>[0]<30,image.at<cv::Vec3b>[1]<=0,image.at<cv::Vec3b>[2]>=220){
b++;
}
if(image.at<cv::Vec3b>(i,j)[0]>=220,image.at<cv::Vec3b>(i,j)[1]>=220,image.at<cv::Vec3b>(i,j)[2]<30){
y++;
}
cout<<r<<endl;
cout<<g<<endl;
cout<<b<<endl;
cout<<y<<endl;
}
//creating image for subgrid1
cv::Mat sg1(1080,1080,CV_8UC3);
for(i=0;i<sg1.cols; i++){
for(j=0;j<sg1.rows;j++){
sg1.at<cv::Vec3b>(i,j)[0]= image.at<cv::Vec3b>(i+370*rh,j+2520*rv)[0];
sg1.at<cv::Vec3b>(i,j)[1]= image.at<cv::Vec3b>(i+370*rh,j+2520*rv)[1];
sg1.at<cv::Vec3b>(i,j)[2]= image.at<cv::Vec3b>(i+370*rh,j+2520*rv)[2];
}}
