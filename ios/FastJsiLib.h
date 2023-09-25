#ifdef __cplusplus
#import "react-native-fast-jsi-lib.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNFastJsiLibSpec.h"

@interface FastJsiLib : NSObject <NativeFastJsiLibSpec>
#else
#import <React/RCTBridgeModule.h>

@interface FastJsiLib : NSObject <RCTBridgeModule>
#endif

@end
