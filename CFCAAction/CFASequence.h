//
//  CFASequence.h
//  CFAAction
//
//  Created by Robert Widmann on 10/16/13.
//  Copyright (c) 2013 CodaFi. All rights reserved.
//  Released under the MIT license.
//

#import "CFAAction+Private.h"

@interface CFASequence : CFAAction

+ (instancetype)sequenceWithActions:(NSArray *)actions;

@end
