//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

@class MSALIndividualClaimRequestAdditionalInfo;

NS_ASSUME_NONNULL_BEGIN

/*!
 Represents the individual claim request.
 See more info here: https://openid.net/specs/openid-connect-core-1_0.html#IndividualClaimsRequests
 */
@interface MSALIndividualClaimRequest : NSObject

/*!
 Init with claim name.
 @param name Name of the requsted claim.
 */
- (instancetype)initWithName:(NSString *)name;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

/*!
 Name of the claim being requested.
 */
@property (nonatomic) NSString *name;

/*!
 Additional information that can be optionally sent to the authorization server (default is null) for a particular requested claim.
 */
@property (nonatomic, nullable) MSALIndividualClaimRequestAdditionalInfo *additionalInfo;

@end

NS_ASSUME_NONNULL_END
