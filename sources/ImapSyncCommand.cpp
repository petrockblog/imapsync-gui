//
// Created by Florian Müller on 25.11.19.
//
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "ImapSyncCommand.h"

ImapSyncCommand::ImapSyncCommand() {
}

ImapSyncCommand::~ImapSyncCommand() {
}

std::string ImapSyncCommand::getVersion() {
  std::string returnedVersion = "unknown";
  try {
    returnedVersion = exec("imapsync --version");
    returnedVersion = returnedVersion.substr(0,returnedVersion.length()-1);
  } catch (std::runtime_error exc) {
    // do nothing for now
  }
  return returnedVersion;
}

std::string ImapSyncCommand::exec(const char* cmd) {
  std::array<char, 128> buffer;
  std::string result;
  std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
  if (!pipe) {
    throw std::runtime_error("popen() failed!");
  }
  while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
    result += buffer.data();
  }
  return result;
}