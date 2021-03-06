/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString, NSNumberFormatter, <PKPassPaymentSummaryViewDelegate>, PKPaymentTransaction, UITableView, PKPaymentPass, PKPaymentMessage;

@interface PKPassPaymentSummaryView : UIView <UITableViewDataSource, UITableViewDelegate, PKPassPaymentSummaryCellDelegate> {
    NSNumberFormatter *_numberFormatter;
    UITableView *_tableView;
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    PKPaymentMessage *_message;
    <PKPassPaymentSummaryViewDelegate> *_delegate;
}

@property(retain) PKPaymentPass * pass;
@property(retain) PKPaymentTransaction * transaction;
@property(retain) PKPaymentMessage * message;
@property <PKPassPaymentSummaryViewDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)_sectionIndexOfMessage;
- (long long)_sectionIndexOfTransaction;
- (id)initWithPaymentPass:(id)arg1;
- (id)_imageFromTransaction:(id)arg1;
- (id)_amountTextFromTransaction:(id)arg1;
- (id)_detailTextFromTransaction:(id)arg1;
- (id)_primaryTextFromTransaction:(id)arg1;
- (void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(bool)arg3;
- (void)setTransaction:(id)arg1 animated:(bool)arg2;
- (void)setMessage:(id)arg1 animated:(bool)arg2;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (bool)_isSectionIndexOfMessage:(long long)arg1;
- (void)_configureCell:(id)arg1 forTransaction:(id)arg2;
- (bool)_isSectionIndexOfTransaction:(long long)arg1;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)setPass:(id)arg1;
- (id)pass;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;

@end
