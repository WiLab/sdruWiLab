#include <tmwtypes.h>
#include <mutex>
#include <queue>

std::mutex mtx;
std::mutex mtx2;

std::queue<double*> rx2txQueueData;
std::queue<boolean_T*> rx2txQueueDataDecode;

double GetUSRPData();