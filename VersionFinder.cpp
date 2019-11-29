//
// Created by Florian Müller on 25.11.19.
//
#include "ImapSyncCommand.h"
#include "VersionFinder.h"

std::string VersionFinder::getIMAPSyncVersion() {
  const std::string versionName = ImapSyncCommand::getVersion();
  return versionName;
}
