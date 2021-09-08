添加宏消除警告

项目－－＞项目属性－－＞C/C++－－＞预处理器定义
1、添加：_CRT_NONSTDC_NO_DEPRECATE和_CRT_SECURE_NO_WARNINGS
2、lua在windows下需要生成.lib编译链接依赖库,定义LUA_BUILD_AS_DLL宏
指定输出库../../bin/
高级里指定../../lib/