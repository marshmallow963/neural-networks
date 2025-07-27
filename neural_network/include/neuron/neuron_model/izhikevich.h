#ifndef IZHIKEVICH_H
#define IZHIKEVICH_H

#define "neuron_Structure/izhikevich_neuron_structure.h"

void InitIzhikevichNeuronParams(IzhikevichNeuronParams *params, IzhikevichNeuronType type);
void InitIzhikevichNeuronState(const IzhikevichNeuronParams *params, IzhikevichNeuronState *state, IzhikevichNeuronType type);
void InitIzhikevichNeuron(IzhikevichNeuron *neuron, IzhikevichNeuronType type);

void IzhikevichNeuronEquations(const double *stateVector, void *neuronModel, void *derivative);
void UpdateIzhikevichNeuron(IzhikevichNeuron *neuron, double I, double dt);

void GetIzhikevichneuronRecovery(const IzhikevichNeuron *neuron, double *recovery);
void GetIzhikevichNeuronVoltage(const IzhikevichNeuron *neuron, double *voltage);

void DestroyNeuron(IzhikevichNeuron *neuron);

#endif // IZHIKEVICH_H
