//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CocoaTechFoundation/NTIconFamily.h>

@interface NTIconFamily (Internals)
+ (char **)get32BitDataFromBitmapImageRep:(id)arg1 requiredPixelSize:(int)arg2;
+ (char **)get8BitDataFromBitmapImageRep:(id)arg1 requiredPixelSize:(int)arg2;
+ (char **)get8BitMaskFromBitmapImageRep:(id)arg1 requiredPixelSize:(int)arg2;
+ (char **)get1BitMaskFromBitmapImageRep:(id)arg1 requiredPixelSize:(int)arg2;
+ (BOOL)removeCustomIconFromVolume:(id)arg1;
- (BOOL)addResourceType:(unsigned long)arg1 asResID:(int)arg2;
- (BOOL)setAsCustomIconForVolume:(id)arg1;
@end

