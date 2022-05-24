#include "Header.h"
using namespace cv;

int main()
{
    int i;
    double x = 17;
    double y = 19;
    double vx = 2;
    double vy = 3;

    Mat input(Size(X, Y), CV_8UC3, Scalar(0,0,0));
    // エージェント
    circle(input, Point(x, y), radius, Scalar(0, 255, 0), width);
    for (i = 0; i < N; i++) {
        circle(input, Point(x, y), radius, Scalar(0, 0, 0), width);
        if (x <= 0 || x >= X) {
            vx = -vx;
        }
        x = x + vx;
        if (y <= 0 || y >= Y) {
            vy = -vy;
        }
        y = y + vy;
        circle(input, Point(x, y), 1, Scalar(0, 255, 0), 5);
        imshow(" ", input);
        waitKey(1);
    }
    waitKey(0);
    
	return 0;
}