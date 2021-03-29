// Automatically generated; do not edit.
luaLoadLib(lua, LUA_LOADLIBNAME, luaopen_package);
if (luaL_dostring(lua, "cjson = require('cjson');"))
    serverLog(LL_NOTICE, "Error loading cjson library");
if (luaL_dostring(lua, "bit = require('bit');"))
    serverLog(LL_NOTICE, "Error loading bit library");
luaL_dostring(lua, "module = nil; require = nil;");
