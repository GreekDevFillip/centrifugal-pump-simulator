#include <iostream>
#include "pump.h"


// Constructor
Pump::Pump(double in_flow_rate, double in_head, double in_efficiency)
{
	flow_rate = in_flow_rate;
	head = in_head;
	efficiency = in_efficiency;
}
// Setters and Getters
void Pump::set_flow_rate(double in_flow_rate)
{
	flow_rate = in_flow_rate;
}
double Pump::get_flow_rate() const
{
	return flow_rate;
}
void Pump::set_head(double in_head)
{
	head = in_head;
}
double Pump::get_head() const
{
	return head;
}
void Pump::set_efficiency(double in_efficiency)
{
	efficiency = in_efficiency;
}
double Pump::get_efficiency() const
{
	return efficiency;
}
// Methods
double Pump::hydraulic_power() const
{
	static constexpr double g = 9.81;
	static constexpr double p_water = 1000.0;
	return g * p_water * (flow_rate / 3600) * head;
}
double Pump::shaft_power() const
{
	return hydraulic_power() / efficiency;
}
