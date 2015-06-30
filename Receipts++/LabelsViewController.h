//
//  LabelsViewController.h
//  Receipts++
//
//  Created by Chelsea Liu on 6/30/15.
//  Copyright (c) 2015 Chelsea Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Label.h"
#import "Receipt.h"

@class Receipt;

@interface LabelsViewController : UIViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) Receipt *receipt;

@property (nonatomic, strong) Label *label;
@property (weak, nonatomic) IBOutlet UITableView *tableView;



@end
