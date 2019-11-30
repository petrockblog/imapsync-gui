//
// Created by Florian Müller on 25.11.19.
//

#ifndef IMAPSYNC_UI__VERSIONFINDER_H_
#define IMAPSYNC_UI__VERSIONFINDER_H_

#include <string>

class VersionFinder {
 public:
  VersionFinder() = default;
  ~VersionFinder() = default;

  static std::string getIMAPSyncVersion();
};

#endif //IMAPSYNC_UI__VERSIONFINDER_H_
