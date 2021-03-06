#ifndef MWGUI_MODE_H
#define MWGUI_MODE_H

namespace MWGui
{
  enum GuiMode
    {
      GM_Settings,      // Settings window
      GM_Inventory,     // Inventory mode
      GM_Container,
      GM_MainMenu,      // Main menu mode

      GM_Console,       // Console mode
      GM_Journal,       // Journal mode

      GM_Scroll,        // Read scroll
      GM_Book,          // Read book
      GM_Alchemy,       // Make potions

      GM_Dialogue,      // NPC interaction
      GM_Barter,
      GM_Rest,
      GM_SpellBuying,

      // Startup character creation dialogs
      GM_Name,
      GM_Race,
      GM_Birth,
      GM_Class,
      GM_ClassGenerate,
      GM_ClassPick,
      GM_ClassCreate,
      GM_Review,
      
      // interactive MessageBox
      GM_InterMessageBox,

      GM_QuickKeysMenu
    };

  // Windows shown in inventory mode
  enum GuiWindow
    {
      GW_None           = 0,

      GW_Map            = 0x01,
      GW_Inventory      = 0x02,
      GW_Magic          = 0x04,
      GW_Stats          = 0x08,

      GW_ALL            = 0xFF
    };
}

#endif
