// Library for underlying chaos strategies of Phoenix
// Developed by Fcorleone at 2022-11-14

#pragma once
#include <vector> 
#include <string>
#include "PhoenixHookPosition.h"
#include <ctime>
using namespace std;

// Signals that tell all the nodes how to act
enum Signal{
    RANDOMCHAOS, // this is the normal mode of phoenix, just randomly choose a chaos strategy.
    STOPCHAOS, // node under this mode will not perform any chaos testing
    DEFINITELYCHAOS, // node under this mode will perform chaos for 100% percent
    READY, // the hook position is ready for reproduction
    WAITING, // the hook position is still waiting for ready for reproduction
};

// Network related stategies
void network_delay(int duration, int offset, string net_interface, int port, string node_id, HookPosition hookPosition);

void network_drop_packets(int percent, string net_interface, int port, string node_id, HookPosition hookPosition);

void network_duplicate_packets(int correlation, int percent, string net_interface, int port, string node_id, HookPosition hookPosition);

void network_corrupt_packets(int percent, string net_interface, int port, string node_id, HookPosition hookPosition);

bool stop_chaos_blade_strategy(string chaos_id);

std::string readReproductionSignal(string node_id, HookPosition hookPosition);

void writeReproduceSignal(string node_id, HookPosition hookPosition, Signal signal);

std::string executeCMD(const char *cmd);

// write the strategy info into a file
void writeStrategy(string info_file, long int timeStamp, string node_id, HookPosition hookPosition, string strategy_id, string exec_cmd);

void writeIdToPool(string pool_file, string node_id);

int getProbability();

void randomNetworkChaos(int p2pPort, string node_id, HookPosition hookPosition);