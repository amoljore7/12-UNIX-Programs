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
strcpy(message.mtext, "Hello message from sender process");

if(msgsnd(msqid,&message,strlen(message.mtext),IPC_NOWAIT) < 0)
{
	printf("Error in sending message");
}

return 0;
}
