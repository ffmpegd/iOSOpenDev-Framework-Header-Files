/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMDAppleServices.framework/IMDAppleServices
 */

#import <IMDAppleServices/IMDAppleIDSRegistrationCenterListener.h>

#import <IMDAppleServices/IMDAppleSMSRegistrationCenterListener.h>
#import <IMDAppleServices/IMDAppleIDRegistrationCenterListener.h>

@class NSMutableArray, NSArray;

@interface IMDAppleRegistrationController : NSObject <IMDAppleSMSRegistrationCenterListener, IMDAppleIDRegistrationCenterListener, IMDAppleIDSRegistrationCenterListener> {
	NSMutableArray *_handlers;	// 4 = 0x4
	NSMutableArray *_trackedRegistrations;	// 8 = 0x8
	int _iMessageToken;	// 12 = 0xc
	int _faceTimeToken;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *trackedRegistrations;	// G=0x19e21; @synthesize=_trackedRegistrations
+ (BOOL)systemSupportsRegistrationInfo:(id)info;	// 0x15f99
+ (id)sharedInstance;	// 0x157fd
// declared property getter: - (id)trackedRegistrations;	// 0x19e21
- (void)stopTrackingRegistration:(id)registration;	// 0x19d3d
- (void)startTrackingRegistration:(id)registration;	// 0x19bad
- (void)_updateNotifyState;	// 0x19a85
- (void)removeListener:(id)listener;	// 0x19a29
- (void)addListener:(id)listener;	// 0x199a9
- (void)_SIMInserted:(id)inserted;	// 0x19701
- (void)_registrationStatusChanged:(id)changed;	// 0x19695
- (void)_technologyChanged:(id)changed;	// 0x19629
- (void)_checkTechChange;	// 0x191c5
- (void)center:(id)center noteRegistrationRequired:(id)required;	// 0x190fd
- (void)center:(id)center succeededEmailConfirmation:(id)confirmation emailAddress:(id)address;	// 0x19035
- (void)center:(id)center failedAuthentication:(id)authentication error:(int)error info:(id)info;	// 0x18de5
- (void)center:(id)center succeededRegionValidation:(id)validation regionID:(id)anId phoneNumber:(id)number extraContext:(id)context verified:(BOOL)verified;	// 0x18d29
- (void)center:(id)center succeededAuthentication:(id)authentication;	// 0x18ba1
- (void)center:(id)center succeededInitialRegionQuery:(id)query;	// 0x18ad5
- (void)center:(id)center succeededCurrentEmailsRequest:(id)request emailAddresses:(id)addresses;	// 0x189f1
- (void)_checkRegistrationCompleteSetupBeforeAuthentication:(id)authentication;	// 0x1875d
- (void)center:(id)center failedProvisioning:(id)provisioning error:(int)error info:(id)info;	// 0x18435
- (void)center:(id)center succeededProvisioning:(id)provisioning;	// 0x1836d
- (void)centerNeedsNewIdentification:(id)identification;	// 0x18301
- (void)center:(id)center failedIdentification:(id)identification error:(int)error;	// 0x1825d
- (void)center:(id)center succeededIdentification:(id)identification;	// 0x18195
- (void)center:(id)center failedDeregistration:(id)deregistration error:(int)error info:(id)info;	// 0x180f1
- (void)center:(id)center failedRegistration:(id)registration error:(int)error info:(id)info;	// 0x17dd1
- (void)center:(id)center succeededDeregistration:(id)deregistration;	// 0x17d25
- (void)center:(id)center succeededRegistration:(id)registration;	// 0x17c89
- (void)_notifyDeregistrationSuccess:(id)success;	// 0x17aad
- (void)_notifyDeregistrationFailure:(id)failure error:(int)error info:(id)info;	// 0x178c1
- (void)_notifyDeregistrationStarting:(id)starting;	// 0x176e5
- (void)_notifyRegistrationSuccess:(id)success;	// 0x174c1
- (void)_notifyRegistrationFailure:(id)failure error:(int)error info:(id)info;	// 0x17239
- (void)_notifyRegistrationStarting:(id)starting;	// 0x1705d
- (void)_notifyRegistrationUpdated:(id)updated;	// 0x16e81
- (void)_notifyNeedsNewRegistration;	// 0x16ca9
- (void)cancelActionsForRegistrationInfo:(id)registrationInfo;	// 0x16c29
- (BOOL)unregisterInfo:(id)info;	// 0x16a91
- (BOOL)registerInfo:(id)info;	// 0x162c1
- (BOOL)registrationSupportedForRegistration:(id)registration;	// 0x15e49
- (BOOL)validRegistrationStateToMakeCallsForRegistration:(id)registration;	// 0x15cc9
- (BOOL)validRegistrationStateToAcceptCallsForRegistration:(id)registration;	// 0x15b49
- (void)dealloc;	// 0x15a51
- (id)init;	// 0x158b1
- (BOOL)retainWeakReference;	// 0x158ad
- (BOOL)allowsWeakReference;	// 0x158a9
@end
