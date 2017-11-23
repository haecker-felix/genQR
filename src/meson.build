vala_sources = [
		'genQR.vala',
		'MainWindow.vala',
		'QRCode.vala',
		'QRCodeBox.vala']

vala_args = [
	'--target-glib=2.38',
	'--pkg=config',
	'--pkg=gd-1.0',
	'--pkg=posix',
	'--vapidir=' + meson.current_source_dir() + '/vapis']

executable('genqr',
		vala_sources,
		resources,
		c_args : [ '-DVERSION="' + meson.project_version() + '"', '-DGETTEXT_PACKAGE="genqr"', '-DGNOMELOCALEDIR="' + get_option('prefix') + '/' + get_option('localedir') + '"' ],
		vala_args: vala_args,
		install : true,
		dependencies : [glib, gobject, gio, gtk, qrencode])
