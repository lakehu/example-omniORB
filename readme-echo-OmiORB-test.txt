#Ubuntu 18 
sudo apt install omniorb omniorb-idl omniidl libomniorb4-dev libomniorb4-2 omniorb-nameserver libomnithread4 libomnithread4-dev



### get link parameter  
$  pkg-config --libs omniDynamic4 omniORB4
-lomniDynamic4 -lomniORB4 -lomnithread


lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ omniidl -bcxx echo.idl
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ ls  -l  echo.hh   echoSK.cc
-rwxrwxrwx 1 lake lake 4408 Aug  5 10:00 echo.hh
-rwxrwxrwx 1 lake lake 5425 Aug  5 10:00 echoSK.cc
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ date
Wed Aug  5 10:00:34 CST 2020
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ g++  -g  -c echo_serverimple.cpp
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ g++  -g  -c echo_client.cpp
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$  g++  -g   -o   echo_test   echoSK.o    echo_serverimple.o    echo_client.o    -lomniDynamic4 -lomniORB4 -lomnithread
lake@PC-HM6DD43:/mnt/c/work/omiidl/example$ ./echo_test
I said,"Hello!". The Object said,"Hello!"
