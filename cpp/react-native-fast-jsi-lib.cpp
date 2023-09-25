#include "react-native-fast-jsi-lib.h"

void fastjsilib::install(jsi::Runtime &jsiRuntime) {
    auto testFcn = jsi::Function::createFromHostFunction(
            jsiRuntime,
            jsi::PropNameID::forAscii(jsiRuntime, "testFcn"),
            1,  // string
            [](jsi::Runtime& runtime, const jsi::Value& thisValue, const jsi::Value* arguments, size_t count) -> jsi::Value {
                std::string str;
                return jsi::Value(0);
            }
    );
    jsiRuntime.global().setProperty(jsiRuntime, "testFcn", std::move(testFcn));
}
