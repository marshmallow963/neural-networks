#ifndef NEURON_STRUCTURE_H
#define NEURON_STRUCTURE_H

/* --- Neuron Structure for Hodgking-Huxley Neuron Model --- */

typedef struct {
  double gNa, gK, gL;
  double eNa, eK, eL;
  double mC;
} HodgkingHuxleyNeuronParams;

typedef struct {
  double mGate, hGate, nGate;
	double v, iExt, iSyn;
	double iNa, iK, iL;
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
  double a;
  double b
  double c; 
  double d;
} IzhikevichNeuronParams;

typedef struct {
    double iExt, iSyn;
    double v, u;
} IzhikevichNeuronState;

typedef struct {
    IzhikevichParams *params;
    IzhikevichState *state;
    IzhikevichType type;
} IzhikevichNeuron;

#endif // NEURON_STRUCTURE_H
