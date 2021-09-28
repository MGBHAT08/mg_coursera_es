# Requirements

## General Requirements

- Production ready protocols
- General Safety and security concerns
- Minimal code footprint
- Use-case prioritization
- Legal issues, permissions
- Scalabilty in Number of connections (Macro-Scalabilty)
- Handling of dynamic cellular network environment

## Use Case Based Requirements

### Criteria for consideration

- Data size and type
- Transmission speed and latency
- Memory consumption
- Data criticality
- Data security
- Power consumption

### Use cases

1. Serial data stream

    - Data size and type

            Type - Location/GPS, Personalized location based suggestions\
            Size - A few Kilobits

    - Transmission speed and latency

            Update Frequency - 500ms to 1s, Soft-real time, Throw and forget

    - Memory consumption

            Low, Data stored is of the latest update only

    - Data criticality

            Medium

    - Data security

            Medium

    - Power consumption

            Low power per process, Overall medium power consumption

2. Event triggered datadump

    - Data size and type

            Type - data or video stream,typically diagnostics reports 
            and stored backend data

            Size - Megabits

    - Transmission speed and latency

            Irrelevant,not real-time data but acknowledgement required

    - Memory consumption

            Large on disk storage

    - Data criticality

            High, complete transmission without loss of any data

    - Data security

            Medium to High, Encryption might not be necessary

    - Power consumption

            Less frequent but significant power consumption

3. Safety critical remote control data

    - Data size and type

            Type - Vehicle remote control signals

            Size - A few Kilobits

    - Transmission speed and latency

            Update frequency - 10 to 100 ms,Hard real-time

    - Memory Consumption

            None, downlink data

    - Data Criticality

            Extreme

    - Data security

            High

    - Power Consumption

            Irrelevant, downlink

4. Video stream

    - Data size and type

            Type - Video conferencing

            Size - Of the order of Mbps

    - Transmission speed and latency

            Negotiable

    - Memory consumption

            Medium

    - Data criticality

            Medium

    - Data security

            Medium to high

    - Power consumption

            High power consumption,large processing

### Summary

.. image:: ../uploads/requirement_chart.png
    :target: ../../_images/requirement_chart.png

_
