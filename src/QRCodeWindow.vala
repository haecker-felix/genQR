using Gtk;

//[GtkTemplate (ui = "/org/haecker-felix/genqr/ui/qr-code-window.ui")]
public class QRCodeWindow : Dialog {

	private QRCode Code;

        public QRCodeWindow (QRCode code, Window window) {
		Object(use_header_bar: 1);
		Code = code;

		this.border_width = 30;
		this.set_transient_for(window);
		this.set_attached_to(window);
		this.set_modal(true);
		this.set_default_size(400, 400);

		Gtk.Box content = get_content_area () as Gtk.Box;
		content.pack_end(Code, true, true, 0);
		Code.show();

		add_button ("Speichern", 1);
		this.response.connect (on_response);
        }

	private void save_qr_code(){
		// The FileChooserDialog:
		Gtk.FileChooserDialog chooser = new Gtk.FileChooserDialog ("QR Code speichern", this, Gtk.FileChooserAction.SAVE, "Abbrechen", Gtk.ResponseType.CANCEL, "Speichern", Gtk.ResponseType.ACCEPT);

		chooser.set_filename("*.png");

		if (chooser.run () == Gtk.ResponseType.ACCEPT) {
			Code.save_as_png(chooser.get_filename());
		}

		// Close the FileChooserDialog:
		chooser.close ();
		chooser.destroy();
	}

	private void print_qr_code(){
		
	}

	private void on_response (Gtk.Dialog source, int response_id) {
		switch (response_id) {
		case 1:
			save_qr_code();
			break;
		case 2:
			print_qr_code();
			break;
		}
	}

}
