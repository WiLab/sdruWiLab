#include <tmwtypes.h>
#include <mutex>
#include <queue>

extern std::mutex mtx;
extern std::mutex mtx2;
extern std::mutex mtx3;

extern std::queue<creal_T*> rx2txQueueData;
extern std::queue<float*> usrp2findframe;
extern std::queue<float*> findframe2processframe;
extern std::queue<boolean_T*> rx2txQueueDataDecode;

void add2q(float *output);
void get2q(float *input );


