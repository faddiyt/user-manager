# User Manager

## Teamspeak 3 Plugin to kick blocked users from your channel

### Features
- Works on any server (You just need to enter the ID of the channel-admin,-mod,-ban groups)
- Give your buddies talk power automatically if you're channel-mod
- Give your buddies channel-mod automatically if you're channel-admin
- Ban users you blocked automatically from your channel if you're channel-mod or -admin
- Automatically mute users when you block them with the plugins
- Automatically remove channel-ban from your buddies when you're channel-admin
- Set a custom kick message

### Setup
1. Download and install the [latest release](https://github.com/alex720/user-manager/releases/latest) here. You need the User-Manager.ts3_plugin file
2. If you're updating User Manager make sure Teamspeak is closed while trying to install
3. Connect to the server you'd like User Manager to manage for you
4. Open channel groups window by clicking on "Permissions" -> "Channel groups"
5. Move the window to the far right of your screen so only the group names and id's in `()` are visible
6. In your Teamspeak Client go to "Tools" -> "Options" -> "Addons" -> "My addons" -> "Plugins"
7. Search for "User Manager" and open it's "Settings"
8. (A faster way to this is to click on "Plugins" -> "User Manager" -> "Open Configuration")
9. Check the "Current Server" checkbox
10. Enter the IDs of the groups in the channel groups window we opened earlier
11. Check the Settings you wan't to enable/disable
12. Click all 3 buttons on the bottom of the window (It can lag while importing contacts)

### Usage
- To block and ban a user from your channel rightclick on him and then go to "User Manager" -> "Set / remove client on the blocklist". Same to unblock a blocked user.
