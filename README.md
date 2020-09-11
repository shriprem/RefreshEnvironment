# RefreshEnvironment

A utility to notify all open Windows applications of a change in environment variables.

Uses **SendMessageTimeout**
to send a **WM_SETTINGCHANGE** notification.

Reference: https://msdn.microsoft.com/en-us/library/ms682653(v=vs.85).aspx