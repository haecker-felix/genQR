i18n = import('i18n')
gnome_module = import('gnome')

# Compile Resources #
resources = gnome_module.compile_resources('genqr-resources', 'de.haeckerfelix.genQR.gresource.xml', source_dir : '.')


# Translate and install appdata and desktop file #
i18n.merge_file(
	input:  'de.haeckerfelix.genQR.desktop.in',
	output: 'de.haeckerfelix.genQR.desktop',
	po_dir: '../po/',
	type:   'desktop',
	install: true,
	install_dir: join_paths(get_option('datadir'), 'applications')
)

i18n.merge_file(
  input:  'de.haeckerfelix.genQR.appdata.xml.in',
  output: 'de.haeckerfelix.genQR.appdata.xml',
  po_dir: '../po/',
  type:   'xml',
  install: true,
  install_dir: join_paths(get_option('datadir'), 'appdata')
)

# Icons #
icondir = join_paths(get_option('datadir'), 'icons', 'hicolor')
icon_sizes = ['16x16', '24x24', '32x32', '48x48', '64x64', '128x128']

foreach size : icon_sizes
	install_data('icons/hicolor/@0@/apps/de.haeckerfelix.genQR.png'.format(size), install_dir : join_paths(icondir, size, 'apps'))
endforeach

#install_data('icons/hicolor/scalable/apps/de.haeckerfelix.genQR.svg', install_dir : 'share/icons/hicolor/scalable/apps')
#install_data('icons/hicolor/scalable/apps/de.haeckerfelix.genQR-symbolic.svg', install_dir : 'share/icons/hicolor/symbolic/apps')
