/*    QRCodeBox.vala
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
