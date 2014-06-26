//
//  SpotOn.h
//  SpotOn
//
//  Created by Sahil Patel on 6/9/14.
//  Copyright (c) 2014 Sahil Patel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>
#import "SpotOnButton.h"

@interface SpotOn : NSObject

// Creates a new, fully functional add to calendar button
// Clicking the button will launch a call to webcal://spoton.it with
// a specific calendar path that points to a calendar supported by SpotOn
// Frame = X:80, Y: 120, W: 105, H: 17
+(UIButton *)addToCalendarButtonWithPath:(NSString *)path;

// This is a non-front-end method that initializes properties necessary
// if the button is added specifically through the StoryBoard
+(UIButton *)initButtonProperties;

@end