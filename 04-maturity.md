# Maturity of the protocols

## Evaluation Criteria

1. Existing implementations (libraries, frameworks etc.)
2. Existence of documentation and its quality
3. Supported devices
4. Standardisation

## Classification

By definition of the project, only stable protocols are considered during the research.
However, there are differences regarding the spread in iot applications and the level of support.
That is the reason why the maturity is not ranked or rated, but classified in one of the following fields:

|                        	| Good support 	| Bad support 	|
|------------------------	|--------------	|-------------	|
| Established in IoT     	|.             	|.             	|
| Established in general 	|.             	|.             	|

### 1. DDS

`Established in IoT - Bad support`

#### Existing Implementations

`OpenDDS - Git not available,Available as a package on website,Active support`

`Opensplice DDS - Developed by Adlink, Git code as well as package both available`

#### Existence of documentation and Quality

`same as above`

#### Supported devices and Operating systems

`Windows,Linux,Posix,Mac OS X`

`Low power embedded devices as client, Large systems as server`

#### Standardisation

`Standardisation available: http://www.omg.org/spec/DDS/1.4`

#### Timeline

`First release - 2003/04`

`Standardisation - 2004`

`Current Version - 1.4 (Standardised in 2015)`

### 2. CoAP

`Established in IoT - Good support`

#### Existing Implementations

`An extensive list with the best maintained open source implemenations is provided at`
`https://coap.technology/impls.html`
`(As CoAP is meant to be used on constrained devices, solutions are mostly implemented in C)`

#### Existence of documentation and Quality

`Next to official specifications summarized at https://coap.technology/spec.html`
`several online documentation/tutorials exist`

#### Supported devices and Operating systems

`Specifically supports constrained devices requiring low cpu/ memory footprint`

#### Standardisation

`Official standard exists: https://tools.ietf.org/html/rfc7252`

#### Timeline

`First release - 2012`

`Standardisation - 2014`

`Current Version - NA(only one standardised, version unnumbered`

### 3. AMQP

`Established in IoT - Good support`

#### Existing Implementations

`https://github.com/streadway/amqp (most popular client on GitHub implemented in Go)`

`https://github.com/pika/pika (Python based client)`

`https://github.com/mosquito/aio-pika (async version of the above solution)`

`Some more can be found in other languages, in general due to its popularity`
`finding existing implementations for AMQP is promising`

#### Existence of documentation and Quality

`Documentation is good as AMQP has been standardized by ISO and OASIS (see below)`

#### Supported devices and Operating systems

`As AMQP is kind of the asynchronous counterpart of HTTP`
`it has more overhead and thereby is less suitable for embedded devices when latency and memory is highly demanded`

#### Standardisation

`ISO: http://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=64955`

`OASIS: http://docs.oasis-open.org/amqp/core/v1.0/os/amqp-core-complete-v1.0-os.pdf`

#### Timeline

`First release - 2006(Version 0.8)`

`Standardisation - 2012`

`Current Version - 1.0 (Standardised in 2012)`

### 4. MQTT

`Established in IoT - Good support`

#### Existing Implementations

`https://github.com/mqtt/mqtt.github.io/wiki/software?id=software`
`(official implementation of MQTT on Git)`

`http://mosquitto.org/(Ready to use MQTT Broker)`

`https://github.com/hobbyquaker/awesome-mqtt(everything related to MQTT compiled)`

#### Existence of documentation and Quality

`MQTT is the most common protocol and has been around for more than 20 years`

#### Supported devices and Operating systems

`It is specifically built for low power,low memory devices but latency is a question`

#### Standardisation

`ISO: ISO/IEC 20922:2016`

`OASIS: http://docs.oasis-open.org/mqtt/mqtt/v3.1.1/os/mqtt-v3.1.1-os.doc`

#### Timeline

`First release - 1999`

`Standardisation - 2013`

`Current Version - 5.0 (Standardised in 2019)`

### 5. QUIC

`Established in general - Good support`

#### Existing Implementations

`https://github.com/quicwg/base-drafts/wiki/Implementations`
`(everything related to QUIC compiled)`

#### Existence of documentation and Quality

`IETF Standards, Working group and Google open implementations`

#### Supported devices and Operating systems

`Less overhead,Fits anywhere`

#### Standardisation

`IETF : https://tools.ietf.org/html/draft-tsvwg-quic-protocol-02`

#### Timeline

`First release - 2012`

`Standardisation - 2017(Approved draft)`

`Current Version - self-defined`

### 6. SCTP

`Established in general - Bad support`

#### Existing Implementations

`https://chromium.googlesource.com/external/github.com/sctplab/usrsctp/+/HEAD/Manual.md`
`(Markdown page on implementation)`
`https://github.com/sctplab/usrsctp(Chromium implementation)`

#### Existence of documentation and Quality

`IETF Standards`

#### Supported devices and Operating systems

`deployable on small devices`

#### Standardisation

`IETF : https://tools.ietf.org/html/rfc4960`

#### Timeline

`First release - 2000`

`Standardisation - 2000`

`Current Version - Multiple in use, unnumbered`

### 7. OPC UA

`Established in general - Bad support`

#### Existing Implementations

`An extensive list with the best maintained open source implemenations is provided at`
`https://github.com/open62541/open62541/wiki/List-of-Open-Source-OPC-UA-Implementations`

#### Existence of documentation and Quality

`IEC Standards`

#### Supported devices and Operating systems

`deployable on small devices`

#### Standardisation

`IEC : https://open62541.org/doc/open62541-current.pdf`

#### Timeline

`First release - 2006`

`Standardisation - 2006`

`Current Version - 1.04 (Standardised in 2017)`

### 8. HTTP/2

`Established in general - Good support`

#### Existing Implementations

`https://github.com/http2/http2-spec/wiki/Implementations`
`(This wiki tracks known implementations of HTTP/2)`

#### Existence of documentation and Quality

`IETF Standards`

#### Supported devices and Operating systems

`deployable on small devices`

#### Standardisation

`IETF : https://httpwg.org/specs/rfc7540.html and`
`https://httpwg.org/specs/rfc7541.html`

#### Timeline

`First release - 2014`

`Standardisation - 2015`

### 9. gRPC

`Established in general - Good support`

#### Existing Implementations

`IoT examples: https://github.com/vladimirvivien/iot-dev`

#### Existence of documentation and Quality

`https://grpc.io/ (very good quality as it's an open source technology by Google)`

`Also a lot of third-party documentation exists`

`Comprehensive list of suitable uses cases:`
`https://tools.ietf.org/html/draft-talwar-rtgwg-grpc-use-cases-01`

#### Supported devices and Operating systems

`"It became clear that it was time to rework Stubby to take advantage of this standardization,`
`and to extend its applicability to mobile, IoT, and Cloud use-cases"`
`(https://grpc.io/blog/principles/) (Stubby is gRPC's predecessor)`

#### Standardisation

`As gRPC is in fact a top level layer for standardizing communication, no official IETF standard exists`
`but an API reference for multiple languages (https://grpc.io/docs/reference/)`
`However the transmission process is standardized as it's based on HTTP/2`

`Existing repository with current RFC-proposals (https://github.com/grpc/proposal)`

#### Timeline

`First release - 2016`

### 10. HTTP/3

`Established in general - Bad support`

#### Existing Implementations

`Some first projects already exist on GitHub but of course more can be expected once HTTP/3`
`becomes an official standard`
`https://github.com/quicwg/base-drafts/wiki/Implementations`

#### Existence of documentation and Quality

`At the moment, little real documentation is available.`
`This is the first attempt to create an open documentation:`
`https://github.com/bagder/http3-explained | https://daniel.haxx.se/http3-explained/`

#### Supported devices and Operating systems

`As HTTP/3 is not officially a standard yet, no official information is currently available.`
`But it can be expected to support the same variety of devices also HTTP/2 and QUIC currently support.`
`However, moving form TCP to UDP will require more changes than just software upgrades but also modifications`
`how load balancing is done.`
`(https://thenewstack.io/http-3-replaces-tcp-with-udp-to-boost-network-speed-reliability/)`

#### Standardisation

`Currently for http/3 only exists an IETF draft: https://datatracker.ietf.org/doc/draft-ietf-quic-http/`

`HTTP/3 is basically HTTP/2 based on UDP and QUIC and with a direct integration of TLS instead of using TCP`
`in the transport layer and TLS in the security layer.`

### Timeline

`IETF Draft - Number 24, November 2019`

### 11. LWM2M

`Established in general - Good support`

#### Existing Implementations

`https://github.com/OpenMobileAlliance/OMA_LwM2M_for_Developers/wiki/LwM2M-Open-Source-Code`

#### Existence of documentation and Quality

`High quality documentation is available.`
`http://www.openmobilealliance.org/release/LightweightM2M/Lightweight_Machine_to_Machine-v1_1-OMASpecworks.pdf`

`https://www.omaspecworks.org/category/blog/`

`https://github.com/OpenMobileAlliance/OMA_LwM2M_for_Developers`

#### Supported devices and Operating systems

`As LWM2M is a M2M protocol based on CoAP, it is particularly designed to support memory constrained devices.`

#### Standardisation

`http://www.openmobilealliance.org/release/LightweightM2M/V1_0-20170208-A/OMA-TS-LightweightM2M-V1_0-20170208-A.pdf`

`http://www.openmobilealliance.org/release/LightweightM2M/V1_1-20180710-A/`
`OMA-TS-LightweightM2M_Core-V1_1-20180710-A.pdf`

#### Timeline

`First Release - 2014`

`Standardisation - 2017`

`Current Version -1.1`

### 12. WebRTC

`Established in general - Good support`

#### Existing Implementations

`Implementations are currently strongly evolving, Mozilla recommends using its adapter:`
`https://developer.mozilla.org/en-US/docs/Web/API/WebRTC_API`

`https://www.onsip.com/voip-resources/voip-fundamentals/webrtc-implementation (VoIP solution)`

`https://github.com/aiortc/aiortc (Python implementation)`

#### Existence of documentation and Quality

`https://webrtc.org/start/ (Official site with further references)`

`https://internetofthingsagenda.techtarget.com/blog/IoT-Agenda`
`New-Business-Opportunities-Of-Using-WebRTC-For-The-Internet-Of-Things (IoT use cases)`

`https://www.callstats.io/blog/2015/06/22/iot-webrtc-enabling-connections-between-smart-devices`

`https://www.pubnub.com/blog/webrtc-and-iot-devices-not-another-talking-heads-app/`

#### Supported devices and Operating systems

`https://wpt.fyi/results/webrtc?label=experimental&label=master&aligned (list with supported browser)`

#### Standardisation

`https://www.w3.org/TR/webrtc/`

#### Timeline

`First release - 2011`

`Standardisation - 2018`

`Current Version - 1.0 (Standardised in 2018)`

### 13. XMPP

`Established in general - Bad support`

#### Existing Implementations

`https://de.wikipedia.org/wiki/Liste_von_XMPP-Server-Software`

`https://github.com/joachimlindborg/XMPP-IoT`
`(repository with IoT solutions maintained by the XSF foundation)`

#### Existence of documentation and Quality

`As XMPP has a long history of being used as the standard messaging protocol`
`in general, there exists an extensive amount of documentation.`

`https://www.xmpp-iot.org/`

`https://wiki.xmpp.org/web/Tech_pages/IoT_systems`

`https://wiki.xmpp.org/web/Tech_pages/IoT_XepsExplained`

`https://www.springerprofessional.de/` `xmpp-based-infrastructure-for-iot-network-management-and-rapid-s/13290474`

#### Supported devices and Operating systems

`No specific constraints but one has to keep in mind XMPP has more overhead`
`as it incorporates XML-based messages.`

#### Standardisation

`https://xmpp.org/rfcs/rfc6120.html`

#### Timeline

`First release - 1999 as Jabberd Server`

`Standardisation - 2004`

`Current Version - XEF-001`

_
