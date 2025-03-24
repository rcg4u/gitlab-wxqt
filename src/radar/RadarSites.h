// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#ifndef RADARSITES_H
#define RADARSITES_H

#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

class RadarSites {
public:
    static const unordered_map<string, string> radarIdToName;
    static const unordered_map<string, string> radarSiteToLat;
    static const unordered_map<string, string> radarSiteToLon;
};

#endif  // RADARSITES_H
