/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface MCProfile : NSObject
{
    NSString *_displayName;
    NSString *_profileDescription;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    int _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    BOOL _encrypted;
    BOOL _isLocked;
    NSString *_removalPasscode;
    BOOL _needsReboot;
    BOOL _isStub;
    NSString *_productBuildVersion;
    NSString *_productVersion;
    NSData *_profileData;
    int _trustLevel;
    BOOL _trustHasBeenEvaluated;
    struct dispatch_queue_s *_trustEvaluationQueue;
    NSString *_signerSummary;
    NSArray *_signerCertificates;
    BOOL _signerHasBeenEvaluated;
    struct dispatch_queue_s *_signerEvaluationQueue;
    NSDictionary *_context;
}

+ (id)profileWithData:(id)arg1 outError:(id *)arg2;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id *)arg3;
+ (id)profileWithData:(id)arg1 context:(id)arg2 outError:(id *)arg3;
+ (id)profileWithData:(id)arg1 context:(id)arg2 fileName:(id)arg3 outError:(id *)arg4;
+ (int)_evaluateSignerTrust:(struct __SecTrust *)arg1;
+ (int)_evaluateCertificateChain:(id)arg1;
@property(readonly) int trustLevel;
- (void)__evaluateSignerCertificates;
@property(readonly) struct __SecCertificate *signerCertificate;
@property(retain) NSArray *signerCertificates;
@property(retain) NSString *signerSummary;
@property(readonly) NSArray *installationWarnings;
@property(readonly) NSArray *payloads;
- (id)payloadWithUUID:(id)arg1;
@property(readonly) BOOL isSigned;
- (void)dealloc;
@property(readonly) NSString *friendlyName;
- (id)description;
@property(readonly) NSArray *localizedPayloadSummaryByType;
@property(readonly) NSDate *earliestCertificateExpiryDate;
@property(readonly) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly) BOOL isManagedByProfileService;
- (void)evaluateSignerTrust;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)arg1;
@property(retain) NSDictionary *context; // @synthesize context=_context;
@property(retain) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) BOOL isStub; // @synthesize isStub=_isStub;
@property(readonly) BOOL needsReboot; // @synthesize needsReboot=_needsReboot;
@property(readonly) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
@property(getter=isLocked) BOOL locked; // @synthesize locked=_isLocked;
@property(retain) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly) int version; // @synthesize version=_version;
@property(readonly) NSString *organization; // @synthesize organization=_organization;
@property(getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;

@end

