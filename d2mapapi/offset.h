#include <cstdint>

namespace d2mapapi {

bool defineOffsets();
uint32_t getDllOffset(int num);
uint32_t getDllOffset(char *DllName, int Offset);

}
