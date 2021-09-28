# Use cases

To enable a goal oriented research, we will focus on four major use cases.

## Continuous data streaming

In the first set of use-cases, the goal is to send time-series data continuously to a remote
server. Examples include the streaming of the vehicles location anonymously for improving the
real time traffic information or to offer personalized location-based services depending on data
which is processed constantly in the backend. Further, it’s important that the remote server is
enabled to understand the semantics of the data and that it’s configurable which data will be
send with specific quality of service parameters regarding frequency and availability. The
transferred data per message is small, meaning that minimizing costs and traffic through
minimal overhead and keeping a high degree of information is key.

.. image:: ../uploads/usecase1.png
    :target: ../../_images/usecase1.png

## Event-based data dumps

The second set of use-cases need bigger amounts of data, which have to be sent, based on
occurring events. Concrete use-case would include a bigger data set, once a check-control
message is triggered. The data is stored on the vehicle and sent to the backend. It can consist
of single data points or binary data like video streams or pictures. Latency is not the primary
issue, but eventually the sending of the package has to be completed.

.. image:: ../uploads/usecase2.png
    :target: ../../_images/usecase2.png

## Remote control of the vehicle

Main goal of the teleoperated driving is the remote control of an autonomously driving vehicle
in situations, where the vehicle can't determine how to proceed. Examples are a car stopping
at the roadside with a solid middle line, creating a rescue alley, or a police officer ruling the
traffic etc. These kinds of use-cases are the most rigid in terms of latency, frequency and
security. This set of use cases require hard real time requirements with a frequency of up to 10
Hz.

.. image:: ../uploads/usecase3.png
    :target: ../../_images/usecase3.png

## Video streaming

In case of the remote control of the vehicle, it is important to get as much information of the
situation as possible. Therefore, a video stream of the situation has to be set up. The amount
of data is huge and a continuous stream is required.
This list will be refined and extended in the first phase of the project. The current list shall give
an overview of the current understanding.

<div style="page-break-after: always;"></div>

_
