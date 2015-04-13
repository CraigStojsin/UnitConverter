//
//  ViewController.h
//  UnitConverter
//
//  Created by Craig Stojsin on 2015-04-13.
//  Copyright (c) 2015 Codes By Craig. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *tempText;

@property (strong, nonatomic) IBOutlet UILabel *resultLabel;

-(IBAction)tempText:(id)sender;

- (IBAction)convertTemp:(id)sender;

- (IBAction)convertCelToFar:(id)sender;

-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;



@end

