# Vibraguard – Real-Time Vibration Analysis System

## Overview
Vibraguard is an embedded system designed for real-time vibration monitoring and anomaly detection in industrial machinery. The goal is to identify abnormal vibration patterns and enable predictive maintenance using intelligent edge processing.

## Key Features
- Real-time vibration data acquisition using sensors  
- Register-level programming on STM32 for optimized performance  
- FreeRTOS-based task scheduling for deterministic real-time execution  
- Signal processing for anomaly detection  
- TinyML integration for on-device intelligent fault classification  

## System Architecture
The system is built on an STM32 microcontroller, where vibration data is continuously sampled and processed in real time. FreeRTOS is used to manage tasks such as data acquisition, processing, and communication efficiently.

## Tech Stack
- Microcontroller: STM32 (Blue Pill)
- Programming: Embedded C (Register-Level)  
- RTOS: FreeRTOS  
- Machine Learning: TinyML (TensorFlow Lite / Edge Impulse)  
- Tools: STM32CubeIDE  

## Current Status
Project under active development  
- Sensor interfacing in progress  
- Data acquisition and processing pipeline under development  
- TinyML model integration ongoing  

## Future Work
- Real-time anomaly classification  
- Cloud dashboard integration  
- Edge optimization for low-power deployment  

## Author
Sachin Narendra
