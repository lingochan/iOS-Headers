/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PrintKit/PKPrinter.h>

@class NSDictionary, NSNumber, NSString;

@interface PKPrinter (PKPrinterPrivate)
- (struct ipp_s *)getPrinterAttributes;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
@property int accessState;
- (void)updateType;
- (void)setAccessStateFromTXT:(id)arg1;
@property(retain) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property(retain) NSString *hostname; // @dynamic hostname;
@property(retain) NSNumber *port; // @dynamic port;
@property(readonly, retain) NSString *scheme;
- (void)resolve;
- (BOOL)resolveWithTimeout:(int)arg1;
- (struct ipp_s *)newMediaColFromPaper:(id)arg1 Source:(id)arg2 Type:(id)arg3 DoMargins:(BOOL)arg4;
- (struct ipp_s *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (int)finalizeJob:(int)arg1;
- (id)localName;
- (id)privateObjectForKey:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
@end

