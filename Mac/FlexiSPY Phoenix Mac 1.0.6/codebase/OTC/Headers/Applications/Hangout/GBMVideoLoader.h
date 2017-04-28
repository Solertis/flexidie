/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class GBMVideo, NSString, NSURL;

@interface GBMVideoLoader : NSObject
{
    //id <GBMGPlusClient> plusClient_;
    NSString *ownerId_;
    NSString *photoId_;
    NSURL *thumbnailURL_;
    GBMVideo *video_;
    int videoWidth_;
    int videoHeight_;
}

@property(readonly, nonatomic) int videoHeight; // @synthesize videoHeight=videoHeight_;
@property(readonly, nonatomic) int videoWidth; // @synthesize videoWidth=videoWidth_;
@property(retain, nonatomic) GBMVideo *video; // @synthesize video=video_;
//- (void).cxx_destruct;
- (id)fetchVideoWithCompletionHandler:(id)arg1;
@property(readonly, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=thumbnailURL_;
- (id)initWithPlusClient:(id)arg1 ownerId:(id)arg2 photoId:(id)arg3 width:(int)arg4 height:(int)arg5 thumbnailURL:(id)arg6;
- (id)initWithVideo:(id)arg1;

@end
