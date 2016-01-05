using Gtk;

public class genQR : Gtk.Application {

	MainWindow window;

	public genQR() {
		Object(application_id: "org.haecker-felix.genqr", flags: ApplicationFlags.FLAGS_NONE);
	}

	protected override void activate () {
		window = new MainWindow (this);
		this.add_window(window);
		window.show_all();

		// Load the custom CSS Style
		try{
			File cssfile = File.new_for_uri("resource:///org/haecker-felix/genqr/ui/style.css");
			CssProvider css = new CssProvider();
			css.load_from_file(cssfile);
			StyleContext.add_provider_for_screen(window.screen, css, STYLE_PROVIDER_PRIORITY_APPLICATION);
		}catch{
			print("ERROR: style.css not found\n");
		}

	}



        public override void startup () {
		base.startup ();

		var Info = new GLib.SimpleAction ("info", null);
		Info.activate.connect (show_about_dialog);
		add_action (Info);

		var Quit = new GLib.SimpleAction ("quit", null);
		Quit.activate.connect (quit);
		add_action (Quit);

		var builder = new Gtk.Builder.from_resource ("/org/haecker-felix/genqr/app-menu.ui");
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

		dialog.program_name = "genQR";
		dialog.comments = "QR Code Generator";
		dialog.copyright = "Copyright © 2016 Felix Häcker";
		dialog.version = "1.0";

		dialog.license_type = Gtk.License.GPL_3_0_ONLY;
		dialog.wrap_license = true;

		dialog.website = "";
		dialog.website_label = "GitHub Projektseite";
		dialog.present ();
	}

	
	public static int main (string[] args) {
		genQR app = new genQR ();
		return app.run (args);
	}
}

