//
//  Video_Const.h
//  HelloCordova
//
//  Created by 管伟东 on 16/7/14.
//
//

#ifndef Video_Const_h
#define Video_Const_h
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
typedef enum{
    kMediaType_unKnown=-1,
    kMediaType_Video,
    kMediaType_Audio,
    kMediaType_Picture,
    kMediaType_Text
}kMediaType;


/**
 *  调用一个block,会判断block不为空
 *
 *  @param block
 *  @param arg     block参数
 *
 *  @return void
 */
/**
 
 */
#define BlockCallWithOneArg(block,arg)  if(block){block(arg);}
#define BlockCallWithTwoArg(block,arg1,arg2) if(block){block(arg1,arg2);}
#define BlockCallWithThreeArg(block,arg1,arg2,arg3) if(block){block(arg1,arg2,arg3);}

/**
 *视频质量
 */
typedef enum {
    RSVideoLowQuality ,  //低质量
    RSVideoMediumQuality ,//中质量
    RSVideoHighestQuality //高质量
}RSVideoQuality;

/**
 *  WeakSelf 
 */
#define WeakSelf  __weak typeof(self)

#endif /* Video_Const_h */
