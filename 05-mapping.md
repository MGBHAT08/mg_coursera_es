# Mapping

This section will elaborate specific examples of the abstract use cases and which protocol applies its strength the most for each of them.

## Use case Examples

Our 4 abstract use cases are:

1. Continuous data streaming
2. Event-based data dumps
3. Remote control of the vehicle
4. Video streaming

For each of the use case, a specific scenario will be considered for chosing the most viable protocol.

### Case 1 - GPS Update

Telemetry data can be used for different purposes: on the one hand, it can provide information for diagnostics and optimization. In this case, GPS data can be used to create driving profiles or help identify driving situations. On the other hand, it can be used to provide real time location-based services like intelligent traffic and fleet management.

#### Data properties

- size per message: `few bytes`
- transmission frequency: `every 5 seconds, configurable`
- quality of service: `basic, no acknowledgement required`
- latency: `<250ms, soft real time`
- security: `sensitive data`

#### Protocols Ranking

1. CoAP

 >>>The main benefit of CoAP is its small message size overhead for messages with a small payload. When constantly streaming location data, it is not necessary that ever single location update message actually arrives. Therefore, there is no need to establish a TCP connection. CoAP in fact has the ability to send non-confirmable and confirmable messages. So even if it was required to ensure a sucessfull transmission, this could be achieved by incorporating a resend-strategy. Additionally, it bases on a request/response architecture, so there is no need of a central broker. Regarding security, CoAP supports DTLS (Datagram TLS).

2. gRPC

 >>>In general, gRPC also fits the use case's requirements. In particular, due to its combination of using Remote Procedure Call and Protobuffer files to define the message schema that will be used to serialize the message to binary data, there is no message size overhead. Also the serialization process is highly optimized and fast and thereby enabling a low latency. As gRPC uses HTTP/2 to establish the connction, only one connection has to be established once and can be reused for every following update message. The only general disadvantage is that gRPC is currently not really used for IoT solutions. This is also the reason why it takes place 2.

3. AMQP

 >>>Basically, using AMQP for continously streaming data is possible due to its flexible QoS semantics and its support of queues for buffering messages and asynchronous communication. However, regarding the specific use case of permanent GPS updates, it seems questionable to use TCP-based AMQP with its rich feature set as it is not really necessary to ensure the delivery of every update and incorporate a complex channel and queue architecture. Therefor, CoAP and gRPC is considered more suitable.

4. DDS

 >>>DDS is a real time publish/subscribe protocol. It allows UDP and TCP based communication. Due to its real time capabilities, in principal, also DDS could be used for this use case. However, in comparison to the small payload size, its overhead is too large, also its implementation is more time consuming as it only provides a C/C++ or Java API. Therefor, it is only considered as the third protocol in the list.

5. MQTT

 >>>For the sake of completeness, also MQTT is mentioned in the list. However, due to its broker-centric architecture and the usage of HTTP/1, the latency is too high. For every update message a new TCP connection would have to be established. For only sending a small payload without any other advantages, MQTT does not fit for this use case.

### Case 2 - Diagnostics report on engine health

Every time the car is started, several motor parameters wrapped up in a diagnostics report is sent to the backend as a sanity check. This helps the customer to be aware of abnormalities of his car by sending notifications. The data is also useful for internal services like predictive maintainance.

#### Data properties

- size per message: `few kilobytes`
- transmission frequency: `on each car startup, manually triggered`
- quality of service: `receive acknowledgement`
- latency: `not critical, can be up to few seconds`
- security: `sensitive`

1. AMQP

 >>>AMQP fits this use case best because it provides queueing ability for buffering and recovering messages when no internet connection is available, also it allows using multiple channels and provides message integrity, encryption and authentication as security options. At the same time, there exists good documentation and it is well supported and relatively easy to implement. By enabling a flexible way of setting up channels and queues, AMQP provides the ability to use distinct channels for a certain type of diagnostic reports.

2. gRPC

 >>>If the data schema of a diagnostics report is definable upfront, also gRPC fits very well. It provides an easy to use API and a fast serialization and transmission under the hood by using HTTP/2 for transportation. As gRPC is a ready-to-use framework, the implementation effort would be less than with AMQP.

3. DDS

 >>>The main reason for being DDS the second choice is that DDS is more complicated to implement since there there is less documentation available and at least the server side core part would have to be implemented in C/C++. Besides of that, DDS would also provide the advantages of AMQP - secure transmission, queue support, in comparison to the payload small overhead and additionally content filtering.

4. MQTT

 >>>Basically, also MQTT could be used for this use case. However, like said for use case 1, for every message a new TCP connection would be necessary leading to an unnecessary high overhead while having AMQP with HTTP/2 support available.

5. CoAP

 >>>While CoAP meanwhile supports TCP communication, it originally was not designed for a transmitting stream data, also not small stream data. As there are other protocols available which are more tailored for this use case and requiring less implementation effort CoAP is only #4. Although, it would potentially be possible to make CoAP fit for this use case.

### Case 3 - Teleoperated driving

As a backup channel for automated / autonomous driving, the vehicle needs to be able to be remote controlled by a teleoperator. Once the service is established, it can also be used to resolve emergency situations where the driver is unable to safely stop the vehicle by himself.

#### Data properties

- size per message: `few kilobytes`
- transmission frequency: `>10hz`
- quality of service: `receive acknowledgement`
- latency: `hard real time, <100 ms`
- security: `high, must be secured against external attack`

#### Protocols Ranking

1. DDS

 >>>DDS is a protocol mainly built for secure real-time IoT applications. It has a multi broker structure making it failsafe. It has relatively larger overhead but compensates by providing additional QoS and cross platform code compatibility.Often in cases of remote control services of automotive there are two main aspects. Firstly hard real-time necessities and secondly data security. DDS can be implemented as a server model or as a peer-to-peer network making it easier to handle a large number of network connections and simultaneously provide real-time data latency. DDS also offers in-built, externally-configurable and plugin security making it a strong protocol for the use case. Lockheed Martin's remote controlled ships use the same protocol.
 
2. CoAP

 >>>CoAP has the ability to send non-confirmable and confirmable messages. So even if it was required to ensure a sucessfull transmission, this could be achieved by incorporating a resend-strategy. Additionally, it bases on a request/response architecture, so there is no need of a central broker,thus making it real-time in application. Regarding security, CoAP supports DTLS (Datagram TLS) and external encryptions.

3. Quic and WebRTC at the Transport

 >>>WebRTC and Quic are transport layer protocols that are created to achieve "real-time" scenarios at the transport layer. Quic is UDP based making it lighter than TCP but more reliable than UDP because it implements Handshake and acknowledgement. Similarly WebRTC implements a UDP based model with better security and reliability. Both CoAP and DDS are agnostic to transport layers, working on combinations of these protocols could provide essentially better results.

### Case 4 - Video call on BMW Head Unit

A video call can be started directly on the head unit. Video streams are transfered both up- downlink, which means that the driver can see the caller on the Head Unit, and the caller can see either the driver through a camera or the outside through a dashcam.

#### Data properties

- size per message: `>2MBits/s`
- transmission frequency: `<25fps`
- quality of service: `basic, no acknowledgement required`
- latency: `hard real time, <100 ms`
- security: `standard`

#### Protocols Ranking

1. WebRTC with HTTP/2 or HTTP/3

 >>>WebRTC is a commonly used protocol for streaming services by many commercial entities. A combination commonly used in the general internet world can be portable to the IoT domain because the overhead is not too significantly large and the general support is immense.

## Protocol Advantages

### 1. MQTT

    1. Provision of 3 different QoS
    2. Light weight
    3. Relatively low bandwidth
    4. Last Will & Retained Message
    5. Theoretically supports infinite connections

### 2. AMQP

    1. Supports TLS/SASL
    2. Upto 10k users with 64 servers
    3. QoS modified with Number of users and servers
    4. 3 different types of message queue
    5. Queue is a FIFO

### 3. DDS

    1. No Single point of failure
    2. Content and topic filtering both possible
    3. Platform independent and transport layer agnostic
    4. New concept of keyed and keyless topics
    5. Secure DDS implementation is available with plug-ins in addition to
    common security mechanisms
    6. A large number of QoS available for configuration
    7. Supports a peer to peer network

### 4. CoAP

    1. It supports binding to UDP, TCP and SMS
    2. It is very efficient RESTful protocol as defined in RFC 7252
    3. It is simple protocol and uses less overhead due to operation over UDP
    This helps in achieving long battery life for use in IoT (Internet of Things) and M2M (Machine to Machine) communication
    4. Synchronous communication is not necessity in CoAP protocol
    5. It has lower latency compare to HTTP.

.. image:: ../uploads/ranking.png
    :target: ../../_images/ranking.png

_
