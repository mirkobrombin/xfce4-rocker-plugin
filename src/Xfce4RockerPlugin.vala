// -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
//
//  Copyright (C) 2020 Mirko Brombin <send@mirko.pm>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

[DBus (name = "pm.mirko.rocker")]
interface Rocker_Service : Object {
  public signal void visibility_changed (bool launcher_visible);
}

Gtk.Button app_button;

namespace Rocker {

  public class Plugin : Xfce.PanelPlugin {

    //private Rocker app;

    //public RockerView view = null;
    public static bool silent = false;
    public static bool command_mode = false;
    public bool launched = false;

    public static Settings settings { get; private set; default = null; }
    public static Gtk.IconTheme icon_theme { get; set; default = null; }
    //private Gtk.ToggleButton app_button;

    private int view_width;
    private int view_height;
    private bool first = true;

    private Rocker_Service rocker_bus;

    public override void @construct() {

        app_button = new Gtk.Button();
        app_button.set_tooltip_text("Applications");
        var image = new Gtk.Image.from_icon_name ("rocker-icon", Gtk.IconSize.MENU);
        app_button.set_image(image);
        
        //app_button.set_relief(Gtk.ReliefStyle.NONE);
        // `Gtk.Button.set_focus_on_click' has been deprecated since 3.20
        //app_button.set_focus_on_click(false);
        add (app_button);
        add_action_widget (app_button);

        app_button.show ();

        rocker_bus = Bus.get_proxy_sync (BusType.SESSION, "pm.mirko.rocker",
                                                        "/pm/mirko//rocker");

        app_button.clicked.connect (() => {
            try {
              Process.spawn_command_line_async ("rocker");
              //remote_bus.do_show ();
            } catch (Error e) {
              warning (e.message);
            }
        });

        /*
        try{
          rocker_bus.visibility_changed.connect ((visible) => {
              if(!visible)
                app_button.set_active(visible);
              else {
                app_button.set_active(visible);
              }
          });
        } catch (Error e) {
          warning (e.message);
        }
        */
    		menu_show_about ();
    		about.connect (() => {
    				Gtk.show_about_dialog (null,
    					"program-name", "Rocker Launcher",
    					"comments", "A fork from Panther Launcher. Its main change is that it doesn't depend on Gala, Granite, Plank and works on latest xfce releases.",
    					null);
    			});

    		destroy.connect (() => { Gtk.main_quit (); });
    }
  }
}

[ModuleInit]
public Type xfce_panel_module_init(TypeModule module) {
  return typeof (Rocker.Plugin);
}
