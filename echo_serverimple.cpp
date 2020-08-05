#include  <iostream>
#include  "echo_server.h"

using namespace std;


char* Echo_i::echoString(const char* mesg)
{
  return CORBA::string_dup(mesg);
}