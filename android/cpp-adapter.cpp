#include <jni.h>
#include "react-native-fast-jsi-lib.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_fastjsilib_FastJsiLibModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return fastjsilib::multiply(a, b);
}
