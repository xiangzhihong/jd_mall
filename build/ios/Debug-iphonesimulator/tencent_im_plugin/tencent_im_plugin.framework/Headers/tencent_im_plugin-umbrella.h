#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TencentImPlugin.h"

FOUNDATION_EXPORT double tencent_im_pluginVersionNumber;
FOUNDATION_EXPORT const unsigned char tencent_im_pluginVersionString[];

