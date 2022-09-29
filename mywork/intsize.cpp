#include<iostream>
using namespace std;
int main(){
    int8_t     int8min = 0x80;
    int8_t     int8max = 0x7F;
    uint8_t   uint8max = 0xFF;
    int16_t   int16min = 0x8000;
    int16_t   int16max = 0x7FFF;    
    uint16_t uint16max = 0xFFFF;
    int32_t   int32min = 0x80000000;
    int32_t   int32max = 0x7FFFFFFF;
    uint32_t uint32max = 0xFFFFFFFF;
    int64_t   int64min = -9223372036854775807;
    int64_t   int64max = 9223372036854775807;
    uint64_t uint64max = 18446744073709551615;
    cout<<"int8_t: "<<int8min<<" size of min int8_t : "<<sizeof(int8min)<<" bytes"<<endl;
    cout<<"int8_t: "<<int8max<<" size of  max int8_t : "<<sizeof(int8max)<<" bytes"<<endl;
    cout<<" uint8_t: "<<uint8max<<" size of max uint8_t : "<<sizeof(uint8max)<<" bytes"<<endl;
    cout<<" int16_t: "<<int16min<<" size of min int16_t : "<<sizeof(int16min)<<" bytes"<<endl;
    cout<<" int16_t: "<<int16max<<" size of max int16_t : "<<sizeof(int16max)<<" bytes"<<endl;
    cout<<" uint16_t: "<<uint16max<<" size of max uint16_t : "<<sizeof(uint16max)<<" bytes"<<endl;
    cout<<" int32_t: "<<int32min<<" size of min int32_t : "<<sizeof(int32min)<<" bytes"<<endl;
    cout<<" int32_t: "<<int32max<<" size of max int32_t : "<<sizeof(int32max)<<" bytes"<<endl;
    cout<<" uint32_t: "<<uint32max<<" size of max uint32_t : "<<sizeof(uint32max)<<" bytes"<<endl;
    
    cout<<" int64_t: "<<int64min<<" size of min int64_t : "<<sizeof(int64min)<<" bytes"<<endl;
    cout<<" int64_t: "<<int64max<<" size of max int64_t : "<<sizeof(int64max)<<" bytes"<<endl;
    cout<<" uint64_t: "<<uint64max<<" size of max uint64_t : "<<sizeof(uint64max)<<" bytes"<<endl;
    
}
  