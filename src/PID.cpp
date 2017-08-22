#include <iostream>
#include <numeric>
#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    this->last_error = 0;
    this->diff_error = 0;
}

void PID::UpdateError(double cte) {
    diff_error = cte - last_error;
    last_error = cte;
    sum_errors += cte;
}

double PID::TotalError() {
    return -Kp * last_error - Kd * diff_error - Ki * sum_errors;
}

