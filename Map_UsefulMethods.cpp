#include <map>

map<string, int> mp;

mp[s]++;

map<string, int>::iterator itm = mp.begin();

for(; itm != mp.end(); itm++)

itm->first
itm->second
