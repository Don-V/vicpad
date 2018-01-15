#include <cstdint>

namespace utils {
  class unint {
    uint64_t i;
  public:
    unint(int64_t n);
    unint(const unint& n);
    unint& operator--();
    unint operator--(int);
    unint& operator++();
    unint operator++(int);
    unint operator+(const unint& n) const;
    unint operator-(const unint& n) const;
    uint64_t value() const;
  };
}