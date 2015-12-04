#include "stdafx.h"

int main( int argc, char* argv[] )
{
	char appIDStr[11];
	printf( "Enter the AppID: " );
	scanf( "%10s", appIDStr );
	getchar(); // skip newline

	SteamItemDef_t dropListDefinition;
	printf( "Enter the drop list definition: " );
	scanf( "%d", &dropListDefinition );
	getchar(); // skip newline

	if ( !SetEnvironmentVariableA( "SteamAppId", appIDStr ) ) {
		printf( "SetEnvironmentVariableA failed with error code %d\n", GetLastError() );
		goto funcEnd;
	}
	
	if ( !SteamAPI_Init() ) {
		printf( "SteamAPI_Init failed\n" );
		goto funcEnd;
	}

	printf( "\nItem drop idling is now in progress\n" );
	while ( true )
	{
		SteamInventory()->SendItemDropHeartbeat();

		SteamInventoryResult_t steamInventoryResult;
		SteamInventory()->TriggerItemDrop( &steamInventoryResult, dropListDefinition );
		SteamInventory()->DestroyResult( steamInventoryResult );

		Sleep( 1000 );
	}

funcEnd:
	printf( "Press enter to exit...\n" );
	getchar();
	return 0;
}