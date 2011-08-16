//
//  MyController.h
//  slider
//
//  Created by kenu heo on 11. 8. 17..
//  Copyright 2011년 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyController : UIViewController {
    IBOutlet UISlider *slider;
    IBOutlet UILabel *label;
}
- (IBAction)updateLabelText:(id)sender;

@end
