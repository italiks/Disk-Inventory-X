//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTFileDesc;

@interface NTCarbonFileInfo : NSObject
{
    BOOL _valid;
    NTFileDesc *_desc;
    struct FileInfo _fileInfo;
}

- (id)initWithDesc:(id)arg1;
- (void)dealloc;
- (struct FileInfo *)fileInfo;
- (void)setFileInfo:(struct FileInfo *)arg1;

@end
