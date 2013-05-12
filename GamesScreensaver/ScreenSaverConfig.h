//
//  ScreenSaverConfig.h
//  GamesScreensaver
//
//  Created by orta therox on 11/05/2013.
//  Copyright (c) 2013 Orta. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScreenSaverConfig : NSObject <NSTableViewDataSource, NSTableViewDelegate>

- (NSArray *)availableYoutubeSizes;
- (NSWindow *)configureWindow;
- (NSArray *)appMetadata;
@end