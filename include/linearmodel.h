//
// Created by geoffrey on 31/12/15.
//

#ifndef RANSAC_MODEL_H
#define RANSAC_MODEL_H

#include <opencv2/core.hpp>

using namespace cv;

// TODO: implement these classes

//We set ourselves in 2 dimensions
class LinearModel {
private:
    Point2f direction;
    float distanceToOrigin;

public:
    LinearModel(Point2f *dataSample, int nSample);

    double distance(const Point2f &point) const;

    bool agree(const Point2f &point, double threshold) const;

    Point2f getDirection() const;

    double getDistanceToOrigin() const;

};

std::ostream &operator<<(std::ostream ostream, const LinearModel model);

#endif //RANSAC_MODEL_H