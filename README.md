# PID controller project

## Components of the controller

### Proportional component (P)

Proportional component influences on the controller in proportion to current error
(in case of the steering, it is cross track error). It brings oscillation along the 
track waypoints while trying to match them as close as possible.
The error coefficient represents the relations of the oscillations amplitude and 
the error itself. In the project it mostly affects on the car ability to react to track changes. 
However, passing high values to the coefficient encourages high oscillations, thus, decreasing 
the smoothness of a trajectory and car control ability.

### Differential component (D)

Differential component influences on the controller based on the derivative of the error function,
or simply on the relation between last error and current error. This brings more smoothness and convergence
to the oscillation along with inability to react to the changes where the situation changes
rapidly. In the project, this component controls the oscillations and brings more stable tracking of the path.
 
### Integrated component (I)
 
Integrated component influences on the controller based on the sum of the previous errors. 
The component brings the ability to eliminate the error when the convergence of previous component values is falling to the wrong basis.
In the project this component allows to fix the car to the right trajectory when it was changed by the external modificators (physics etc).

## Choosing the component values

The component values for the steering and acceleration were chosen manually based on observations. As was said before,
the P and D components should be in balance to produce smooth trajectory in the straight segments and proper reaction on turns.
The twiddle algorithm was tested with hundred of iteration as well, but it produced not satisfactory details, so final tweaking was made
manually.
The I component was set to the small value to give an ability to react to trajectory problems when the car is going out of track,
but produce no external noise in case of normal behavior.