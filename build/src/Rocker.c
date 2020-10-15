/* Rocker.c generated by valac 0.50.1, the Vala compiler
 * generated from Rocker.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/**/
/*  Copyright (C) 2011-2012 Giulio Collura*/
/*  Copyright (C) 2015 Raster Software Vigo*/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <gio/gio.h>
#include <cairo-gobject.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <stdio.h>

#define ROCKER_TYPE_ROCKER (rocker_rocker_get_type ())
#define ROCKER_ROCKER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_ROCKER, RockerRocker))
#define ROCKER_ROCKER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_ROCKER, RockerRockerClass))
#define ROCKER_IS_ROCKER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_ROCKER))
#define ROCKER_IS_ROCKER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_ROCKER))
#define ROCKER_ROCKER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_ROCKER, RockerRockerClass))

typedef struct _RockerRocker RockerRocker;
typedef struct _RockerRockerClass RockerRockerClass;
typedef struct _RockerRockerPrivate RockerRockerPrivate;

#define ROCKER_TYPE_ROCKER_VIEW (rocker_rocker_view_get_type ())
#define ROCKER_ROCKER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_ROCKER_VIEW, RockerRockerView))
#define ROCKER_ROCKER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_ROCKER_VIEW, RockerRockerViewClass))
#define ROCKER_IS_ROCKER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_ROCKER_VIEW))
#define ROCKER_IS_ROCKER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_ROCKER_VIEW))
#define ROCKER_ROCKER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_ROCKER_VIEW, RockerRockerViewClass))

typedef struct _RockerRockerView RockerRockerView;
typedef struct _RockerRockerViewClass RockerRockerViewClass;

#define ROCKER_TYPE_DBUS_SERVICE (rocker_dbus_service_get_type ())
#define ROCKER_DBUS_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_DBUS_SERVICE, RockerDBusService))
#define ROCKER_DBUS_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_DBUS_SERVICE, RockerDBusServiceClass))
#define ROCKER_IS_DBUS_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_DBUS_SERVICE))
#define ROCKER_IS_DBUS_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_DBUS_SERVICE))
#define ROCKER_DBUS_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_DBUS_SERVICE, RockerDBusServiceClass))

typedef struct _RockerDBusService RockerDBusService;
typedef struct _RockerDBusServiceClass RockerDBusServiceClass;
enum  {
	ROCKER_ROCKER_0_PROPERTY,
	ROCKER_ROCKER_SET_VIEW_WIDTH_PROPERTY,
	ROCKER_ROCKER_SET_VIEW_HEIGHT_PROPERTY,
	ROCKER_ROCKER_NUM_PROPERTIES
};
static GParamSpec* rocker_rocker_properties[ROCKER_ROCKER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define ROCKER_TYPE_SETTINGS (rocker_settings_get_type ())
#define ROCKER_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_SETTINGS, RockerSettings))
#define ROCKER_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_SETTINGS, RockerSettingsClass))
#define ROCKER_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_SETTINGS))
#define ROCKER_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_SETTINGS))
#define ROCKER_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_SETTINGS, RockerSettingsClass))

typedef struct _RockerSettings RockerSettings;
typedef struct _RockerSettingsClass RockerSettingsClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_option_context_free0(var) ((var == NULL) ? NULL : (var = (g_option_context_free (var), NULL)))

#define TYPE_REMOTE_CONTROL (remote_control_get_type ())
#define REMOTE_CONTROL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REMOTE_CONTROL, RemoteControl))
#define REMOTE_CONTROL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_REMOTE_CONTROL, RemoteControlClass))
#define IS_REMOTE_CONTROL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REMOTE_CONTROL))
#define IS_REMOTE_CONTROL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_REMOTE_CONTROL))
#define REMOTE_CONTROL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REMOTE_CONTROL, RemoteControlClass))

typedef struct _RemoteControl RemoteControl;
typedef struct _RemoteControlClass RemoteControlClass;
typedef struct _RemoteControlPrivate RemoteControlPrivate;
enum  {
	REMOTE_CONTROL_0_PROPERTY,
	REMOTE_CONTROL_NUM_PROPERTIES
};
static GParamSpec* remote_control_properties[REMOTE_CONTROL_NUM_PROPERTIES];

struct _RockerRocker {
	GtkApplication parent_instance;
	RockerRockerPrivate * priv;
	RockerRockerView* view;
	gboolean launched;
	GtkToggleButton* app_button;
	RockerDBusService* dbus_service;
};

struct _RockerRockerClass {
	GtkApplicationClass parent_class;
};

struct _RockerRockerPrivate {
	gint view_width;
	gint view_height;
};

struct _RemoteControl {
	GObject parent_instance;
	RemoteControlPrivate * priv;
};

struct _RemoteControlClass {
	GObjectClass parent_class;
};

extern RockerRocker* app;
RockerRocker* app = NULL;
static gint RockerRocker_private_offset;
static gpointer rocker_rocker_parent_class = NULL;
extern gboolean rocker_rocker_silent;
extern gboolean rocker_rocker_command_mode;
gboolean rocker_rocker_silent = FALSE;
gboolean rocker_rocker_command_mode = FALSE;
static RockerSettings* rocker_rocker__settings;
static RockerSettings* rocker_rocker__settings = NULL;
static GtkIconTheme* rocker_rocker__icon_theme;
static GtkIconTheme* rocker_rocker__icon_theme = NULL;
extern gint rocker_pixels_ITEM_SIZE;
extern gint rocker_pixels_SIDEBAR_WIDTH;
static gpointer remote_control_parent_class = NULL;

GType rocker_rocker_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerRocker, g_object_unref)
GType rocker_rocker_view_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerRockerView, g_object_unref)
GType rocker_dbus_service_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerDBusService, g_object_unref)
GType rocker_settings_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerSettings, g_object_unref)
RockerRocker* rocker_rocker_new (void);
RockerRocker* rocker_rocker_construct (GType object_type);
RockerSettings* rocker_settings_new (void);
RockerSettings* rocker_settings_construct (GType object_type);
static void rocker_rocker_set_settings (RockerSettings* value);
RockerSettings* rocker_rocker_get_settings (void);
gint rocker_settings_get_icon_size (RockerSettings* self);
#define ROCKER_PIXELS_PADDING 25
#define ROCKER_PIXELS_SIDEBAR_GRID_PADDING 15
gboolean rocker_rocker_realize_view (RockerRocker* self,
                                     cairo_t* cr);
void rocker_rocker_view_reposition (RockerRockerView* self);
static void rocker_rocker_real_activate (GApplication* base);
RockerRockerView* rocker_rocker_view_new (void);
RockerRockerView* rocker_rocker_view_construct (GType object_type);
static gboolean _rocker_rocker_realize_view_gtk_widget_draw (GtkWidget* _sender,
                                                      cairo_t* cr,
                                                      gpointer self);
RockerDBusService* rocker_dbus_service_new (RockerRockerView* view);
RockerDBusService* rocker_dbus_service_construct (GType object_type,
                                                  RockerRockerView* view);
void rocker_rocker_view_show_rocker (RockerRockerView* self);
gint rocker_rocker_main (gchar** args,
                         gint args_length1);
#define CONSTANTS_GETTEXT_PACKAGE "rocker_launcher"
#define CONSTANTS_DATADIR "/usr/share"
void on_bus_aquired (GDBusConnection* conn);
static void _on_bus_aquired_gbus_acquired_callback (GDBusConnection* connection,
                                             const gchar* name,
                                             gpointer self);
static void __lambda69_ (void);
static void ___lambda69__gbus_name_acquired_callback (GDBusConnection* connection,
                                               const gchar* name,
                                               gpointer self);
static void __lambda70_ (void);
static void ___lambda70__gbus_name_lost_callback (GDBusConnection* connection,
                                           const gchar* name,
                                           gpointer self);
GtkIconTheme* rocker_rocker_get_icon_theme (void);
void rocker_rocker_set_icon_theme (GtkIconTheme* value);
void rocker_rocker_set_set_view_width (RockerRocker* self,
                                       gint value);
void rocker_rocker_set_set_view_height (RockerRocker* self,
                                        gint value);
static GObject * rocker_rocker_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties);
static void rocker_rocker_finalize (GObject * obj);
static GType rocker_rocker_get_type_once (void);
static void _vala_rocker_rocker_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec);
static void _vala_rocker_rocker_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec);
RemoteControl* remote_control_new (void);
RemoteControl* remote_control_construct (GType object_type);
GType remote_control_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RemoteControl, g_object_unref)
guint remote_control_register_object (void* object,
                                      GDBusConnection* connection,
                                      const gchar* path,
                                      GError** error);
gint remote_control_do_ping (RemoteControl* self,
                             gint v);
void remote_control_do_show (RemoteControl* self);
static GType remote_control_get_type_once (void);
static void _dbus_remote_control_do_ping (RemoteControl* self,
                                   GVariant* _parameters_,
                                   GDBusMethodInvocation* invocation);
static void _dbus_remote_control_do_show (RemoteControl* self,
                                   GVariant* _parameters_,
                                   GDBusMethodInvocation* invocation);
static void remote_control_dbus_interface_method_call (GDBusConnection* connection,
                                                const gchar* sender,
                                                const gchar* object_path,
                                                const gchar* interface_name,
                                                const gchar* method_name,
                                                GVariant* parameters,
                                                GDBusMethodInvocation* invocation,
                                                gpointer user_data);
static GVariant* remote_control_dbus_interface_get_property (GDBusConnection* connection,
                                                      const gchar* sender,
                                                      const gchar* object_path,
                                                      const gchar* interface_name,
                                                      const gchar* property_name,
                                                      GError** error,
                                                      gpointer user_data);
static gboolean remote_control_dbus_interface_set_property (GDBusConnection* connection,
                                                     const gchar* sender,
                                                     const gchar* object_path,
                                                     const gchar* interface_name,
                                                     const gchar* property_name,
                                                     GVariant* value,
                                                     GError** error,
                                                     gpointer user_data);
static void _remote_control_unregister_object (gpointer user_data);

static const GOptionEntry ROCKER_ROCKER_entries[3] = {{"silent", 's', 0, G_OPTION_ARG_NONE, &rocker_rocker_silent, "Launch Rocker as a background process without it appearing visually.", NULL}, {"command-mode", 'c', 0, G_OPTION_ARG_NONE, &rocker_rocker_command_mode, "This feature is not implemented yet. When it is, description will be c" \
"hanged.", NULL}, {NULL}};
static const GDBusArgInfo _remote_control_dbus_arg_info_do_ping_v = {-1, "v", "i", NULL};
static const GDBusArgInfo _remote_control_dbus_arg_info_do_ping_result = {-1, "result", "i", NULL};
static const GDBusArgInfo * const _remote_control_dbus_arg_info_do_ping_in[] = {&_remote_control_dbus_arg_info_do_ping_v, NULL};
static const GDBusArgInfo * const _remote_control_dbus_arg_info_do_ping_out[] = {&_remote_control_dbus_arg_info_do_ping_result, NULL};
static const GDBusMethodInfo _remote_control_dbus_method_info_do_ping = {-1, "DoPing", (GDBusArgInfo **) (&_remote_control_dbus_arg_info_do_ping_in), (GDBusArgInfo **) (&_remote_control_dbus_arg_info_do_ping_out), NULL};
static const GDBusArgInfo * const _remote_control_dbus_arg_info_do_show_in[] = {NULL};
static const GDBusArgInfo * const _remote_control_dbus_arg_info_do_show_out[] = {NULL};
static const GDBusMethodInfo _remote_control_dbus_method_info_do_show = {-1, "DoShow", (GDBusArgInfo **) (&_remote_control_dbus_arg_info_do_show_in), (GDBusArgInfo **) (&_remote_control_dbus_arg_info_do_show_out), NULL};
static const GDBusMethodInfo * const _remote_control_dbus_method_info[] = {&_remote_control_dbus_method_info_do_ping, &_remote_control_dbus_method_info_do_show, NULL};
static const GDBusSignalInfo * const _remote_control_dbus_signal_info[] = {NULL};
static const GDBusPropertyInfo * const _remote_control_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _remote_control_dbus_interface_info = {-1, "pm.mirko.rocker.remotecontrol", (GDBusMethodInfo **) (&_remote_control_dbus_method_info), (GDBusSignalInfo **) (&_remote_control_dbus_signal_info), (GDBusPropertyInfo **) (&_remote_control_dbus_property_info), NULL};
static const GDBusInterfaceVTable _remote_control_dbus_interface_vtable = {remote_control_dbus_interface_method_call, remote_control_dbus_interface_get_property, remote_control_dbus_interface_set_property};

static inline gpointer
rocker_rocker_get_instance_private (RockerRocker* self)
{
	return G_STRUCT_MEMBER_P (self, RockerRocker_private_offset);
}

RockerRocker*
rocker_rocker_construct (GType object_type)
{
	RockerRocker * self = NULL;
	RockerSettings* _tmp0_;
	RockerSettings* _tmp1_;
	RockerSettings* _tmp2_;
	RockerSettings* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	self = (RockerRocker*) g_object_new (object_type, NULL);
	_tmp0_ = rocker_settings_new ();
	_tmp1_ = _tmp0_;
	rocker_rocker_set_settings (_tmp1_);
	_g_object_unref0 (_tmp1_);
	_tmp2_ = rocker_rocker_get_settings ();
	_tmp3_ = _tmp2_;
	_tmp4_ = rocker_settings_get_icon_size (_tmp3_);
	_tmp5_ = _tmp4_;
	rocker_pixels_ITEM_SIZE = _tmp5_ * 2;
	rocker_pixels_SIDEBAR_WIDTH = ((ROCKER_PIXELS_PADDING + rocker_pixels_ITEM_SIZE) - ROCKER_PIXELS_SIDEBAR_GRID_PADDING) - 1;
	return self;
}

RockerRocker*
rocker_rocker_new (void)
{
	return rocker_rocker_construct (ROCKER_TYPE_ROCKER);
}

gboolean
rocker_rocker_realize_view (RockerRocker* self,
                            cairo_t* cr)
{
	GtkAllocation alloc = {0};
	RockerRockerView* _tmp0_;
	GtkAllocation _tmp1_ = {0};
	gboolean _tmp2_ = FALSE;
	GtkAllocation _tmp3_;
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->view;
	gtk_widget_get_allocation ((GtkWidget*) _tmp0_, &_tmp1_);
	alloc = _tmp1_;
	_tmp3_ = alloc;
	if (_tmp3_.width != self->priv->view_width) {
		_tmp2_ = TRUE;
	} else {
		GtkAllocation _tmp4_;
		_tmp4_ = alloc;
		_tmp2_ = _tmp4_.height != self->priv->view_height;
	}
	if (_tmp2_) {
		GtkAllocation _tmp5_;
		GtkAllocation _tmp6_;
		RockerRockerView* _tmp7_;
		_tmp5_ = alloc;
		self->priv->view_width = _tmp5_.width;
		_tmp6_ = alloc;
		self->priv->view_height = _tmp6_.height;
		_tmp7_ = self->view;
		rocker_rocker_view_reposition (_tmp7_);
	}
	result = FALSE;
	return result;
}

static gboolean
_rocker_rocker_realize_view_gtk_widget_draw (GtkWidget* _sender,
                                             cairo_t* cr,
                                             gpointer self)
{
	gboolean result;
	result = rocker_rocker_realize_view ((RockerRocker*) self, cr);
	return result;
}

static void
rocker_rocker_real_activate (GApplication* base)
{
	RockerRocker * self;
	GList* _tmp0_;
	self = (RockerRocker*) base;
	_tmp0_ = gtk_application_get_windows ((GtkApplication*) self);
	if (_tmp0_ == NULL) {
		RockerRockerView* _tmp1_;
		RockerRockerView* _tmp2_;
		RockerRockerView* _tmp3_;
		RockerDBusService* _tmp4_;
		self->priv->view_width = -1;
		self->priv->view_height = -1;
		_tmp1_ = rocker_rocker_view_new ();
		g_object_ref_sink (_tmp1_);
		_g_object_unref0 (self->view);
		self->view = _tmp1_;
		_tmp2_ = self->view;
		gtk_window_set_application ((GtkWindow*) _tmp2_, (GtkApplication*) self);
		_tmp3_ = self->view;
		g_signal_connect_object ((GtkWidget*) _tmp3_, "draw", (GCallback) _rocker_rocker_realize_view_gtk_widget_draw, self, G_CONNECT_AFTER);
		_tmp4_ = self->dbus_service;
		if (_tmp4_ == NULL) {
			RockerRockerView* _tmp5_;
			RockerDBusService* _tmp6_;
			_tmp5_ = self->view;
			_tmp6_ = rocker_dbus_service_new (_tmp5_);
			_g_object_unref0 (self->dbus_service);
			self->dbus_service = _tmp6_;
		}
		if (!rocker_rocker_silent) {
			RockerRockerView* _tmp7_;
			_tmp7_ = self->view;
			rocker_rocker_view_show_rocker (_tmp7_);
		}
	} else {
		gboolean _tmp8_ = FALSE;
		RockerRockerView* _tmp9_;
		gboolean _tmp10_;
		gboolean _tmp11_;
		_tmp9_ = self->view;
		_tmp10_ = gtk_widget_get_visible ((GtkWidget*) _tmp9_);
		_tmp11_ = _tmp10_;
		if (_tmp11_) {
			_tmp8_ = !rocker_rocker_silent;
		} else {
			_tmp8_ = FALSE;
		}
		if (_tmp8_) {
			RockerRockerView* _tmp12_;
			_tmp12_ = self->view;
			gtk_widget_hide ((GtkWidget*) _tmp12_);
		} else {
			RockerRockerView* _tmp13_;
			_tmp13_ = self->view;
			rocker_rocker_view_show_rocker (_tmp13_);
		}
	}
	rocker_rocker_silent = FALSE;
}

static void
_on_bus_aquired_gbus_acquired_callback (GDBusConnection* connection,
                                        const gchar* name,
                                        gpointer self)
{
	on_bus_aquired (connection);
}

static void
__lambda69_ (void)
{
}

static void
___lambda69__gbus_name_acquired_callback (GDBusConnection* connection,
                                          const gchar* name,
                                          gpointer self)
{
	__lambda69_ ();
}

static void
__lambda70_ (void)
{
}

static void
___lambda70__gbus_name_lost_callback (GDBusConnection* connection,
                                      const gchar* name,
                                      gpointer self)
{
	__lambda70_ ();
}

gint
rocker_rocker_main (gchar** args,
                    gint args_length1)
{
	gchar* _tmp0_;
	gchar* _tmp1_;
	RockerRocker* _tmp12_;
	RockerRocker* _tmp13_;
	GError* _inner_error0_ = NULL;
	gint result = 0;
	_tmp0_ = g_build_filename (CONSTANTS_DATADIR, "locale", NULL);
	_tmp1_ = _tmp0_;
	bindtextdomain (CONSTANTS_GETTEXT_PACKAGE, _tmp1_);
	_g_free0 (_tmp1_);
	textdomain (CONSTANTS_GETTEXT_PACKAGE);
	bind_textdomain_codeset (CONSTANTS_GETTEXT_PACKAGE, "UTF-8");
	if (args_length1 > 1) {
		GOptionContext* context = NULL;
		GOptionContext* _tmp2_;
		GOptionContext* _tmp3_;
		GOptionContext* _tmp4_;
		GOptionGroup* _tmp5_;
		_tmp2_ = g_option_context_new ("");
		context = _tmp2_;
		_tmp3_ = context;
		g_option_context_add_main_entries (_tmp3_, ROCKER_ROCKER_entries, "rocker");
		_tmp4_ = context;
		_tmp5_ = gtk_get_option_group (TRUE);
		g_option_context_add_group (_tmp4_, _tmp5_);
		{
			GOptionContext* _tmp6_;
			_tmp6_ = context;
			g_option_context_parse (_tmp6_, (gint*) (&args_length1), &args, &_inner_error0_);
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				goto __catch0_g_error;
			}
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* e = NULL;
			GError* _tmp7_;
			const gchar* _tmp8_;
			gchar* _tmp9_;
			gchar* _tmp10_;
			e = _inner_error0_;
			_inner_error0_ = NULL;
			_tmp7_ = e;
			_tmp8_ = _tmp7_->message;
			_tmp9_ = g_strconcat (_tmp8_, "\n", NULL);
			_tmp10_ = _tmp9_;
			g_print ("%s", _tmp10_);
			_g_free0 (_tmp10_);
			_g_error_free0 (e);
		}
		__finally0:
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			gint _tmp11_ = -1;
			_g_option_context_free0 (context);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return _tmp11_;
		}
		_g_option_context_free0 (context);
	}
	_tmp12_ = rocker_rocker_new ();
	_g_object_unref0 (app);
	app = _tmp12_;
	g_bus_own_name_with_closures (G_BUS_TYPE_SESSION, "pm.mirko.rocker.remotecontrol", G_BUS_NAME_OWNER_FLAGS_NONE, (GClosure*) ((_on_bus_aquired_gbus_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _on_bus_aquired_gbus_acquired_callback, NULL, (GClosureNotify) NULL)), (GClosure*) ((___lambda69__gbus_name_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda69__gbus_name_acquired_callback, NULL, (GClosureNotify) NULL)), (GClosure*) ((___lambda70__gbus_name_lost_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda70__gbus_name_lost_callback, NULL, (GClosureNotify) NULL)));
	_tmp13_ = app;
	result = g_application_run ((GApplication*) _tmp13_, (gint) args_length1, args);
	return result;
}

int
main (int argc,
      char ** argv)
{
	return rocker_rocker_main (argv, argc);
}

RockerSettings*
rocker_rocker_get_settings (void)
{
	RockerSettings* result;
	RockerSettings* _tmp0_;
	_tmp0_ = rocker_rocker__settings;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
rocker_rocker_set_settings (RockerSettings* value)
{
	RockerSettings* _tmp0_;
	_tmp0_ = _g_object_ref0 (value);
	_g_object_unref0 (rocker_rocker__settings);
	rocker_rocker__settings = _tmp0_;
}

GtkIconTheme*
rocker_rocker_get_icon_theme (void)
{
	GtkIconTheme* result;
	GtkIconTheme* _tmp0_;
	_tmp0_ = rocker_rocker__icon_theme;
	result = _tmp0_;
	return result;
}

void
rocker_rocker_set_icon_theme (GtkIconTheme* value)
{
	GtkIconTheme* _tmp0_;
	_tmp0_ = _g_object_ref0 (value);
	_g_object_unref0 (rocker_rocker__icon_theme);
	rocker_rocker__icon_theme = _tmp0_;
}

void
rocker_rocker_set_set_view_width (RockerRocker* self,
                                  gint value)
{
	g_return_if_fail (self != NULL);
	self->priv->view_width = value;
	g_object_notify_by_pspec ((GObject *) self, rocker_rocker_properties[ROCKER_ROCKER_SET_VIEW_WIDTH_PROPERTY]);
}

void
rocker_rocker_set_set_view_height (RockerRocker* self,
                                   gint value)
{
	g_return_if_fail (self != NULL);
	self->priv->view_height = value;
	g_object_notify_by_pspec ((GObject *) self, rocker_rocker_properties[ROCKER_ROCKER_SET_VIEW_HEIGHT_PROPERTY]);
}

static GObject *
rocker_rocker_constructor (GType type,
                           guint n_construct_properties,
                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	RockerRocker * self;
	parent_class = G_OBJECT_CLASS (rocker_rocker_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ROCKER_TYPE_ROCKER, RockerRocker);
	g_application_set_application_id ((GApplication*) self, "pm.mirko.rocker");
	return obj;
}

static void
rocker_rocker_class_init (RockerRockerClass * klass,
                          gpointer klass_data)
{
	rocker_rocker_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &RockerRocker_private_offset);
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) rocker_rocker_real_activate;
	G_OBJECT_CLASS (klass)->get_property = _vala_rocker_rocker_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rocker_rocker_set_property;
	G_OBJECT_CLASS (klass)->constructor = rocker_rocker_constructor;
	G_OBJECT_CLASS (klass)->finalize = rocker_rocker_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), ROCKER_ROCKER_SET_VIEW_WIDTH_PROPERTY, rocker_rocker_properties[ROCKER_ROCKER_SET_VIEW_WIDTH_PROPERTY] = g_param_spec_int ("set-view-width", "set-view-width", "set-view-width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), ROCKER_ROCKER_SET_VIEW_HEIGHT_PROPERTY, rocker_rocker_properties[ROCKER_ROCKER_SET_VIEW_HEIGHT_PROPERTY] = g_param_spec_int ("set-view-height", "set-view-height", "set-view-height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
}

static void
rocker_rocker_instance_init (RockerRocker * self,
                             gpointer klass)
{
	self->priv = rocker_rocker_get_instance_private (self);
	self->view = NULL;
	self->launched = FALSE;
	self->dbus_service = NULL;
}

static void
rocker_rocker_finalize (GObject * obj)
{
	RockerRocker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ROCKER_TYPE_ROCKER, RockerRocker);
	_g_object_unref0 (self->view);
	_g_object_unref0 (self->app_button);
	_g_object_unref0 (self->dbus_service);
	G_OBJECT_CLASS (rocker_rocker_parent_class)->finalize (obj);
}

static GType
rocker_rocker_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (RockerRockerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rocker_rocker_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RockerRocker), 0, (GInstanceInitFunc) rocker_rocker_instance_init, NULL };
	GType rocker_rocker_type_id;
	rocker_rocker_type_id = g_type_register_static (gtk_application_get_type (), "RockerRocker", &g_define_type_info, 0);
	RockerRocker_private_offset = g_type_add_instance_private (rocker_rocker_type_id, sizeof (RockerRockerPrivate));
	return rocker_rocker_type_id;
}

GType
rocker_rocker_get_type (void)
{
	static volatile gsize rocker_rocker_type_id__volatile = 0;
	if (g_once_init_enter (&rocker_rocker_type_id__volatile)) {
		GType rocker_rocker_type_id;
		rocker_rocker_type_id = rocker_rocker_get_type_once ();
		g_once_init_leave (&rocker_rocker_type_id__volatile, rocker_rocker_type_id);
	}
	return rocker_rocker_type_id__volatile;
}

static void
_vala_rocker_rocker_get_property (GObject * object,
                                  guint property_id,
                                  GValue * value,
                                  GParamSpec * pspec)
{
	RockerRocker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, ROCKER_TYPE_ROCKER, RockerRocker);
	switch (property_id) {
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_rocker_rocker_set_property (GObject * object,
                                  guint property_id,
                                  const GValue * value,
                                  GParamSpec * pspec)
{
	RockerRocker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, ROCKER_TYPE_ROCKER, RockerRocker);
	switch (property_id) {
		case ROCKER_ROCKER_SET_VIEW_WIDTH_PROPERTY:
		rocker_rocker_set_set_view_width (self, g_value_get_int (value));
		break;
		case ROCKER_ROCKER_SET_VIEW_HEIGHT_PROPERTY:
		rocker_rocker_set_set_view_height (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

void
on_bus_aquired (GDBusConnection* conn)
{
	GError* _inner_error0_ = NULL;
	g_return_if_fail (conn != NULL);
	{
		RemoteControl* _tmp0_;
		RemoteControl* _tmp1_;
		_tmp0_ = remote_control_new ();
		_tmp1_ = _tmp0_;
		remote_control_register_object (_tmp1_, conn, "/pm/mirko//rocker/remotecontrol", &_inner_error0_);
		_g_object_unref0 (_tmp1_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == G_IO_ERROR) {
				goto __catch0_g_io_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return;
		}
	}
	goto __finally0;
	__catch0_g_io_error:
	{
		FILE* _tmp2_;
		g_clear_error (&_inner_error0_);
		_tmp2_ = stderr;
		fprintf (_tmp2_, "Could not register service\n");
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return;
	}
}

gint
remote_control_do_ping (RemoteControl* self,
                        gint v)
{
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	result = v + 1;
	return result;
}

void
remote_control_do_show (RemoteControl* self)
{
	RockerRocker* _tmp0_;
	g_return_if_fail (self != NULL);
	g_print ("Called from DBus\n");
	_tmp0_ = app;
	g_application_activate ((GApplication*) _tmp0_);
}

RemoteControl*
remote_control_construct (GType object_type)
{
	RemoteControl * self = NULL;
	self = (RemoteControl*) g_object_new (object_type, NULL);
	return self;
}

RemoteControl*
remote_control_new (void)
{
	return remote_control_construct (TYPE_REMOTE_CONTROL);
}

static void
remote_control_class_init (RemoteControlClass * klass,
                           gpointer klass_data)
{
	remote_control_parent_class = g_type_class_peek_parent (klass);
}

static void
remote_control_instance_init (RemoteControl * self,
                              gpointer klass)
{
}

static GType
remote_control_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (RemoteControlClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) remote_control_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RemoteControl), 0, (GInstanceInitFunc) remote_control_instance_init, NULL };
	GType remote_control_type_id;
	remote_control_type_id = g_type_register_static (G_TYPE_OBJECT, "RemoteControl", &g_define_type_info, 0);
	g_type_set_qdata (remote_control_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) remote_control_register_object);
	return remote_control_type_id;
}

GType
remote_control_get_type (void)
{
	static volatile gsize remote_control_type_id__volatile = 0;
	if (g_once_init_enter (&remote_control_type_id__volatile)) {
		GType remote_control_type_id;
		remote_control_type_id = remote_control_get_type_once ();
		g_once_init_leave (&remote_control_type_id__volatile, remote_control_type_id);
	}
	return remote_control_type_id__volatile;
}

static void
_dbus_remote_control_do_ping (RemoteControl* self,
                              GVariant* _parameters_,
                              GDBusMethodInvocation* invocation)
{
	GError* error = NULL;
	GVariantIter _arguments_iter;
	gint v = 0;
	GVariant* _tmp0_;
	GDBusMessage* _reply_message = NULL;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	gint result;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	_tmp0_ = g_variant_iter_next_value (&_arguments_iter);
	v = g_variant_get_int32 (_tmp0_);
	g_variant_unref (_tmp0_);
	result = remote_control_do_ping (self, v);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	g_variant_builder_add_value (&_reply_builder, g_variant_new_int32 (result));
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}

static void
_dbus_remote_control_do_show (RemoteControl* self,
                              GVariant* _parameters_,
                              GDBusMethodInvocation* invocation)
{
	GError* error = NULL;
	GVariantIter _arguments_iter;
	GDBusMessage* _reply_message = NULL;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	remote_control_do_show (self);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}

static void
remote_control_dbus_interface_method_call (GDBusConnection* connection,
                                           const gchar* sender,
                                           const gchar* object_path,
                                           const gchar* interface_name,
                                           const gchar* method_name,
                                           GVariant* parameters,
                                           GDBusMethodInvocation* invocation,
                                           gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	if (strcmp (method_name, "DoPing") == 0) {
		_dbus_remote_control_do_ping (object, parameters, invocation);
	} else if (strcmp (method_name, "DoShow") == 0) {
		_dbus_remote_control_do_show (object, parameters, invocation);
	} else {
		g_object_unref (invocation);
	}
}

static GVariant*
remote_control_dbus_interface_get_property (GDBusConnection* connection,
                                            const gchar* sender,
                                            const gchar* object_path,
                                            const gchar* interface_name,
                                            const gchar* property_name,
                                            GError** error,
                                            gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return NULL;
}

static gboolean
remote_control_dbus_interface_set_property (GDBusConnection* connection,
                                            const gchar* sender,
                                            const gchar* object_path,
                                            const gchar* interface_name,
                                            const gchar* property_name,
                                            GVariant* value,
                                            GError** error,
                                            gpointer user_data)
{
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return FALSE;
}

guint
remote_control_register_object (gpointer object,
                                GDBusConnection* connection,
                                const gchar* path,
                                GError** error)
{
	guint result;
	gpointer *data;
	data = g_new (gpointer, 3);
	data[0] = g_object_ref (object);
	data[1] = g_object_ref (connection);
	data[2] = g_strdup (path);
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_remote_control_dbus_interface_info), &_remote_control_dbus_interface_vtable, data, _remote_control_unregister_object, error);
	if (!result) {
		return 0;
	}
	return result;
}

static void
_remote_control_unregister_object (gpointer user_data)
{
	gpointer* data;
	data = user_data;
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}

