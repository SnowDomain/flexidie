/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ApiRunner.h"

#import "FBRequestDelegate-Protocol.h"
#import "PhotoUploaderDelegate-Protocol.h"
#import "ThreadFetcherDelegate-Protocol.h"

@class FBMThread, NSObject<MessageSenderDelegate>, PhotoUploader, ThreadFetcher, ThreadMessage;

@interface MessageSender : ApiRunner <FBRequestDelegate, PhotoUploaderDelegate, ThreadFetcherDelegate>
{
    FBMThread *_thread;
    ThreadMessage *_message;
    PhotoUploader *_photoUploader;
    ThreadFetcher *_threadFetcher;
    NSObject<MessageSenderDelegate> *_delegate;
}

@property(readonly, nonatomic) ThreadMessage *message; // @synthesize message=_message;
@property(nonatomic) NSObject<MessageSenderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)threadFetcher:(id)arg1 thread:(id)arg2 couldNotFetchThread:(id)arg3;
- (void)threadFetcher:(id)arg1 didFetchThread:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)couldNotUploadPhoto:(id)arg1;
- (void)didUploadPhoto:(id)arg1;
- (void)doCancel;
- (void)doSend;
- (void)didFailWithError:(id)arg1;
- (void)didSucceed;
- (void)fetchThread;
- (void)sendMessage;
- (void)uploadPhoto:(id)arg1;
- (void)dealloc;
- (id)initWithThread:(id)arg1 message:(id)arg2 delegate:(id)arg3;

@end
