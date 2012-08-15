//
//  UserInfoViewController.h
//  MultiContactsSelector
//
//  Created by Coolin 006 on 12-8-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

//@interface UIUserInfoTableViewCell : UITableViewCell
//
//    @property (nonatomic, strong) IBOutlet UIButton *btnUserHeadPortrait;
//    @property (nonatomic, strong) IBOutlet UILabel *lblUserName;
//    @property (nonatomic, strong) IBOutlet UILabel *lblUserID;
//    @property (nonatomic, strong) IBOutlet UILabel *lblUserNoteName;
//
//@end


@interface UserInfoViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView *tbUserInfoView;



@end
