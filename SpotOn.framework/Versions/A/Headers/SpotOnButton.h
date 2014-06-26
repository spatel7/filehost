//
//  SpotOnButton.h
//  SpotOn
//
//  Created by Sahil Patel on 6/10/14.
//  Copyright (c) 2014 Sahil Patel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpotOnButton : UIButton

// This path tells SpotOn what calendar to download. This is SpotOn specific and must be retrieved via SpotOn.
@property (nonatomic) NSString *path;

// Basic initialization method. This will programmatically create a custom UIButton that has image
// properties of the SpotOn.it Add to Calendar button
-(id)init;

// This is a place holder function. Necessary for the use of the button in the project
// Storyboard.
-(id)initEmpty;

// This is the main method to use if making the button programmatically. It tells SpotOn what
// calendar to download based on the path provided.
-(id)initWithPath:(NSString *)path;

// Basic initialization method for using the Add to Calendar button in the Storyboard
-(id)initWithCoder:(NSCoder *)aDecoder;

@end
