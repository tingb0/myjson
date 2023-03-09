#ifndef LEPTJSON_H__//定义头文件LEPTJSON_H__
#define LEPTJSON_H__

typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, 
                LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

typedef struct {
    lept_type type;
}lept_value;//类型值结构体

enum {
    LEPT_PARSE_OK = 0,//解析OK
    LEPT_PARSE_EXPECT_VALUE,//解析期望值
    LEPT_PARSE_INVALID_VALUE,//解析无效值
    LEPT_PARSE_ROOT_NOT_SINGULAR//解析非单一值
};

//解析函数，参数为类型值结构体lept_value和字符文本json,返回值为整数
int lept_parse(lept_value* v, const char* json);

//得到类型函数，参数为类型值结构体lept_value，返回值为枚举类型，本质上是整数
lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
//结束定义头文件LEPTJSON_H__