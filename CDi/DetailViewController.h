//
//  DetailViewController.h
//  CDi
//
//  Created by Jay Versluis on 24/03/2014.
//  Copyright (c) 2014 Pinkstone Pictures LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
