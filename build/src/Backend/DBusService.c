/* DBusService.c generated by valac 0.50.1, the Vala compiler
 * generated from DBusService.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/**/
/*  Copyright (C) 2012 Rocker Developers*/
/**/
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

#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

#define ROCKER_TYPE_DBUS_SERVICE (rocker_dbus_service_get_type ())
#define ROCKER_DBUS_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_DBUS_SERVICE, RockerDBusService))
#define ROCKER_DBUS_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_DBUS_SERVICE, RockerDBusServiceClass))
#define ROCKER_IS_DBUS_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_DBUS_SERVICE))
#define ROCKER_IS_DBUS_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_DBUS_SERVICE))
#define ROCKER_DBUS_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_DBUS_SERVICE, RockerDBusServiceClass))

typedef struct _RockerDBusService RockerDBusService;
typedef struct _RockerDBusServiceClass RockerDBusServiceClass;
typedef struct _RockerDBusServicePrivate RockerDBusServicePrivate;

#define TYPE_SERVICE (service_get_type ())
#define SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SERVICE, Service))
#define SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SERVICE, ServiceClass))
#define IS_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SERVICE))
#define IS_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SERVICE))
#define SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SERVICE, ServiceClass))

typedef struct _Service Service;
typedef struct _ServiceClass ServiceClass;
enum  {
	ROCKER_DBUS_SERVICE_0_PROPERTY,
	ROCKER_DBUS_SERVICE_NUM_PROPERTIES
};
static GParamSpec* rocker_dbus_service_properties[ROCKER_DBUS_SERVICE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define ROCKER_TYPE_ROCKER_VIEW (rocker_rocker_view_get_type ())
#define ROCKER_ROCKER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ROCKER_TYPE_ROCKER_VIEW, RockerRockerView))
#define ROCKER_ROCKER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ROCKER_TYPE_ROCKER_VIEW, RockerRockerViewClass))
#define ROCKER_IS_ROCKER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ROCKER_TYPE_ROCKER_VIEW))
#define ROCKER_IS_ROCKER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ROCKER_TYPE_ROCKER_VIEW))
#define ROCKER_ROCKER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ROCKER_TYPE_ROCKER_VIEW, RockerRockerViewClass))

typedef struct _RockerRockerView RockerRockerView;
typedef struct _RockerRockerViewClass RockerRockerViewClass;
typedef struct _Block2Data Block2Data;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _ServicePrivate ServicePrivate;
enum  {
	SERVICE_0_PROPERTY,
	SERVICE_NUM_PROPERTIES
};
static GParamSpec* service_properties[SERVICE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	SERVICE_VISIBILITY_CHANGED_SIGNAL,
	SERVICE_NUM_SIGNALS
};
static guint service_signals[SERVICE_NUM_SIGNALS] = {0};

struct _RockerDBusService {
	GObject parent_instance;
	RockerDBusServicePrivate * priv;
};

struct _RockerDBusServiceClass {
	GObjectClass parent_class;
};

struct _RockerDBusServicePrivate {
	Service* service;
};

struct _Block2Data {
	int _ref_count_;
	RockerDBusService* self;
	RockerRockerView* view;
};

struct _Service {
	GObject parent_instance;
	ServicePrivate * priv;
};

struct _ServiceClass {
	GObjectClass parent_class;
};

struct _ServicePrivate {
	GtkWindow* view;
};

static gint RockerDBusService_private_offset;
static gpointer rocker_dbus_service_parent_class = NULL;
static gint Service_private_offset;
static gpointer service_parent_class = NULL;

GType rocker_dbus_service_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerDBusService, g_object_unref)
GType service_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Service, g_object_unref)
guint service_register_object (void* object,
                               GDBusConnection* connection,
                               const gchar* path,
                               GError** error);
GType rocker_rocker_view_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RockerRockerView, g_object_unref)
RockerDBusService* rocker_dbus_service_new (RockerRockerView* view);
RockerDBusService* rocker_dbus_service_construct (GType object_type,
                                                  RockerRockerView* view);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void __lambda67_ (Block2Data* _data2_,
                  GDBusConnection* conn);
static void rocker_dbus_service_on_bus_aquired (RockerDBusService* self,
                                         GDBusConnection* connection,
                                         RockerRockerView* view);
static void ___lambda67__gbus_acquired_callback (GDBusConnection* connection,
                                          const gchar* name,
                                          gpointer self);
static void rocker_dbus_service_name_acquired_handler (RockerDBusService* self,
                                                GDBusConnection* connection,
                                                const gchar* name);
static void _rocker_dbus_service_name_acquired_handler_gbus_name_acquired_callback (GDBusConnection* connection,
                                                                             const gchar* name,
                                                                             gpointer self);
static void __lambda68_ (Block2Data* _data2_);
static void ___lambda68__gbus_name_lost_callback (GDBusConnection* connection,
                                           const gchar* name,
                                           gpointer self);
Service* service_new (GtkWindow* view);
Service* service_construct (GType object_type,
                            GtkWindow* view);
void service_on_view_visibility_change (Service* self);
static void rocker_dbus_service_finalize (GObject * obj);
static GType rocker_dbus_service_get_type_once (void);
static void _service_on_view_visibility_change_gtk_widget_show (GtkWidget* _sender,
                                                         gpointer self);
static void _service_on_view_visibility_change_gtk_widget_hide (GtkWidget* _sender,
                                                         gpointer self);
static void service_finalize (GObject * obj);
static GType service_get_type_once (void);
static void service_dbus_interface_method_call (GDBusConnection* connection,
                                         const gchar* sender,
                                         const gchar* object_path,
                                         const gchar* interface_name,
                                         const gchar* method_name,
                                         GVariant* parameters,
                                         GDBusMethodInvocation* invocation,
                                         gpointer user_data);
static GVariant* service_dbus_interface_get_property (GDBusConnection* connection,
                                               const gchar* sender,
                                               const gchar* object_path,
                                               const gchar* interface_name,
                                               const gchar* property_name,
                                               GError** error,
                                               gpointer user_data);
static gboolean service_dbus_interface_set_property (GDBusConnection* connection,
                                              const gchar* sender,
                                              const gchar* object_path,
                                              const gchar* interface_name,
                                              const gchar* property_name,
                                              GVariant* value,
                                              GError** error,
                                              gpointer user_data);
static void _dbus_service_visibility_changed (GObject* _sender,
                                       gboolean launcher_visible,
                                       gpointer* _data);
static void _service_unregister_object (gpointer user_data);

static const GDBusMethodInfo * const _service_dbus_method_info[] = {NULL};
static const GDBusArgInfo _service_dbus_arg_info_visibility_changed_launcher_visible = {-1, "launcher_visible", "b", NULL};
static const GDBusArgInfo * const _service_dbus_arg_info_visibility_changed[] = {&_service_dbus_arg_info_visibility_changed_launcher_visible, NULL};
static const GDBusSignalInfo _service_dbus_signal_info_visibility_changed = {-1, "VisibilityChanged", (GDBusArgInfo **) (&_service_dbus_arg_info_visibility_changed), NULL};
static const GDBusSignalInfo * const _service_dbus_signal_info[] = {&_service_dbus_signal_info_visibility_changed, NULL};
static const GDBusPropertyInfo * const _service_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _service_dbus_interface_info = {-1, "pm.mirko.rocker", (GDBusMethodInfo **) (&_service_dbus_method_info), (GDBusSignalInfo **) (&_service_dbus_signal_info), (GDBusPropertyInfo **) (&_service_dbus_property_info), NULL};
static const GDBusInterfaceVTable _service_dbus_interface_vtable = {service_dbus_interface_method_call, service_dbus_interface_get_property, service_dbus_interface_set_property};

static inline gpointer
rocker_dbus_service_get_instance_private (RockerDBusService* self)
{
	return G_STRUCT_MEMBER_P (self, RockerDBusService_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static Block2Data*
block2_data_ref (Block2Data* _data2_)
{
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}

static void
block2_data_unref (void * _userdata_)
{
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		RockerDBusService* self;
		self = _data2_->self;
		_g_object_unref0 (_data2_->view);
		_g_object_unref0 (self);
		g_slice_free (Block2Data, _data2_);
	}
}

static void
__lambda67_ (Block2Data* _data2_,
             GDBusConnection* conn)
{
	RockerDBusService* self;
	self = _data2_->self;
	g_return_if_fail (conn != NULL);
	rocker_dbus_service_on_bus_aquired (self, conn, _data2_->view);
}

static void
___lambda67__gbus_acquired_callback (GDBusConnection* connection,
                                     const gchar* name,
                                     gpointer self)
{
	__lambda67_ (self, connection);
}

static void
_rocker_dbus_service_name_acquired_handler_gbus_name_acquired_callback (GDBusConnection* connection,
                                                                        const gchar* name,
                                                                        gpointer self)
{
	rocker_dbus_service_name_acquired_handler ((RockerDBusService*) self, connection, name);
}

static void
__lambda68_ (Block2Data* _data2_)
{
	RockerDBusService* self;
	self = _data2_->self;
	g_critical ("DBusService.vala:32: Could not aquire service name");
}

static void
___lambda68__gbus_name_lost_callback (GDBusConnection* connection,
                                      const gchar* name,
                                      gpointer self)
{
	__lambda68_ (self);
}

RockerDBusService*
rocker_dbus_service_construct (GType object_type,
                               RockerRockerView* view)
{
	RockerDBusService * self = NULL;
	Block2Data* _data2_;
	RockerRockerView* _tmp0_;
	g_return_val_if_fail (view != NULL, NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_tmp0_ = _g_object_ref0 (view);
	_g_object_unref0 (_data2_->view);
	_data2_->view = _tmp0_;
	self = (RockerDBusService*) g_object_new (object_type, NULL);
	_data2_->self = g_object_ref (self);
	g_bus_own_name_with_closures (G_BUS_TYPE_SESSION, "pm.mirko.rocker", G_BUS_NAME_OWNER_FLAGS_NONE, (GClosure*) ((___lambda67__gbus_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda67__gbus_acquired_callback, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref)), (GClosure*) ((_rocker_dbus_service_name_acquired_handler_gbus_name_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _rocker_dbus_service_name_acquired_handler_gbus_name_acquired_callback, g_object_ref (self), (GClosureNotify) g_object_unref)), (GClosure*) ((___lambda68__gbus_name_lost_callback == NULL) ? NULL : g_cclosure_new ((GCallback) ___lambda68__gbus_name_lost_callback, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref)));
	block2_data_unref (_data2_);
	_data2_ = NULL;
	return self;
}

RockerDBusService*
rocker_dbus_service_new (RockerRockerView* view)
{
	return rocker_dbus_service_construct (ROCKER_TYPE_DBUS_SERVICE, view);
}

static void
rocker_dbus_service_on_bus_aquired (RockerDBusService* self,
                                    GDBusConnection* connection,
                                    RockerRockerView* view)
{
	GError* _inner_error0_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (connection != NULL);
	g_return_if_fail (view != NULL);
	{
		Service* _tmp0_;
		Service* _tmp1_;
		_tmp0_ = service_new ((GtkWindow*) view);
		_g_object_unref0 (self->priv->service);
		self->priv->service = _tmp0_;
		_tmp1_ = self->priv->service;
		service_register_object (_tmp1_, connection, "/pm/mirko//rocker", &_inner_error0_);
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
		GError* e = NULL;
		const gchar* _tmp2_;
		e = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp2_ = e->message;
		g_critical ("DBusService.vala:42: Could not register service: %s", _tmp2_);
		g_return_if_reached ();
		_g_error_free0 (e);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return;
	}
}

static void
rocker_dbus_service_name_acquired_handler (RockerDBusService* self,
                                           GDBusConnection* connection,
                                           const gchar* name)
{
	Service* _tmp0_;
	Service* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (connection != NULL);
	g_return_if_fail (name != NULL);
	g_message ("DBusService.vala:48: Service registration suceeded");
	_tmp0_ = self->priv->service;
	g_return_if_fail (_tmp0_ != NULL);
	_tmp1_ = self->priv->service;
	service_on_view_visibility_change (_tmp1_);
}

static void
rocker_dbus_service_class_init (RockerDBusServiceClass * klass,
                                gpointer klass_data)
{
	rocker_dbus_service_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &RockerDBusService_private_offset);
	G_OBJECT_CLASS (klass)->finalize = rocker_dbus_service_finalize;
}

static void
rocker_dbus_service_instance_init (RockerDBusService * self,
                                   gpointer klass)
{
	self->priv = rocker_dbus_service_get_instance_private (self);
	self->priv->service = NULL;
}

static void
rocker_dbus_service_finalize (GObject * obj)
{
	RockerDBusService * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ROCKER_TYPE_DBUS_SERVICE, RockerDBusService);
	_g_object_unref0 (self->priv->service);
	G_OBJECT_CLASS (rocker_dbus_service_parent_class)->finalize (obj);
}

static GType
rocker_dbus_service_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (RockerDBusServiceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rocker_dbus_service_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RockerDBusService), 0, (GInstanceInitFunc) rocker_dbus_service_instance_init, NULL };
	GType rocker_dbus_service_type_id;
	rocker_dbus_service_type_id = g_type_register_static (G_TYPE_OBJECT, "RockerDBusService", &g_define_type_info, 0);
	RockerDBusService_private_offset = g_type_add_instance_private (rocker_dbus_service_type_id, sizeof (RockerDBusServicePrivate));
	return rocker_dbus_service_type_id;
}

GType
rocker_dbus_service_get_type (void)
{
	static volatile gsize rocker_dbus_service_type_id__volatile = 0;
	if (g_once_init_enter (&rocker_dbus_service_type_id__volatile)) {
		GType rocker_dbus_service_type_id;
		rocker_dbus_service_type_id = rocker_dbus_service_get_type_once ();
		g_once_init_leave (&rocker_dbus_service_type_id__volatile, rocker_dbus_service_type_id);
	}
	return rocker_dbus_service_type_id__volatile;
}

static inline gpointer
service_get_instance_private (Service* self)
{
	return G_STRUCT_MEMBER_P (self, Service_private_offset);
}

static void
_service_on_view_visibility_change_gtk_widget_show (GtkWidget* _sender,
                                                    gpointer self)
{
	service_on_view_visibility_change ((Service*) self);
}

static void
_service_on_view_visibility_change_gtk_widget_hide (GtkWidget* _sender,
                                                    gpointer self)
{
	service_on_view_visibility_change ((Service*) self);
}

Service*
service_construct (GType object_type,
                   GtkWindow* view)
{
	Service * self = NULL;
	GtkWindow* _tmp0_;
	g_return_val_if_fail (view != NULL, NULL);
	self = (Service*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (view);
	_g_object_unref0 (self->priv->view);
	self->priv->view = _tmp0_;
	g_signal_connect_object ((GtkWidget*) view, "show", (GCallback) _service_on_view_visibility_change_gtk_widget_show, self, 0);
	g_signal_connect_object ((GtkWidget*) view, "hide", (GCallback) _service_on_view_visibility_change_gtk_widget_hide, self, 0);
	return self;
}

Service*
service_new (GtkWindow* view)
{
	return service_construct (TYPE_SERVICE, view);
}

static gchar*
bool_to_string (gboolean self)
{
	gchar* result = NULL;
	if (self) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup ("true");
		result = _tmp0_;
		return result;
	} else {
		gchar* _tmp1_;
		_tmp1_ = g_strdup ("false");
		result = _tmp1_;
		return result;
	}
}

void
service_on_view_visibility_change (Service* self)
{
	GtkWindow* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	GtkWindow* _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->view;
	_tmp1_ = gtk_widget_get_visible ((GtkWidget*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = bool_to_string (_tmp2_);
	_tmp4_ = _tmp3_;
	g_message ("DBusService.vala:67: Visibility changed. Sending visible = %s over DBu" \
"s", _tmp4_);
	_g_free0 (_tmp4_);
	_tmp5_ = self->priv->view;
	_tmp6_ = gtk_widget_get_visible ((GtkWidget*) _tmp5_);
	_tmp7_ = _tmp6_;
	g_signal_emit (self, service_signals[SERVICE_VISIBILITY_CHANGED_SIGNAL], 0, _tmp7_);
}

static void
service_class_init (ServiceClass * klass,
                    gpointer klass_data)
{
	service_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &Service_private_offset);
	G_OBJECT_CLASS (klass)->finalize = service_finalize;
	service_signals[SERVICE_VISIBILITY_CHANGED_SIGNAL] = g_signal_new ("visibility-changed", TYPE_SERVICE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__BOOLEAN, G_TYPE_NONE, 1, G_TYPE_BOOLEAN);
}

static void
service_instance_init (Service * self,
                       gpointer klass)
{
	self->priv = service_get_instance_private (self);
	self->priv->view = NULL;
}

static void
service_finalize (GObject * obj)
{
	Service * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SERVICE, Service);
	_g_object_unref0 (self->priv->view);
	G_OBJECT_CLASS (service_parent_class)->finalize (obj);
}

static GType
service_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ServiceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) service_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Service), 0, (GInstanceInitFunc) service_instance_init, NULL };
	GType service_type_id;
	service_type_id = g_type_register_static (G_TYPE_OBJECT, "Service", &g_define_type_info, 0);
	g_type_set_qdata (service_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) service_register_object);
	Service_private_offset = g_type_add_instance_private (service_type_id, sizeof (ServicePrivate));
	return service_type_id;
}

GType
service_get_type (void)
{
	static volatile gsize service_type_id__volatile = 0;
	if (g_once_init_enter (&service_type_id__volatile)) {
		GType service_type_id;
		service_type_id = service_get_type_once ();
		g_once_init_leave (&service_type_id__volatile, service_type_id);
	}
	return service_type_id__volatile;
}

static void
service_dbus_interface_method_call (GDBusConnection* connection,
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
	g_object_unref (invocation);
}

static GVariant*
service_dbus_interface_get_property (GDBusConnection* connection,
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
service_dbus_interface_set_property (GDBusConnection* connection,
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

static void
_dbus_service_visibility_changed (GObject* _sender,
                                  gboolean launcher_visible,
                                  gpointer* _data)
{
	GDBusConnection * _connection;
	const gchar * _path;
	GVariant *_arguments;
	GVariantBuilder _arguments_builder;
	_connection = _data[1];
	_path = _data[2];
	g_variant_builder_init (&_arguments_builder, G_VARIANT_TYPE_TUPLE);
	g_variant_builder_add_value (&_arguments_builder, g_variant_new_boolean (launcher_visible));
	_arguments = g_variant_builder_end (&_arguments_builder);
	g_dbus_connection_emit_signal (_connection, NULL, _path, "pm.mirko.rocker", "VisibilityChanged", _arguments, NULL);
}

guint
service_register_object (gpointer object,
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
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_service_dbus_interface_info), &_service_dbus_interface_vtable, data, _service_unregister_object, error);
	if (!result) {
		return 0;
	}
	g_signal_connect (object, "visibility-changed", (GCallback) _dbus_service_visibility_changed, data);
	return result;
}

static void
_service_unregister_object (gpointer user_data)
{
	gpointer* data;
	data = user_data;
	g_signal_handlers_disconnect_by_func (data[0], _dbus_service_visibility_changed, data);
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}

