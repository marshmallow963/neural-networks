#ifndef IZHIKEVICH_H
#define IZHIKEVICH_H

typedef enum {
  // Excitatory
    IntrinsicallyBursting,
    RegularSpiking,
    FastSpiking,
    // Inhibitory
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
  double iSyn; // Synaptic current
  double v; // Membrane potentail
  double u; // recovery variable
} IzhikevichNeuronState;

typedef struct {
  IzhikevichNeuronParams *params;
  IzhikevichNeuronState *state;
  IzhikevichNeuronType type;
} IzhikevichNeuron;

// The neuron is inicialized with its resting potential
void InitIzhikevichNeuronParams(IzhikevichNeuronParams *params, IzhikevichNeuronType type);
void InitIzhikevichNeuronState(const IzhikevichNeuronParams *params, IzhikevichNeuronState *state, IzhikevichNeuronType type);
void InitIzhikevichNeuron(IzhikevichNeuron *neuron, IzhikevichNeuronType type);

void IzhikevichNeuronEquations(const double *stateVector, void *neuronModel, void *derivative);
void UpdateIzhikevichNeuron(IzhikevichNeuron *neuron, double *currents, double dt);

void GetIzhikevichneuronRecovery(const IzhikevichNeuron *neuron, double *recovery);
void GetIzhikevichNeuronVoltage(const IzhikevichNeuron *neuron, double *voltage);

void DestroyNeuron(IzhikevichNeuron *neuron);

#endif // IZHIKEVICH_H
