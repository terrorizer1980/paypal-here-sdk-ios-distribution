/**
 * PPRetailInvoiceNotification.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/@paypalcorp/paypal-invoicing/lib/Notification.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailSimulationManager;
@class PPRetailMerchantManager;
@class PPRetailCaptureHandler;
@class PPRetailRecord;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflinePaymentInfo;
@class PPRetailOfflineTransactionRecord;
@class PPRetailQRCRecord;
@class PPRetailTokenExpirationHandler;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailDigitalCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailDigitalCardInfo;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailReaderConfiguration;
@class PPRetailSimulationOptions;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * An Invoice notification
 */
@interface PPRetailInvoiceNotification : PPRetailObject
/**
 * Subject of the notification
 */
@property (nonatomic,strong,nullable) NSString* subject;/**
 * Note to the payer
 */
@property (nonatomic,strong,nullable) NSString* note;/**
 * A flag indicating whether a copy of the
 * email has to be sent to the merchant
 */
@property (nonatomic,assign) BOOL shouldSendToMerchant;/**
 * A flag indicating whether a copy of the email
 * has to be sent to the payer
 */
@property (nonatomic,assign) BOOL shouldSendToPayer;/**
 * If the invoice has CCs associated with it, this field
 * can be used to specify only certain set of CC emails for which notification is sent.
 */
@property (nonatomic,strong,nullable) NSString* ccEmails;








@end
