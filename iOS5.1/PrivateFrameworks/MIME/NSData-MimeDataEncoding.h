/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (MimeDataEncoding)
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64HeaderData;
@end

