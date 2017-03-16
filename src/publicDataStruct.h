#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <queue>
using namespace std;
#include <stdint.h>



#define  FIXED_MTU_SZIE           1500


typedef struct RTPHeader
{
	uint8_t  csrccount:4;
	uint8_t  extension:1;
	uint8_t  padding:1;
	uint8_t  version:2;
	uint8_t  payloadtype:7;
	uint8_t  marker:1;
	uint16_t sequencenumber;
	uint32_t timestamp;
	uint32_t ssrc;
};


struct rtp_t
{
	char rtpdata[FIXED_MTU_SZIE];
	int  rtpdata_size;
};
//视频发送队列



