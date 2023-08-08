//
//  DumbProject.h
//  DumbProject
//
//  Created by Julian Harty on 08/08/2023.
//

// For the device
// xcodebuild archive -scheme DumbProject -configuration Release -destination 'generic/platform=iOS' -archivePath './build/DumbProject.framework-iphoneos.xcarchive' SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES

// For the simulator
// xcodebuild archive -scheme DumbProject -configuration Release -destination 'generic/platform=iOS Simulator' -archivePath './build/DumbProject.framework-iphonesimulator.xcarchive' SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES

#import <Foundation/Foundation.h>

//! Project version number for DumbProject.
FOUNDATION_EXPORT double DumbProjectVersionNumber;

//! Project version string for DumbProject.
FOUNDATION_EXPORT const unsigned char DumbProjectVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DumbProject/PublicHeader.h>


