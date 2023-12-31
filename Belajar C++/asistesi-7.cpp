#include <iostream>
#include <vector>

class MessageManager {
private:
    std::vector<std::string> messages;

public:
    void addMessage(const std::string& message) {
        messages.push_back(message);
    }

    void displayMessages() {
        std::cout << "Messages:\n";
        for (const auto& message : messages) {
            std::cout << "- " << message << "\n";
        }
    }

    void deleteMessage() {
        if (messages.empty()) {
            std::cout << "No messages to delete.\n";
            return;
        }

        std::cout << "Deleting the last message.\n";
        messages.pop_back();
    }
};

int main() {
    MessageManager messageManager;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Message\n";
        std::cout << "2. Display Messages\n";
        std::cout << "3. Delete Last Message\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string newMessage;
                std::cout << "Enter your message: ";
                std::cin.ignore(); // Ignore newline character from previous input
                std::getline(std::cin, newMessage);
                messageManager.addMessage(newMessage);
                break;
            }
            case 2:
                messageManager.displayMessages();
                break;
            case 3:
                messageManager.deleteMessage();
                break;
            case 0:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
