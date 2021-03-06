/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSString.h>


@interface NSString (NSEmailAddressString)
+(id)mf_nameExtensions;
+(id)mf_partialSurnames;
+(id)mf_formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;
-(id)mf_copyUncommentedAddress;
-(id)mf_uncommentedAddress;
-(id)mf_uncommentedAddressRespectingGroups;
-(id)mf_addressComment;
-(id)mf_copyAddressComment;
-(void)mf_firstName:(id*)name middleName:(id*)name2 lastName:(id*)name3 extension:(id*)extension;
-(BOOL)mf_appearsToBeAnInitial;
-(id)mf_trimCommasSpacesQuotes;
-(BOOL)mf_isLegalCommentedEmailAddress;
-(BOOL)mf_isLegalEmailAddress;
-(id)mf_addressDomain;
-(id)mf_addressList;
@end

@interface NSString (MimeCharsetSupport)
-(id)mf_bestMimeCharset;
-(id)_mf_bestMimeCharset:(id)charset;
-(id)mf_bestMimeCharsetUsingHint:(unsigned long)hint;
@end

@interface NSString (MimeHeaderEncoding)
-(id)mf_encodedHeaderData;
-(id)mf_encodedHeaderDataWithEncodingHint:(unsigned long)encodingHint;
-(id)mf_decodeMimeHeaderValue;
-(id)mf_decodeMimeHeaderValueWithCharsetHint:(id)charsetHint;
@end

@interface NSString (MFStringUtils)
+(id)mf_stringWithData:(id)data encoding:(unsigned)encoding;
-(const void*)mf_lossyDefaultCStringBytes;
-(int)mf_caseInsensitiveCompareExcludingXDash:(id)dash;
-(id)mf_dataUsingEncoding:(unsigned)encoding;
-(id)mf_dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;
@end

