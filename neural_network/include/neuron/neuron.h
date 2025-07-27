#ifndef NEURON_H
#define NEURON_H

#include "neuron_model/hodgking_huxley_neuron.h"
#include "neuron_model/izhikevich_neuron.h"

#include "structure.h"

void CreateNeuron(NeuronType type, Neuron *neuron, int id);
void UpdateNeuron(Neuron *neuron, double I, double dt);
void GetNeuronVoltage(const Neuron *neuron, double *voltage);
void DestroyNeuron(Neuron *neuron);

#endif // NEURON_H
