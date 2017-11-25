/*    genQR.vala
 *
 *    Copyright (C) 2016 Felix Häcker <haecker.felix1207@gmail.com>
 *
 *    genQR is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    genQR is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with genQR.  If not, see <http://www.gnu.org/licenses/>.
 */

using Gtk;

public class genQR : Gtk.Application {

	MainWindow window;

	public genQR() {
		Object(application_id: "de.haeckerfelix.genQR", flags: ApplicationFlags.FLAGS_NONE);
	}

	protected override void activate () {
		window = new MainWindow (this);
		this.add_window(window);
		window.show_all();
	}



        public override void startup () {
		base.startup ();

		var Info = new GLib.SimpleAction ("info", null);
		Info.activate.connect (show_about_dialog);
		add_action (Info);

		var Quit = new GLib.SimpleAction ("quit", null);
		Quit.activate.connect (quit);
		add_action (Quit);

		var builder = new Gtk.Builder.from_resource ("/de/haeckerfelix/genqr/ui/app-menu.ui");
		var app_menu = builder.get_object ("appmenu") as GLib.MenuModel;

		set_app_menu (app_menu);
        }

	public void show_about_dialog(){
		Gtk.AboutDialog dialog = new Gtk.AboutDialog ();
		dialog.set_destroy_with_parent (true);
		dialog.set_transient_for (window);
		dialog.set_modal (true);

		dialog.artists = null;
		dialog.authors = null;
		dialog.documenters = null;
		dialog.translator_credits = null;

		dialog.logo_icon_name = "genqr";
		dialog.program_name = "genQR";
		dialog.comments = "QR Code Generator\nScanne das Logo!";
		dialog.copyright = "Copyright © 2016 Felix Häcker";
		dialog.version = "0.1";

		//dialog.license_type = Gtk.License.GPL_3_0_ONLY;
		dialog.wrap_license = true;
		dialog.present ();
	}


	public static int main (string[] args) {
		genQR app = new genQR ();
		return app.run (args);
	}
}

