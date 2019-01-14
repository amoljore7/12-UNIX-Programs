#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<string.h>
#include<sys/msg.h>

typedef struct
{
	long type;
	char mtext[256];
}message_buf;

int main()
{
int msqid;
key_t key;
message_buf message;

key = 111;
msqid = msgget(key,IPC_CREAT | 0666);
if(msqid < 0)
{
	printf("Error in creating message queue");
}

message.type = 1;

if(msgrcv(msqid,&message,128,1,0) < 0)
{
	printf("Error in sending message");
}

printf("Received message from sender is %s", message.mtext);

return 0;
}
