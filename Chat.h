#include <vector>
#include <map>
#include "User.h"
#include "Trie.h"

class Chat {
private:
    std::vector<User> users;
    std::map<std::string, std::string> messages;
    Trie trie;

public:
    void registerUser(const std::string& login, const std::string& password, const std::string& name);
    bool loginUser(const std::string& login, const std::string& password);
    void sendMessage(const std::string& from, const std::string& to, const std::string& message);
    std::string readMessages(const std::string& user);
    std::vector<std::string> autocomplete(const std::string& prefix);
};
