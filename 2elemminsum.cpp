#define LIB_EXPORT

#include "2elemminsum.h"
#include <cstdlib>
#include <vector>
#include <algorithm>

std::vector<int> twoElementsWithMinSum(std::vector<int> v) {
    std::vector<int> result;
    std::sort(v.begin(),v.end());
    result.push_back(v[0]);
    result.push_back(v[1]);
    return result;
}
