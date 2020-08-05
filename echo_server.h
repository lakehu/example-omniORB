
#include  "echo.hh"


class Echo_i : public POA_Echo,
        public PortableServer::RefCountServantBase
{
public:
  inline Echo_i() {}
  virtual ~Echo_i() {}
  virtual char* echoString(const char* mesg);
};
