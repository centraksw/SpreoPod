//
//  IDPoi.h
//  IndoorKit
//
//  Copyright (c) 2016 Spreo LLC. All rights reserved.
//

@class IDLocation;
@class IDCategory;

////////////////////////////////////////////////////////////////////////////////////////////
//
// IDPoi
/*!
 * The Indoor Kit Poi Class.
 */

@interface IDPoi : NSObject <NSCoding, NSCopying>

/*!
 * @brief The Poi Title.
 */
@property (nonatomic, readonly, copy) NSString *title;


/*!
 * @brief The Poi Subtitle.
 */
@property (nonatomic, readonly, copy) NSString *subtitle;


/*!
 * @brief The Poi Unique Identifier.
 */
@property (nonatomic, strong, readonly) NSString *identifier;


/*!
 * @brief The Poi Categories Array.
 */
@property (nonatomic, strong, readonly) NSArray<NSString *> *categories;

/*!
 * @brief The Poi CategoriesWithFilters Array.
 */
@property (nonatomic, strong) NSArray<IDCategory *> *categoriesWithFilters;


/*!
 * @brief The Poi Location. IDLocation Class.
 */
@property (nonatomic) IDLocation *location;


/*!
 * @brief The Poi Info Dictionary.
 */
@property (nonatomic, strong) NSDictionary *info;


/*!
 *  IDPoi designated Intitializer
 *
 *  @param aDictionary the POI data dictionary
 *  @param aLocation the POI location <IDLocation>
 *
 *  @return IDPoi instance
 */
- (instancetype)initPoiWithDictionary:(NSDictionary *)aDictionary
                          andLocation:(IDLocation *)aLocation NS_DESIGNATED_INITIALIZER;


/*!
 *  IDPoi designated Intitializer
 *
 *  @param aTitle the POI title NSString
 *  @param aSubtitle the POI subtitle NSString
 *  @param aDescription the POI description NSString
 *  @param anIdentifier the POI identifier NSString
 *  @param categories the POI categories NSArray<NSString *>
 *  @param aLocation the POI location <IDLocation>
 *  @param aDictionary the POI info data dictionary NSDictionary
 *
 *  @return IDPoi instance
 */
- (instancetype)initPoiWithTitle:(NSString *)aTitle
                        subtitle:(NSString *)aSubtitle
                     description:(NSString *)aDescription
                      identifier:(NSString *)anIdentifier
                      categories:(NSArray<NSString *> *)categories
                        location:(IDLocation *)aLocation
                         andInfo:(NSDictionary *)aDictionary NS_DESIGNATED_INITIALIZER;

@end
