vala_sources = [
		'genQR.vala',
#		'gsvgtk-image.vala',
		'MainWindow.vala']

vala_args = [
	'--target-glib=2.38',
	'--pkg=qrsvg-0.4',
	'--pkg=posix']

executable('genqr',
		vala_sources,
		resources,
		c_args : [ '-DVERSION="' + meson.project_version() + '"', '-DGETTEXT_PACKAGE="genqr"', '-DGNOMELOCALEDIR="' + get_option('prefix') + '/' + get_option('localedir') + '"' ],
		vala_args: vala_args,
		install : true,
		dependencies : [glib, gobject, qrsvg, gio, gtk])
