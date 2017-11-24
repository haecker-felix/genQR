vala_sources = [
		'genQR.vala',
		'MainWindow.vala',
		'QRCode.vala',
		'QRCodeBox.vala']

vala_args = [
	'--target-glib=2.38',
	'--pkg=qrsvg',
	'--pkg=qrsvg-0.4',
	'--pkg=posix']

executable('genqr',
		vala_sources,
		resources,
		c_args : [ '-DVERSION="' + meson.project_version() + '"', '-DGETTEXT_PACKAGE="genqr"', '-DGNOMELOCALEDIR="' + get_option('prefix') + '/' + get_option('localedir') + '"' ],
		vala_args: vala_args,
		install : true,
		dependencies : [glib, gobject, qrsvg, gio, gtk])
