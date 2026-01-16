#ifndef PUMP_H
#define PUMP_H

class Pump
{
	public:
		// Constructor
		Pump(double in_flow_rate, double in_head, double in_efficiency);
		// Setters and Getters
		void set_flow_rate(double in_flow_rate);	// Flow Rate
		double get_flow_rate() const;
		void set_head(double in_head);				// Head
		double get_head() const;
		void set_efficiency(double in_efficiency);	// Efficiency
		double get_efficiency() const;
		// Methods
		double hydraulic_power() const;
		double shaft_power() const;

	private:
		double flow_rate;
		double head;
		double efficiency;
};

#endif
