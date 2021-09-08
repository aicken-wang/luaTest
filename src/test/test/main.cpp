#ifdef __cplusplus
extern "C"
{
#endif

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#ifdef __cplusplus
}
#endif
int main(int argc, char** argv) 
{
	lua_State *L = lua_open();
	luaopen_base(L);
	luaL_loadfile(L, "main.lua");
	lua_pcall(L,NULL,NULL,NULL);
	getchar();

	return 0;
}