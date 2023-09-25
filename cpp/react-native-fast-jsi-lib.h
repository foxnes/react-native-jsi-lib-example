#ifndef FASTJSILIB_H
#define FASTJSILIB_H

#include <jsi/jsilib.h>
#include <jsi/jsi.h>


using namespace facebook;

namespace fastjsilib {
    void install(jsi::Runtime& jsiRuntime);
}

#endif /* FASTJSILIB_H */
