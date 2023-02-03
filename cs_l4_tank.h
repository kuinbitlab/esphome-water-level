#include "esphome.h"
#include <SimpleKalmanFilter.h>

#define DIVIDE_RATIO 1.21
#define MULTIPLY_RATIO 10.0
#define MAX_HEIGHT 132

SimpleKalmanFilter kalmanFilter(3.0, 3.0, 0.1);

double soundSpeed(double c)
{
    double s = 331.3 + 0.606 * c;
    return s / 20000.0;
}
