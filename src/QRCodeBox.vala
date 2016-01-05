using Gtk;

[GtkTemplate (ui = "/org/haecker-felix/genqr/ui/qr-code-box.ui")]
public class QRCodeBox : Box {

	[GtkChild]
	private Box CodeImageBox;

	[GtkChild]
	private Label Text;

	private QRCode Code;
	private Window Parent;

        public QRCodeBox (QRCode code, Window window) {
		Code = code;
		Parent = window;

		Text.set_label(Code.Text);

		CodeImageBox.pack_start(Code, true, true, 0);
		Code.show();
        }

	[GtkCallback]
        private void SaveButton_clicked (Button button) {
		// The FileChooserDialog:
		Gtk.FileChooserDialog chooser = new Gtk.FileChooserDialog ("QR Code speichern", Parent, Gtk.FileChooserAction.SAVE, "Abbrechen", Gtk.ResponseType.CANCEL, "Speichern", Gtk.ResponseType.ACCEPT);

		if (chooser.run () == Gtk.ResponseType.ACCEPT) {
			Code.save_as_png(chooser.get_filename());
		}

		// Close the FileChooserDialog:
		chooser.close ();
		chooser.destroy();
        }

	[GtkCallback]
        private void CloseButton_clicked (Button button) {
		this.destroy();
        }

	[GtkCallback]
        private void PrintButton_clicked (Button button) {

        }


}
