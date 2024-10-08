#ifndef _STREAM_GUARD_HPP
#define _STREAM_GUARD_HPP

#include <iostream>

namespace tchervinsky
{
  class StreamGuard
  {
  public:
    explicit StreamGuard(std::basic_ios<char> &s);
    ~StreamGuard();
  private:
    std::basic_ios<char> &s_;
    std::streamsize precision_;
    std::basic_ios<char>::fmtflags flags_;
  };
}
#endif // _STREAM_GUARD_HPP
