package com.fastjsilib;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.module.annotations.ReactModule;

@ReactModule(name = FastJsiLibModule.NAME)
public class FastJsiLibModule extends ReactContextBaseJavaModule {
  public static final String NAME = "FastJsiLib";

  public FastJsiLibModule(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  @NonNull
  public String getName() {
    return NAME;
  }

  static {
    System.loadLibrary("cpp");
  }

  private static native void initialize(long jsiPtr, String docDir);

  @ReactMethod(isBlockingSynchronousMethod = true)
  public boolean install() {
    try {
      System.loadLibrary("cpp");
      ReactApplicationContext context = getReactApplicationContext();
      initialize(
        context.getJavaScriptContextHolder().get(),
        context.getFilesDir().getAbsolutePath()
      );
      return true;
    } catch (Exception exception) {
      return false;
    }
  }
}
