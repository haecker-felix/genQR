/*    QRCode.vala
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

public class QRCode : Gtk.DrawingArea {
	private Qrencode.QRcode? qrcode;
	private const double MIN_SQUARE_SIZE = 5.0;

	public string Title;
	public string Text;
	private int Version;
	private Qrencode.Mode Mode;
	private Qrencode.EcLevel Level;
	private int CaseSensitive;

	public QRCode(string text, int version, Qrencode.EcLevel level, Qrencode.Mode mode, int casesensitive){
		Text = text;
		Version = version;
		Level = level;
		Mode = mode;
		CaseSensitive = casesensitive;

		qrcode = new Qrencode.QRcode.encodeString(Text, Version, Level, Mode, CaseSensitive);
                //queue_draw();
	}

   	protected override bool draw(Cairo.Context cr) {
        	if (qrcode != null) {
            		uint width, height;

		    	//width = get_allocated_width();
		   	//height = get_allocated_height();

			width = 300;
			height = 300;


            		/* make it square */
            		if (height < width) {
                		width = height;
            		}



            		double square_size = width / qrcode.width;
            		if (square_size < MIN_SQUARE_SIZE) {
                		square_size = MIN_SQUARE_SIZE;
            		}

            		cr.save();



            		for (int iy = 0; iy < qrcode.width; iy++) {
                		for (int ix = 0; ix < qrcode.width; ix++) {
				    /* Symbol data is represented as an array contains
				     * width*width uchars. Each uchar represents a module
				     * (dot). If the less significant bit of the uchar
				     * is 1, the corresponding module is black. The other
				     * bits are meaningless for us.
				     */
                    			if ((qrcode.data[iy * qrcode.width + ix] & 1) != 0) {
                    				cr.set_source_rgb(0, 0, 0);
                        			cr.rectangle(ix * square_size, iy * square_size, square_size, square_size);
                        			cr.fill();
                    			}else{
                    				cr.set_source_rgb(255, 255, 255);
                        			cr.rectangle(ix * square_size, iy * square_size, square_size, square_size);
                        			cr.fill();
                    			}
                		}
            		}
	
            		cr.restore();
        	}
        	return false;
    	}

	public void save_as_png(string name){
		if (qrcode != null) {
            		int width, height;

		    	width = get_allocated_width();
		   	height = get_allocated_height();

            		/* make it square */
            		if (height < width) {
                		width = height;
            		}

            		double square_size = width / qrcode.width;
            		if (square_size < MIN_SQUARE_SIZE) {
                		square_size = MIN_SQUARE_SIZE;
            		}

			// Create a context:
			Cairo.ImageSurface surface = new Cairo.ImageSurface (Cairo.Format.ARGB32, width, height);
			Cairo.Context context = new Cairo.Context (surface);

            		context.save();



            		for (int iy = 0; iy < qrcode.width; iy++) {
                		for (int ix = 0; ix < qrcode.width; ix++) {
				    /* Symbol data is represented as an array contains
				     * width*width uchars. Each uchar represents a module
				     * (dot). If the less significant bit of the uchar
				     * is 1, the corresponding module is black. The other
				     * bits are meaningless for us.
				     */
                    			if ((qrcode.data[iy * qrcode.width + ix] & 1) != 0) {
            					context.set_source_rgb(0, 0, 0);
                        			context.rectangle(ix * square_size, iy * square_size, square_size, square_size);
                        			context.fill();
						print("\u2588\u2588");
                    			}else{
            					context.set_source_rgb(255, 255, 255);
						context.rectangle(ix * square_size, iy * square_size, square_size, square_size);
                        			context.fill();
						print("  ");
					}
                		}
				print("\n");
            		}
	
            		context.restore();
			// Save the image:
			surface.write_to_png (name);
			print("INFO: Succesfully saved the QR Code! (\"" + Text + "\")\n");
        	}
	}
}

