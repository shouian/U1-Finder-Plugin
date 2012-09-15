// $ otool -L /System/Library/CoreServices/Finder.app/Contents/MacOS/Finder
// $ class-dump /System/Library/PrivateFrameworks/DiskImages.framework/Versions/A/DiskImages

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark -

/*
 * File: /System/Library/PrivateFrameworks/DiskImages.framework/Versions/A/DiskImages
 * UUID: 57A7E46A-5AA4-37FF-B19C-5337CCBCA0CA
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 331.3.0, Compatibility version: 1.0.8
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Supported
 */

@protocol DIHLHelperMasterProtocol
- (void)connectToFramework:(id)arg1;
- (void)reportResultsToFramework:(id)arg1;
- (int)frameworkCallbackWithDictionary:(id)arg1;
- (int)synchronousFrameworkCallbackWithDictionary:(id)arg1;
@end

// Not exported
/*@interface DIHelperProxy : NSObject <DIHLHelperMasterProtocol>
{
    void *_context;
    NSDictionary *_operation;
    void *_statusProc;
    NSConditionLock *_threadCondLock;
    int _threadResultsError;
    NSDictionary *_threadResultsDictionary;
    NSDistantObject<DIHLHelperSlaveProtocol> *_helper;
    NSString *_helperPath;
    NSConnection *_helperConnection;
    BOOL _helperRegistered;
    BOOL _helperDone;
    NSString *_serverName;
    struct AuthorizationOpaqueRef *_authorizationRef;
    NSTask *_helperTask;
    BOOL _withAuthentication;
}

- (id)initWithDictionary:(id)arg1 andStatusProc:(void *)arg2 andContext:(void *)arg3;
- (id)initWithDictionary:(id)arg1 andStatusProc:(void *)arg2 andContext:(void *)arg3 withAuthentication:(BOOL)arg4;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (void)dealloc;
- (void)finalize;
- (int)performOperationReturning:(id *)arg1;
- (id)helperToolPath;
- (int)authenticate;
- (BOOL)isAuthenticated;
- (int)authWithFlags:(unsigned int)arg1;
- (int)askForPassword;
- (void)connectToFramework:(id)arg1;
- (void)reportResultsToFramework:(id)arg1;
- (int)frameworkCallbackWithDictionary:(id)arg1;
- (int)synchronousFrameworkCallbackWithDictionary:(id)arg1;
- (void)sendOperationToHelper:(id)arg1;
- (void)disconnectFromHelper:(id)arg1;
- (void)workerThread:(id)arg1;
- (BOOL)threadSetupServer;
- (int)threadLaunchToolAuthenticated:(BOOL)arg1;
- (void)threadRunRunLoop;
- (void)helperDied:(id)arg1;
- (void)helperFailedToRegister;
- (void)helperConnectionDied:(id)arg1;
- (void)helperConnectionInitialized:(id)arg1;

@end*/

@interface NSURL (PathUtilities)
- (id)displayName;
@end

@interface NSURL (coders)
- (id)replacementObjectForPortCoder:(id)arg1;
@end

@interface NSDictionary (BetterAccessors)
- (id)stringForKey:(id)arg1;
@end

@interface NSDictionary (NSBundleExtras)
- (id)bundleIdentifierFromInfoDictionary;
- (id)shortVersionFromInfoDictionary;
@end

@interface NSMutableDictionary (MutableDictionaryExtensions)
+ (id)dictionaryWithDictionary:(id)arg1;
- (BOOL)addKeyValuePairFromString:(id)arg1;
@end

@interface NSDictionary (DictionaryExtensions)
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (int)integerForKey:(id)arg1;
@end