#include "Call.h"
#include "CallManager.h"
#include "Conference.h"
#include "Conversation.h"
#include "ConversationManager.h"
#include "helpers.h"
#include "NormalConversation.h"
#include <iostream>
#include <cstring>

using namespace std;

ConversationManager conversationManager;
CallManager callManager;

void menu();
void createConversation();
void createCall();
void cancelCall();
void cancelConversation();
void findConversationById();
void findConversationIdByCallId();
void printSummaryStatisics();

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "No command\n";
    }
    else
    {
        
    }
    while(true)
    {
        system("clear");
        menu();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            createConversation();
            break;
        case 2:
            createCall();
            break;
        case 3:
            cancelCall();
            break;
        case 4:
            cancelConversation();
            break;
        case 5:
            findConversationById();
            break;
        case 6:
            findConversationIdByCallId();
            break;
        case 7:
            printSummaryStatisics();
            break;
        default:
            break;
        }
    }
}

void menu()
{
    cout << "----------------------------------------------\n";
    cout << "1. Tao conversation\n";
    cout << "2. Tao cuoc goi\n";
    cout << "3. Huy cuoc goi\n";
    cout << "4. Huy conversation\n";
    cout << "5. Tim kiem Conversation bang conersationID\n";
    cout << "6. Tim kiem ConversationId bang CallID\n";
    cout << "7. Thong ke\n";
}

void createConversation()
{
    system("clear");
    cout << "1. Normal Conversation\n";
    cout << "2. Conference\n";
    int choice;
    cin >> choice;
    while (choice != 1 && choice != 2)
    {
        cout << "Invalid!\n";
        cin >> choice;
    }
    if (choice == 1)
    {
        NormalConversation normalConversation(NORMALCONVERSATION);
        normalConversation.setConversationId(generatorIdHelper());
        conversationManager.addConversation(normalConversation);
    }
    else
    {
        Conference conference(CONFERENCE);
        conference.setConversationId(generatorIdHelper());
        conversationManager.addConversation(conference);
    }
    char c; cin >> c;
}

void createCall()
{
    int choice;
    system("clear");
    cout << "1. Call in\n";
    cout << "2. Call out\n";
    cin >> choice;
    while (choice != 1 && choice != 2)
    {
        cout << "Invalid!\n";
        cin >> choice;
    }
    int typeCall = choice-1;
    cout << "1. Normal Conversation\n";
    cout << "2. Conference\n";
    cin >> choice;
    while (choice != 1 && choice != 2)
    {
        cout << "Invalid!\n";
        cin >> choice;
    }
    int typeConversation = choice+1;
    
    Call call(generatorIdHelper(), typeCall, generatorChannelIdHelper(), typeConversation);

    callManager.addCall(call);
    //cout << call.toString();
    char c; cin >> c;

}

void cancelCall()
{
    system("clear");
    cout << "List call: \n";
    for (int i = 0; i < callManager.getCallList().size(); ++i)
    {
        cout << i+1 <<": " << "Id: " << callManager.getCallList()[i].getCallId() << '\n';
    }
    int choice;
    cout << "Nhap stt: "; cin >> choice;
    callManager.cancelCall(choice-1);
}

void cancelConversation()
{
    cout << "List conversation: \n";
    for (int i = 0; i < conversationManager.getConversationList().size(); ++i)
    {
        cout << i+1 <<": " << "Id: " << conversationManager.getConversationList()[i].getConversationId() << '\n';
    }
    int choice;
    cout << "Nhap stt: "; cin >> choice;
    for (int i = 0; i < conversationManager.getConversationList().size(); ++i)
    {
        callManager.cancelCall(i);
    }
    conversationManager.cancelConversation(choice-1);
}

void findConversationById()
{
    system("clear");
    char *conversationId= new char[1000];
    cout << "Nhap Id conversation can tim: ";  cin >> conversationId;
    
    for (Conversation conversation: conversationManager.getConversationList())
    {
        if (strcmp(conversation.getConversationId(), conversationId))
        {
            cout << conversation.toSting() << endl;
        }
    }
    delete[] conversationId;

}

void findConversationIdByCallId()
{
    char *callId = new char[1000];
    for (Conversation conversation : conversationManager.getConversationList())
    {
        for (Call call : conversation.getCallList())
        {
            if (strcmp(call.getCallId, callId))
            {
                cout << conversation.getConversationId() << endl;
                break;
            }
        }
    }
    delete[] callId;
}

void printSummaryStatisics()
{
    cout << "So luong cac cuoc goi: " << callManager.getCallList().size() << '\n';
    cout << "So luong conversation: " << conversationManager.getConversationList().size() << '\n';
    for (Conversation conversation : conversationManager.getConversationList())
    {
        cout << "Conversation Id: " << conversation.getConversationId() << '\n';
        cout << "So luong cuoc goi dang co: " << conversation.getCallList().size() << "\n\n";
    }
}