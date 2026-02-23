# Centrifugal Pump Simulator 🔧

A C++ simulator that calculates the hydraulic and shaft power of a centrifugal pump based on user-defined operating conditions.

Built as part of my journey combining Mechanical Engineering studies with software development.

## Physics Behind It

The program uses the following formulas:

**Hydraulic Power:**
P_hyd = ρ × g × Q × H

**Shaft Power:**
P_shaft = P_hyd / η

Where:
- ρ = fluid density (kg/m³)
- g = 9.81 m/s²
- Q = flow rate (m³/s)
- H = head (m)
- η = pump efficiency (0–1)

## Features
- Object-oriented design (Pump class)
- Input validation
- Console-based interface

## Build & Run

Compile:
g++ Pumps_v1.cpp pump.cpp -o pump

Run:
./pump

## Example

Input:
Flow rate: 50 m³/h
Head: 30 m
Efficiency: 0.75

Output:
Hydraulic Power: 4.09 kW
Shaft Power: 5.45 kW

## Tech Stack
- Language: C++
- Paradigm: Object-Oriented Programming (OOP)
