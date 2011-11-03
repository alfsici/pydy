#ifndef RATTLEBACK_ODE_H
#define RATTLEBACK_ODE_H
struct rattleback_params {
 double a, b, c, d, e, f, m, Ixx, Iyy, Izz, Ixy, Iyz, Ixz, g;
};

struct simdata { double t, x[8], CF[3], ke, pe, te, delta; };

int rattleback_ode(double t, const double x[], double dxdt[], void *params);

void rattleback_outputs(simdata *s, rattleback_params *p);
#endif
