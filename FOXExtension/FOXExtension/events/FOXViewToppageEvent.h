//
//  FOXViewToppageEvent.h
//  FOXExtension
//
//  Created by Wuwei on 2016/08/02.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "FOXExtensionBaseEvent.h"

@interface FOXViewToppageEvent : FOXExtensionBaseEvent
<
FOXExVizuryEventDelegate
>

/**
 * Create event with default eventName and no ltvId.
 */
-(instancetype _Nullable) init;

/**
 * Create event with default eventName and specified ltvId.
 * @param ltvId         LTV identifier given by FOX
 */
-(instancetype _Nullable) initWithLtvId:(NSUInteger) ltvId;

@end
