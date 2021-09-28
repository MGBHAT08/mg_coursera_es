# Protocols overview

## MQTT

- Current Version
    `3.1.1 in usage`

    `5.0-Standardised but not in commercial use`

- Target layer
    `Session/Application`

- Maximum Packet Size
    `256 MB`

- Header Size
    `Minimum 2 bytes, maximum 4 bytes`

- Security
    `In-built: Authentication`
    `Externally configurable: Encryption,TLS`

- Organisational Support
    `IBM, Facebook, Eurotech, Cisco, Red Hat, Software AG, Tibco, ITSO`
    `M2Mi, Amazon Web Services (AWS), InduSoft, Fiorano, Open Stack upstream`

- Other Comments `Latency is configurable based on QoS`

## AMQP

- Current Version
    `1.0`

- Target layer
    `Application`

- Maximum Packet Size
    `[Dataoffset(minimum 2) * 4] bytes + data (Theoretically Infinite)`

- Header Size
    `Minimum 8 bytes`

- Security
    `In-built: None`
    `Externally configurable: Encryption, TLS, SASL`

- Organisational Support
    `Microsoft , JP Morgan, Bank of America, Barclays, Goldman Sachs, Credit Suisse, RabbitMQ, Azure qpid`

- Other Comments
    `Community and support maybe an issue,complex implementation,`
    `latency is based on number of brokers`

## DDS

- Current Version
    `1.4`, `OpenDDS API`

- Target layer
    `Application`

- Maximum Packet Size
    `56 bytes + data (Theoretically Infinite)`

- Header Size
    `Minimum 56 bytes`

- Security
    `In-built: None`
    `Externally configurable: Encryption, TLS, SASL, Authentication`

- Organisational Support
    `Not commercial yet, miliatry usage of forked versions`

- Other Comments
    `Concept of privilege levels, Deadline`

## QUIC

- Current Version
    `Self-defined, configurable`

- Target layer
    `Transport`

- Maximum Packet Size
    `The recommended default maximum packet size is 1350 bytes for IPv6 and 1370 bytes for IPv4`

- Header Size
    `Same as UDP, 8 bytes`

- Security
    `In-built: Encryption and Authentication`
    `Externally configurable: Encryption`

- Organisational Support
    `Chrome, Microsoft, Mozilla, Telecom Italia`

- Other Comments
    `Eliminates the lag of TCP, Eliminates need of encryption certificates`

## SCTP

- Current Version
    `multiple in use: 7.0, 11.0`

- Target layer
    `Transport`

- Maximum Packet Size
    `64 Kbytes per Chunk`

- Header Size
    `16 bytes`

- Security
    `In-built: 4-way TLS`
    `Externally configurable: Encryption`

- Organisational Support
    `FreeBSD`

- Other Comments
    `Concept of Multi-Homing`

## OPC UA

- Current Version
    `1.0.4`

- Target layer
    `Application`

- Maximum Packet Size
    `Not limited`

- Header Size
    `60 bytes - 340 bytes depending on payload`

- Security
    `Authentication and authorization, encryption and data integrity via signatures`

- Organisational Support
    `Siemens, Fraunhofer...`

- Other Comments
    `Very high complexity, developed by the OPC Foundation`

## CoAP

- Current Version
    `RFC7252 (2014)` extended by `RFC8323 (CoAP over TCP, TLS, and WebSockets) (2018)` and `RFC8613 Object Security for Constrained RESTful Environments (OSCORE) (2019)`

- Target layer
    `Application`

- Maximum Packet Size
    `it SHOULD fit within a single IP packet to avoid IP fragmentation (MTU of 1280 for IPv6)`
    `If nothing is known about the size of the headers,`
    `good upper bounds are 1152 bytes for the message size and 1024 bytes for the payload size`

- Header Size
    `Fixed size of 4 bytes`

- Security
    `In-built: DTLS-option (TLS over UDP with features to deal with uncertainty of UDP)` + `option for DDoS securing but often not implemented in practice` + `Object Security for Constrained RESTful Environments (OSCORE)`;

    `Externally configurable: HTTP-to-CoAP proxy`

- Organisational Support
    `Large Web Community Support, Cisco, Contiki, Erika, IoTivity`

- Other Comments
    `Designed to work on microcontrollers with as low as 10 KiB of RAM and 100 KiB of code space`

    `Supports multicast UDP`

## XMPP

- Current Version
    `XEF-001`

- Target layer
    `Application`

- Maximum Packet Size
    `Defined by Server (Theoretically Infinite)`

- Header Size
    `Configurable, Compressible`

- Security
    `In-built: End-to-End Encryption`
    `Externally configurable: Encryption, TLS, SASL`

- Organisational Support
    `Whatsapp, Jabber`

- Other Comments
    `True Real-Time`

## LWM2M

- Current Version
    `1.1 (2019)`

- Target layer
    `Application`

- Maximum Packet Size
    `See CoAP`

- Header Size
    `See CoAP`

- Security
    `In-built: End-to-end security using CoAP's Object Security for Constrained RESTful Environments (OSCORE)`;

    `Certificates, Pre shared key, Public Raw Key, PKI deployments`

- Organisational Support
    `No public available information.`

- Other Comments
    `Suitable for low powered battery devices because of its low client footprint`

    `Designed for constrained devices (< 20kB RAM)`

    `Device management protocol on top of CoAP`

    `Transport-agnostic design that supports UDP, TCP, SMS`

    `Increased bandwidth efficiency based on COAP bandwidth optimization`

    `Developer toolkit for application development`

## WebRTC

- Current Version
    `1.0 (May 2018)`

- Target layer
    `Application`

- Maximum Packet Size
    `1280 bytes`

- Header Size
    `~120 bytes`

- Security
    `Transport layer security / SSL / end-to-end`

- Organisational Support
    `Google Meet, Facebook Messenger, Discord...`

- Other Comments
    `Streaming protocol with the lowest latency (sub 1 second), uses UDP on default, open source`

## HTTP/3

- Current Version
    `3.0`

- Maximum Target layer
    `Application`

- Packet Size
    `Configurable`

- Header Size
    `configurable`

- Security
    `in-built: Certification`
    `Externally configurable: Encryption`

- Organisational Support
    `Google`

- Other Comments
    `Created in sync to latest developments of QUIC`

## gRPC

gRPC is in fact not a protocol but a framework for efficient message transmission. On the basis of an Interface Definition Language (IDL)called Protobuffers, the message is directly serialized to binary data and is transmitted using HTTP/2. Originally, invented by Google gRPC is now open source and very well supported. gRPC can be considered as an alternative to a REST or GraphQL API.

## Honorable mentions

Other device- or use case specific or exotic protocols

- TCP/UPD hydrids (at least 5)
- TR-069 (Mobile device management, XML/SOAP based)
- RTSP (Real time streaming protocol) / RTMP (Real time messaging protocol)
- SIP (lower layer for XMPP)
- MQTT-SN (MQTT "light")
- SMQTT (Secure MQTT)

## Summary

.. image:: ../uploads/protocols_chart.png
    :target: ../../_images/protocols_chart.png

_
