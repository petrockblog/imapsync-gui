//
// Created by Florian Müller on 25.11.19.
//

#ifndef IMAPSYNC_UI__IMAPSYNCCOMMAND_H_
#define IMAPSYNC_UI__IMAPSYNCCOMMAND_H_

#include <string>

class ImapSyncCommand {
 public:
  virtual ~ImapSyncCommand();
  ImapSyncCommand();

  static std::string getVersion();

 private:
  static std::string exec(const char* cmd);

};

#endif //IMAPSYNC_UI__IMAPSYNCCOMMAND_H_Å
