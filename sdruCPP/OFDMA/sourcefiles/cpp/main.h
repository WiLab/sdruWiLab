#include <tmwtypes.h>
#include <mutex>
#include <queue>
#include <condition_variable>

// Create Mutex
extern std::mutex mtx;
extern std::mutex mtx2;
extern std::mutex mtx3;

extern std::queue<creal_T*> rx2txQueueData;
extern std::queue<creal_T*> usrp2FindtheFrameQueue;
extern std::queue<boolean_T*> rx2txQueueDataDecode;

// Create Conditional
extern std::condition_variable cond;
extern std::condition_variable cond2;
extern std::condition_variable cond3;

void add2q(creal_T *output);
//void get2q(creal_T *input );
