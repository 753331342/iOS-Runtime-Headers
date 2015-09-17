/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSArray *_additionalExecutables;
    NSArray *_matchAccountIdentifiers;
    NSString *_matchDesignatedRequirement;
    NSArray *_matchDomains;
    NSString *_matchPath;
    NSString *_matchSigningIdentifier;
}

@property (copy) NSArray *additionalExecutables;
@property (copy) NSArray *matchAccountIdentifiers;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSArray *matchDomains;
@property (copy) NSString *matchPath;
@property (readonly) NSString *matchSigningIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalExecutables;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1;
- (id)matchAccountIdentifiers;
- (id)matchDesignatedRequirement;
- (id)matchDomains;
- (id)matchPath;
- (id)matchSigningIdentifier;
- (BOOL)overlapsWithRule:(id)arg1;
- (void)setAdditionalExecutables:(id)arg1;
- (void)setMatchAccountIdentifiers:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchPath:(id)arg1;
- (BOOL)signingIdentifierAllowed:(id)arg1 domainsRequired:(out BOOL*)arg2;

@end