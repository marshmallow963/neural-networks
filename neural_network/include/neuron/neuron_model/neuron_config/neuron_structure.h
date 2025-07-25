#ifndef NEURON_STRUCTURE_H
#define NEURON_STRUCTURE_H

/* --- Neuron Structure for Hodgking-Huxley Neuron Model --- */

typedef struct {
	double eK;  // Equilibrium potential for potassium current
	double gK;  // Conductancy for potassium current
	double eNa; // Equilibrium potential for sodium current
    double gNa; // Conductancy for sodium current
	double ek;  // Equilibrium potential for leak current
	double gL;  // Conductancy for leak current
    double mC;  // Membrane capacitancy
} HodgkingHuxleyNeuronParams;

typedef struct {
	double mGate; // Sodium activation
	double hGate; // Sodium inactivation
	double nGate; // Potassium activation
  	double iNa;	  // Sodium current
	double iK;    // Potassium current
	double iL;	  // Leak current
	double iExt;  // External current
	double iSyn;  // synaptic current
	double v; 	  // Voltage 
} HodgkingHuxleyNeuronState;

typedef struct {
	HodgkingHuxleyParams *params;
	HodgkingHuxleyState *state;
} HodgkingHuxleyNeuron;

/* --- Neuron Structure for Izhikevich Neuron Model --- */

typedef enum {
	// Neuron Excitatory
	IntrinsicallyBursting,
	RegularSpiking,
	FastSpiking,
	// Neuron Inhibitory
	LowThresholdSpiking,
	ThalamoCortical
} IzhikevichNeuronType;

typedef struct {
	double a; // Membrane potential recovery after spike 
	double b; // Sensitivity of the recovery variable 'u'
	double c; // Membrane potential reset value
	double d; // Recovery variable reset value
} IzhikevichNeuronParams;

typedef struct {
	double iExt; // External current
	double iSyn; // Synaptic Current
	double v; 	 // Voltage
	double u;	 // Recovery variable
} IzhikevichNeuronState;

typedef struct {
    IzhikevichParams *params;
	IzhikevichState *state;
	IzhikevichType type;
} IzhikevichNeuron;

#endif // NEURON_STRUCTURE_H
