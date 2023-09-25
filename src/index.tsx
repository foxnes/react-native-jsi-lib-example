import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package 'react-native-fast-jsi-lib' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

const FastJsiLib = NativeModules.FastJsiLib
  ? NativeModules.FastJsiLib
  : new Proxy(
    {},
    {
      get() {
        throw new Error(LINKING_ERROR);
      },
    }
  );

FastJsiLib.install();

declare global {
  var testFcn: () => 0;
};

export function testFcn() {
  console.log("js got: " + global.testFcn());
}