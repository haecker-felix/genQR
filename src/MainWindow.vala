using Gtk;

[GtkTemplate (ui = "/org/haecker-felix/genqr/ui/main-window.ui")]
public class MainWindow : ApplicationWindow {

	[GtkChild]
	private Entry TextEntry;

	[GtkChild]
	private Box CodeBox;


        public MainWindow (genQR app) {
		Object(application: app);
        }

	[GtkCallback]
        private void GenerateTextCodeButton_clicked (Button button) {
		if(TextEntry.get_text() != ""){
			// QR code erstellen
			QRCode code = new QRCode(TextEntry.get_text(), 0, Qrencode.EcLevel.H, Qrencode.Mode.B8, 1);

			// QR Code box erstellen (GUI)
			QRCodeBox box = new QRCodeBox(code, this);
			box.show();

			// Den neuen QR Code zur Box hinzufügen
			CodeBox.add(box);

			// Text wieder löschen
			TextEntry.set_text("");
		}
        }

	[GtkCallback]
        private void OpenContactButton_clicked (Button button) {
		// The FileChooserDialog:
		Gtk.FileChooserDialog chooser = new Gtk.FileChooserDialog ("Kontakt öffnen", this, Gtk.FileChooserAction.OPEN, "Abbrechen", Gtk.ResponseType.CANCEL, "Öffnen", Gtk.ResponseType.ACCEPT);

		// We are only interested in jpegs:
		Gtk.FileFilter filter = new Gtk.FileFilter ();
		chooser.set_filter (filter);
		filter.add_mime_type ("text/x-vcard");

		if (chooser.run () == Gtk.ResponseType.ACCEPT) {
			File file = File.new_for_path (chooser.get_filename());
			string txt = "";

			try {
				FileInputStream @is = file.read ();
				DataInputStream dis = new DataInputStream (@is);
				string line;

				while ((line = dis.read_line ()) != null) {
					txt += line;
					txt += "\n";
				}
			} catch (Error e) {
				stdout.printf ("ERROR: %s\n", e.message);
			}

			print(txt);
			QRCode code = new QRCode(txt, 0, Qrencode.EcLevel.H, Qrencode.Mode.B8, 1);

			// QR Code box erstellen (GUI)
			QRCodeBox box = new QRCodeBox(code, this);
			box.show();

			// Den neuen QR Code zur Box hinzufügen
			CodeBox.add(box);
		}

		// Close the FileChooserDialog:
		chooser.close ();
		chooser.destroy();
        }

}
