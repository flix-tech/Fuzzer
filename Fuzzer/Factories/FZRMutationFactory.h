//
// Created by AlexDenisov on 21/03/16.
// Copyright (c) 2016 lowlevelbits. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FZRMutation;
@class FZRNodeReplacement;

@interface FZRMutationFactory : NSObject

+ (id<FZRMutation>)builtinDeleteNodeMutation;
+ (NSArray <id<FZRMutation>> *)builtinReplacementNodeMutations;
+ (NSArray <id<FZRMutation>> *)builtinMutations;

+ (id<FZRMutation>)replaceNodeMutationWithReplacement:(FZRNodeReplacement *)replacement;

@end
