#include <napi.h>

Napi::Value sayHello(Napi::CallbackInfo const& info) {
  Napi::Env env = info.Env();
  Napi::EscapableHandleScope scope(env);
  return scope.Escape(Napi::String::New(env, "hello! hello!"));
}

Napi::Object initialize(Napi::Env env, Napi::Object exports) {
    exports.Set("hello", Napi::Function::New(env, sayHello));
    return exports;
}

NODE_API_MODULE(cxx_example, initialize)
