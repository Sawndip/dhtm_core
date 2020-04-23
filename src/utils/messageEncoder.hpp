#pragma once

#define HEADER_SIZE 14		// Number of bytes in the header

#include <xtensor/xarray.hpp>

#include "../../dhtm_msg/cpp/messageConstants.hpp"

namespace dh {

class MessageEncoder {


public: 
	MessageEncoder();
	virtual ~MessageEncoder();

	static char* createMessage(MessageCommand& argMsgCmd, MessageKey& argMsgKey, const xt::xarray<bool>& argSdr);
	static void decode(const char* argMessage);
	static uint32_t getUuid();
private:
        static uint32_t uuid;
};
}
