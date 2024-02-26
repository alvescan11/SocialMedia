#include <iostream>
#include "Service/ServiceUser.h"
#include "UserInterface/User_Interface.h"
#include "Tests/Tests.h"
using namespace std;

int main() {
	test_all();
	ServiceUser service_user;
	ServiceEvent service_event;
	ServiceFriendship service_friendship;
	ServiceMessage service_message;
	User_Interface ui(service_user, service_event, service_friendship, service_message);
	ui.run();
	return 0;
}