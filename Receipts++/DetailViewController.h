//
//  DetailViewController.h
//  Receipts++
//
//  Created by Chelsea Liu on 6/30/15.
//  Copyright (c) 2015 Chelsea Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Label.h"
#import "Receipt.h"
@class Receipt;

@interface DetailViewController : UIViewController

@property (nonatomic, strong) Receipt *detailItem;

@property (weak, nonatomic) IBOutlet UITextField *amountTextField;
@property (weak, nonatomic) IBOutlet UITextView *detailsTextField;
@property (weak, nonatomic) IBOutlet UILabel *timeStampLabel;
@property (weak, nonatomic) IBOutlet UITextField *changeTitleTextField;

@property (weak, nonatomic) IBOutlet UITableView *tableView;


@end
