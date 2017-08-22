#ifndef PID_H
#define PID_H

#include <vector>

class PID {
public:
  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();

  private:

    /*
     * Coefficients
     */
    double Kp;
    double Ki;
    double Kd;

    double last_error;
    double sum_errors;
    double diff_error;
};

#endif /* PID_H */
