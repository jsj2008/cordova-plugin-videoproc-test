//
//  GLModel.h
//  HelloCordova
//
//  Created by 管伟东 on 16/7/15.
//
//

#import <Foundation/Foundation.h>

@interface GLModel : NSObject
@property (nonatomic ,assign)GLuint glPrograme;
@property (nonatomic ,assign)GLuint glPositionSlot;
@property (nonatomic ,assign)GLuint glTextureSlot ;
@property (nonatomic ,assign)GLuint sampleSlot ;
@property (nonatomic ,assign)CVOpenGLESTextureRef texture;
@property (nonatomic ,assign)CVPixelBufferRef     pixelBuffer ; 
@end
