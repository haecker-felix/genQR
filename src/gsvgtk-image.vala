/* Copyright (C) 2017 Daniel Espinosa <daniel.espinosa@pwmc.mx>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

using GSvg;
using Gtk;
using GXml;

[GtkTemplate (ui="/de/haeckerfelix/genqr/ui/svgbox.ui")]
public class SvgBox : Gtk.Box {
	private GSvg.Document _svg = null;
	[GtkChild] private Gtk.Image image;

	public string str {
		owned get { return (svg as GomDocument).write_string (); }
		set {
			if (svg == null) svg = new GSvg.GsDocument ();
			(svg as GomDocument).read_from_string (str);
		}
	}

	public GSvg.Document svg {
		get {
			if (_svg == null) _svg = new GSvg.GsDocument ();
			return _svg;
		}
		set {
			_svg = value;
			render ();
		}
	}

	public void render () {
		var rsvg = new Rsvg.Handle ();
		rsvg.write (str.data);
		rsvg.close ();
		image.pixbuf = rsvg.get_pixbuf ();
	}
}

