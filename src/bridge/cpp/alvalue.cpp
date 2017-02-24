#include "naobridge_impl.h"
#include <alvalue/alvalue.h>

void* ALValue_f(float value)
{
    return new AL::ALValue(value);
}

void* ALValue_s(char* value)
{
	std::string value_s(value);
    return new AL::ALValue(value_s);
}

void* ALValue_fv(const std::vector<float> &pListFloat)
{
    return new AL::ALValue(pListFloat);
}

void* ALValue_sv(const std::vector<std::string> &pListString)
{
    return new AL::ALValue(pListString);
}

void ALValueFree(void* alvalue_)
{
    AL::ALValue* alvalue = (AL::ALValue*) alvalue_;
    delete alvalue;
}
