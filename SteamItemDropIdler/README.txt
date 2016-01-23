SteamItemDropIdler v2.0

* Features:
	- Works without Steam
	- Steam Guard support
	- Multiple instance support
	- Auto add free game license (for games that you idle only)
	- Auto reconnect if connection to Steam servers is lost
	- Command line parameter support
	- Can be used for mass idling (low RAM usage)

* Supported games:
	- Team Fortress 2
	- Games that use the Inventory Service Steam API (Killing Floor 2, Rust, Unturned...)

* Instructions / How to use:
1. Download the release from here: https://github.com/kokole/SteamItemDropIdler/releases/download/v1.0/release_bin_win32.zip
2. Extract it to some folder
3. Make sure Steam is not running. SteamItemDropIdler may not work properly without this step
4. If you have Steam installed, rename your Steam folder to something else. For example, if your Steam installation is in "C:\Program Files (x86)\Steam", rename it to "C:\Program Files (x86)\Steam123". SteamItemDropIdler may not work properly without this step
5. Run SteamItemDropIdler
6. Enter your Steam information, the AppID of the game and the Drop List Definition that you want to idle for. You can find those here: https://github.com/kokole/SteamItemDropIdler/wiki/AppIDs-and-Drop-List-Definitions
7. It should say "Item drop idling is now in progress"
8. Keep SteamItemDropIdler open and wait till you get items! To stop, just close SteamItemDropIdler

Note: Do not worry if you get "BeginAuthSession callback failed (5)", everything is working correctly.