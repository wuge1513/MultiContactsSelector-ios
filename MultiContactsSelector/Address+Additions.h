//
//  Address+Additions.h
//  MultiContactsSelector
//
//  Created by macpocket1 on 19/01/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>

@interface NSObject (RecordID)

+ (NSArray *)getAllRecordIDs;

+ (ABRecordRef)infoWithRecordID:(NSInteger)recordID;

@end
