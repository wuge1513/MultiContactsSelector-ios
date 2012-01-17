//
//  SMContactsSelector.h
//  
//
//  Created by Sergio on 03/03/11.
//  Copyright 2011 Sergio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "NSString+Additions.h"
#import "UIAlertView+UITableView.h"

typedef enum 
{
    DATA_CONTACT_TELEPHONE = 0,
    DATA_CONTACT_EMAIL = 1
}DATA_CONTACT;

@protocol SMContactsSelectorDelegate <NSObject>
@optional

- (void)numberOfRowsSelected:(NSInteger)numberRows withTelephones:(NSArray *)telephones;
- (void)numberOfRowsSelected:(NSInteger)numberRows withEmails:(NSArray *)emails;

@end

@class OverlayViewController;

@interface SMContactsSelector : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, AlertTableViewDelegate>
{

	id delegate;
	DATA_CONTACT requestData;
    
@private
    
    IBOutlet UITableView *table;
	IBOutlet UIBarButtonItem *cancelItem;
	IBOutlet UIBarButtonItem *doneItem;
	IBOutlet UISearchBar *barSearch;
    IBOutlet UISearchBar *searchBar;
    
    UITableView *currentTable;
    NSArray *data;
	NSMutableArray *arrayLetters;
	NSMutableArray *filteredListContent;
    NSMutableArray *dataArray;
	NSMutableArray *selectedRow;
    NSMutableDictionary *selectedItem;
    AlertTableView *alertTable;
    NSInteger savedScopeButtonIndex;
    NSString *alertTitle;
}

- (void)dismiss;
- (void)displayChanges:(BOOL)yesOrNO;

@property (nonatomic, retain) IBOutlet UITableView *table;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *cancelItem;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *doneItem;
@property (nonatomic, retain) IBOutlet UISearchBar *barSearch;
@property (nonatomic, retain) NSArray *data;
@property (nonatomic, retain) NSMutableArray *arrayLetters;
@property (nonatomic, retain) NSMutableDictionary *selectedItem;
@property (nonatomic, retain) NSMutableArray *filteredListContent;
@property (nonatomic, retain) id<SMContactsSelectorDelegate> delegate;
@property (nonatomic, copy) NSString *savedSearchTerm;
@property (nonatomic) NSInteger savedScopeButtonIndex;
@property (nonatomic) BOOL searchWasActive;
@property (nonatomic, retain) AlertTableView *alertTable;
@property (nonatomic, retain) UITableView *currentTable;
@property (nonatomic) DATA_CONTACT requestData;
@property (nonatomic, retain) NSString *alertTitle;

@end
