//
//  DetailViewController.h
//  test
//
//  Created by TaeGyoon Kim on 2013. 12. 27..
//  Copyright (c) 2013년 TaeGyoon Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
