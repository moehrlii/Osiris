#pragma once

#include <cstdint>
#include <functional>

#include <gmock/gmock.h>
#include <Config/ConfigString.h>

struct MockConfigConversion {
    MOCK_METHOD(void, beginRoot, ());
    MOCK_METHOD(void, endRoot, ());
    MOCK_METHOD(void, beginObject, (const char8_t* id));
    MOCK_METHOD(void, endObject, ());
    MOCK_METHOD(void, boolean, (const char8_t* id, std::function<void(bool)> valueSetter, std::function<bool()> valueGetter));
    MOCK_METHOD(void, uint, (const char8_t* id, std::function<void(std::uint64_t)> valueSetter, std::function<std::uint64_t()> valueGetter));
    MOCK_METHOD(void, string, (const char8_t* id, std::function<void(ConfigString<256>)> valueSetter, std::function<ConfigString<256>()> valueGetter));
    MOCK_METHOD(void, string, (const char8_t* id, std::function<void(ConfigString<64>)> valueSetter, std::function<ConfigString<64>()> valueGetter));
};
