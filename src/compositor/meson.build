compositor_inc = include_directories('.')


hopalong_sources = [
  'hopalong-server.c',
  'hopalong-output.c',
  'hopalong-xdg.c',
  'hopalong-cursor.c',
  'hopalong-seat.c',
  'hopalong-view.c',
  'hopalong-pango-util.c',
  'hopalong-decoration.c',
  'hopalong-environment.c',
  'hopalong-main.c',
]


hopalong_exe = executable('hopalong',
  hopalong_sources,
  dependencies: [
    server_protos,
    wayland_server,
    cairo,
    pangocairo,
    pixman,
    glesv2,
    wlroots,
    xkbcommon
  ],
  install: true
)
