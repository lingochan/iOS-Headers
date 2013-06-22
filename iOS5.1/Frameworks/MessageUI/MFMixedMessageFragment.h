/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface MFMixedMessageFragment : NSObject
{
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;
- (id)markupString;
- (id)markupData;
- (id)mimeType;
- (id)encodingName;
- (id)baseURL;
- (id)description;
- (void)dealloc;

@end

