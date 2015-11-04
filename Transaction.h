/*
 
 File: Transaction.h
 
 */ 

#import <Cocoa/Cocoa.h>

@interface Transaction : NSObject
{
    NSDate *_date;
    NSDate *_purchaseDate;
    NSString *_descriptionString;
    NSString *_type;
    NSString *_accountType;
    BOOL _taxable;
    BOOL _stockTransaction;
    double _purchasePrice;
    double _salePrice;
    double _costBasis;
    double _saleAmount;
    double _numberShares;
    double _amount;
    NSDocument *_document;
}

- (double)amount;
- (void)setAmount:(double)amount;

- (double)costBasis;
- (double)saleAmount;

- (NSDate *)date;
- (void)setDate:(NSDate *)date;

- (NSString *)descriptionString;
- (void)setDescriptionString:(NSString *)description;

- (NSString *)type;
- (void)setType:(NSString *)type;

- (NSString *)accountType;
- (void)setAccountType:(NSString *)actype;

- (BOOL)taxable;
- (void)setTaxable:(BOOL)flag;

- (BOOL)stockTransaction;
- (void)setStockTransaction:(BOOL)flag;

- (double)purchasePrice;
- (void)setPurchasePrice:(double)purchasePrice;

- (double)salePrice;
- (void)setSalePrice:(double)salePrice;

- (double)numberShares;
- (void)setNumberShares:(double)numberShares;

- (double)costBasis;
- (void)setCostBasis:(double)costBasis;

- (double)saleAmount;
- (void)setSaleAmount:(double)saleAmount;

- (NSDate *)purchaseDate;
- (void)setPurchaseDate:(NSDate *)purchaseDate;

- (void)setDocument:(NSDocument *)document;
- (NSUndoManager *)undoManager;

@end
