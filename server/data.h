#ifndef __DATA__
#define __DATA__
#define MAXSIZE 100
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<netdb.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<ctype.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sqlite3.h>
#include<unistd.h>
#include<signal.h>
#include<time.h>
#include<termios.h>
#include<assert.h>
#define portnumber 8000 //宏定义端口号
struct chat
{
	char name[20];//用户名
	char passwd[20];//密码
	int cmd;//命令
	int revert;//返回值
	char toname[20];//目标客户名
    char msg[800];//发送信息
	int flag;
	int sockfd;
	char time[40];
	char filename[40];
};
typedef struct chat stChat;
typedef struct chat* vpChat;
enum cmd
{
	LOGID = 0,
	REG = 1,
	LOG = 2,
	USERHELP = 3,
	USEREXIT = 4,
	CHAT = 3,
	ALL = 4,
	SMILE = 5,
	WELCOME = 6,
	EXIT = 7,
	HELP = 8,
	PASSWD = 9,
	BOOT = 10,
	STEP = 11,
	BAN = 12,
	SET = 13,
	SEE = 14,
	DATA = 15,
	SEND = 16,
	CHANGE = 17
    
};
enum revert
{
	USERIN = 1,
	USEROUT = -1,
	PASSWDOK = 2,
	PASSWDNO = -2,
	ONLINEIN = 3,
	ONLINEOUT = -3,
	REGNO = -4,
	REGOK = 4,
	MYFLAGOK = -5,
	MYFLAGNO = -6,
	TOFLAGOK = -7,
	TOFLAGNO = -8,
	CHATOK = 1,
	ALLOK = 6,
	SMILEOK = 6,
	WELCOMEOK  = 6,
	SEEOK = 7,
    BOOTOK = 1,
    DATAOK = 8,
	SENDOK = 2
};
#endif
