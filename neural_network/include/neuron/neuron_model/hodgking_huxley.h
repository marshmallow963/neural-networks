#ifndef HODGKING_HUXLEY_H
#define HODGKING_HUXLEY_H

typedef struct {
  double gNa, gK, gL;
  double eNa, eK, eL;
  double cM;
} HodgkingHuxleyParams;

typedef struct {
  double mGate, hGate, nGate;
  double v, iExt, iSyn;
  double iNa, ik, iL;
} HodgkingHuxleyState;

typedef struct {
  HodgkingHuxleyParams *params;
  HodgkingHuxleyState *state;
} HodgkingHuxleyNeuron;

// Ionic gates in steady state
double M_inf(double voltage);
double H_inf(double voltage);
double N_inf(double voltage);

// Initialization functions
// The neuron is inicialized with its resting potential
void InitHodgkingHuxleyParams(HodgkingHuxleyParams *params);
void InitHodgkingHuxleyState(HodgkingHuxleyState *state);
void InitHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron);

void HodgkingHuxleyequations(void *modelNeuron, const double *stateVetcor, double *derivative);
void UpdateHodgkingHuxleyNeuron(HodgkingHuxleyNeuron *neuron, double *currents, double dt);

void GetHodgkingHuxleyNeuronIonicCurrets(const HodgkingHuxleyNeuron *neuron, double *ionicCurrents);
void GetHodgkingHuxleyNeuronIonicGates(const HodgkingHuxleyNeuron *neuron, double *gates);
void GetHodgkingHuxleyNeuronVoltage(const HodgkingHuxleyNeuron *neuron, double *voltage);

void DestroyNeuron(HodgkingHuxleyNeuron *neuron);

#endif // HODGKING_HUXLEY_H
