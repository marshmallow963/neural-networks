#ifndef NEURON_STRUCTURE_H
#define NEURON_STRUCTURE_H

/* --- Neuron Structure for Hodgking-Huxley Neuron Model --- */

typedef struct {
	double gNa; 	// Conductancy for sodium current
	double eNa; 	// Equilibrium potential for sodium current
	double gk;  	// Conductancy for potassium current
	double eK;  	// Equilibrium potential for potassium current
	double gL;  	// Conductancy for leak current
	double eL;  	// Equiulibrium potential for leak current
	double c;		// Membrane capacitancy
} HodgkingHuxleyNeuronParams;

typedef struct {
	double m;	 	// Sodium activation gate
	double h; 		// Sodium inactivation gate
	double n; 		// Potassium activation gate
	double iNa; 	// Sodium current
	double iK;		// Potassium current
	double iL;		// Leak current
	double iExt;	// External current
	double iSyn;	// Synaptic current
	double v;		// Membrane voltage
} HodgkingHuxleyNeuronState;

typedef struct {
	HodgkingHuxleyNeuronParams *params;
	HodgkingHuxleyNeuronState  *state;
} HodgkingHuxleyNeuron;

/* --- Neuron Structure for Izhikevich Neuron Model --- */

typedef enum {
	// Excitatory Neuron
	IntrinsicallyBursting,
	RegularSpiking,
	FastSpiking,
	// Inhibitory Neuron
	LowThresholdSpiking,
	ThalamoCortical
} IzhikevichNeuronType;

typedef struct {
	double a;		// Membrane potential recovery after spike
	double b;		// Sensitivity of the recovery variable 'u'
	double c;		// Membrane potential reset value
	double d;		// Recovery variable reset value
} IzhikevichNeuronParams;

typedef struct {
	double iExt;	// External current
	double iSyn;	// Synaptic current
	double u;		// Recovery variable
	double v;		// Membrane potential
} IzhikevichNeuronState;

typedef struct {
	IzhikevichNeuronParams *params;
	IzhikevichNeuronState  *state;
	IzhikevichNeuronType   type;
} IzhikevichNeuron;

#endif // NEURON_STRUCTURE_H
