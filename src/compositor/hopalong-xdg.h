/*
 * Hopalong - a friendly Wayland compositor
 * Copyright (c) 2020 Ariadne Conill <ariadne@dereferenced.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#ifndef HOPALONG_COMPOSITOR_XDG_H
#define HOPALONG_COMPOSITOR_XDG_H

#include <wayland-server-core.h>
#include <wlr/backend.h>
#include <wlr/render/wlr_renderer.h>
#include <wlr/types/wlr_cursor.h>
#include <wlr/types/wlr_compositor.h>
#include <wlr/types/wlr_data_device.h>
#include <wlr/types/wlr_input_device.h>
#include <wlr/types/wlr_keyboard.h>
#include <wlr/types/wlr_matrix.h>
#include <wlr/types/wlr_output.h>
#include <wlr/types/wlr_output_layout.h>
#include <wlr/types/wlr_pointer.h>
#include <wlr/types/wlr_seat.h>
#include <wlr/types/wlr_xcursor_manager.h>
#include <wlr/types/wlr_xdg_decoration_v1.h>
#include <wlr/types/wlr_xdg_shell.h>
#include <wlr/util/log.h>
#include <xkbcommon/xkbcommon.h>

struct hopalong_server;
struct hopalong_view;

extern void hopalong_xdg_shell_setup(struct hopalong_server *server);
extern void hopalong_xdg_shell_teardown(struct hopalong_server *server);
extern void hopalong_xdg_focus_view(struct hopalong_view *view, struct wlr_surface *surface);
extern struct hopalong_view *hopalong_xdg_desktop_view_at(struct hopalong_server *server, double lx, double ly,
	struct wlr_surface **surface, double *sx, double *sy);
extern bool hopalong_xdg_view_at(struct hopalong_view *view,
        double lx, double ly, struct wlr_surface **surface, double *sx, double *sy);

#endif
