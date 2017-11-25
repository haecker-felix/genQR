project('genqr', ['vala', 'C'], version : '6.0.2')

i18n = import('i18n')

cc = meson.get_compiler('c')
libm = cc.find_library('m', required: false)
glib = dependency('glib-2.0')
gobject = dependency('gobject-2.0')
gio = dependency('gio-2.0')
gtk = dependency('gtk+-3.0', version : '>=3.14')
qrsvg = dependency('qrsvg-0.4')
rsvg = dependency('librsvg-2.0')

subdir('data')
subdir('po')
subdir('src')
# subdir('tests')
# TODO: unit tests

meson.add_install_script('meson_post_install.sh')
