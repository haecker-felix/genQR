/* QRCode.c generated by valac 0.30.0, the Vala compiler
 * generated from QRCode.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include "qrencode.h"
#include <float.h>
#include <math.h>
#include <cairo.h>


#define TYPE_QR_CODE (qr_code_get_type ())
#define QR_CODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QR_CODE, QRCode))
#define QR_CODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_QR_CODE, QRCodeClass))
#define IS_QR_CODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QR_CODE))
#define IS_QR_CODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_QR_CODE))
#define QR_CODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QR_CODE, QRCodeClass))

typedef struct _QRCode QRCode;
typedef struct _QRCodeClass QRCodeClass;
typedef struct _QRCodePrivate QRCodePrivate;
#define _QRcode_free0(var) ((var == NULL) ? NULL : (var = (QRcode_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _cairo_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_destroy (var), NULL)))
#define _cairo_surface_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_surface_destroy (var), NULL)))

struct _QRCode {
	GtkDrawingArea parent_instance;
	QRCodePrivate * priv;
	gchar* Title;
	gchar* Text;
};

struct _QRCodeClass {
	GtkDrawingAreaClass parent_class;
};

struct _QRCodePrivate {
	QRcode* qrcode;
	gint Version;
	QRencodeMode Mode;
	QRecLevel Level;
	gint CaseSensitive;
};


static gpointer qr_code_parent_class = NULL;

GType qr_code_get_type (void) G_GNUC_CONST;
#define QR_CODE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_QR_CODE, QRCodePrivate))
enum  {
	QR_CODE_DUMMY_PROPERTY
};
#define QR_CODE_MIN_SQUARE_SIZE 5.0
QRCode* qr_code_new (const gchar* text, gint version, QRecLevel level, QRencodeMode mode, gint casesensitive);
QRCode* qr_code_construct (GType object_type, const gchar* text, gint version, QRecLevel level, QRencodeMode mode, gint casesensitive);
static gboolean qr_code_real_draw (GtkWidget* base, cairo_t* cr);
void qr_code_save_as_png (QRCode* self, const gchar* name);
static void qr_code_finalize (GObject* obj);


QRCode* qr_code_construct (GType object_type, const gchar* text, gint version, QRecLevel level, QRencodeMode mode, gint casesensitive) {
	QRCode * self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	QRecLevel _tmp3_ = 0;
	QRencodeMode _tmp4_ = 0;
	gint _tmp5_ = 0;
	const gchar* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	QRecLevel _tmp8_ = 0;
	QRencodeMode _tmp9_ = 0;
	gint _tmp10_ = 0;
	QRcode* _tmp11_ = NULL;
#line 12 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	g_return_val_if_fail (text != NULL, NULL);
#line 12 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self = (QRCode*) g_object_new (object_type, NULL);
#line 13 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp0_ = text;
#line 13 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 13 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_g_free0 (self->Text);
#line 13 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->Text = _tmp1_;
#line 14 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp2_ = version;
#line 14 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv->Version = _tmp2_;
#line 15 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp3_ = level;
#line 15 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv->Level = _tmp3_;
#line 16 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp4_ = mode;
#line 16 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv->Mode = _tmp4_;
#line 17 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp5_ = casesensitive;
#line 17 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv->CaseSensitive = _tmp5_;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp6_ = self->Text;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp7_ = self->priv->Version;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp8_ = self->priv->Level;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp9_ = self->priv->Mode;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp10_ = self->priv->CaseSensitive;
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp11_ = QRcode_encodeString (_tmp6_, _tmp7_, _tmp8_, _tmp9_, _tmp10_);
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_QRcode_free0 (self->priv->qrcode);
#line 19 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv->qrcode = _tmp11_;
#line 12 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	return self;
#line 127 "QRCode.c"
}


QRCode* qr_code_new (const gchar* text, gint version, QRecLevel level, QRencodeMode mode, gint casesensitive) {
#line 12 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	return qr_code_construct (TYPE_QR_CODE, text, version, level, mode, casesensitive);
#line 134 "QRCode.c"
}


static gboolean qr_code_real_draw (GtkWidget* base, cairo_t* cr) {
	QRCode * self;
	gboolean result = FALSE;
	QRcode* _tmp0_ = NULL;
#line 23 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self = (QRCode*) base;
#line 23 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 24 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp0_ = self->priv->qrcode;
#line 24 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	if (_tmp0_ != NULL) {
#line 150 "QRCode.c"
		guint width = 0U;
		guint height = 0U;
		guint _tmp1_ = 0U;
		guint _tmp2_ = 0U;
		gdouble square_size = 0.0;
		guint _tmp4_ = 0U;
		QRcode* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gdouble _tmp7_ = 0.0;
		cairo_t* _tmp8_ = NULL;
		cairo_t* _tmp9_ = NULL;
		cairo_t* _tmp35_ = NULL;
#line 30 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		width = (guint) 300;
#line 31 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		height = (guint) 300;
#line 35 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp1_ = height;
#line 35 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp2_ = width;
#line 35 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		if (_tmp1_ < _tmp2_) {
#line 173 "QRCode.c"
			guint _tmp3_ = 0U;
#line 36 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			_tmp3_ = height;
#line 36 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			width = _tmp3_;
#line 179 "QRCode.c"
		}
#line 41 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp4_ = width;
#line 41 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp5_ = self->priv->qrcode;
#line 41 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp6_ = _tmp5_->width;
#line 41 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		square_size = (gdouble) (_tmp4_ / _tmp6_);
#line 42 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp7_ = square_size;
#line 42 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		if (_tmp7_ < QR_CODE_MIN_SQUARE_SIZE) {
#line 43 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			square_size = QR_CODE_MIN_SQUARE_SIZE;
#line 195 "QRCode.c"
		}
#line 46 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp8_ = cr;
#line 46 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_save (_tmp8_);
#line 48 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp9_ = cr;
#line 48 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_set_source_rgb (_tmp9_, (gdouble) 0, (gdouble) 0, (gdouble) 0);
#line 205 "QRCode.c"
		{
			gint iy = 0;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			iy = 0;
#line 210 "QRCode.c"
			{
				gboolean _tmp10_ = FALSE;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
				_tmp10_ = TRUE;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
				while (TRUE) {
#line 217 "QRCode.c"
					gint _tmp12_ = 0;
					QRcode* _tmp13_ = NULL;
					gint _tmp14_ = 0;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					if (!_tmp10_) {
#line 223 "QRCode.c"
						gint _tmp11_ = 0;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						_tmp11_ = iy;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						iy = _tmp11_ + 1;
#line 229 "QRCode.c"
					}
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp10_ = FALSE;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp12_ = iy;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp13_ = self->priv->qrcode;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp14_ = _tmp13_->width;
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					if (!(_tmp12_ < _tmp14_)) {
#line 50 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						break;
#line 243 "QRCode.c"
					}
					{
						gint ix = 0;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						ix = 0;
#line 249 "QRCode.c"
						{
							gboolean _tmp15_ = FALSE;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
							_tmp15_ = TRUE;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
							while (TRUE) {
#line 256 "QRCode.c"
								gint _tmp17_ = 0;
								QRcode* _tmp18_ = NULL;
								gint _tmp19_ = 0;
								QRcode* _tmp20_ = NULL;
								guint8* _tmp21_ = NULL;
								gint _tmp21__length1 = 0;
								gint _tmp22_ = 0;
								QRcode* _tmp23_ = NULL;
								gint _tmp24_ = 0;
								gint _tmp25_ = 0;
								guint8 _tmp26_ = 0U;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (!_tmp15_) {
#line 270 "QRCode.c"
									gint _tmp16_ = 0;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp16_ = ix;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									ix = _tmp16_ + 1;
#line 276 "QRCode.c"
								}
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp15_ = FALSE;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp17_ = ix;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp18_ = self->priv->qrcode;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp19_ = _tmp18_->width;
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (!(_tmp17_ < _tmp19_)) {
#line 51 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									break;
#line 290 "QRCode.c"
								}
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp20_ = self->priv->qrcode;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp21_ = _tmp20_->data;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp21__length1 = -1;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp22_ = iy;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp23_ = self->priv->qrcode;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp24_ = _tmp23_->width;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp25_ = ix;
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp26_ = _tmp21_[(_tmp22_ * _tmp24_) + _tmp25_];
#line 58 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (((gint) (_tmp26_ & 1)) != 0) {
#line 310 "QRCode.c"
									cairo_t* _tmp27_ = NULL;
									gint _tmp28_ = 0;
									gdouble _tmp29_ = 0.0;
									gint _tmp30_ = 0;
									gdouble _tmp31_ = 0.0;
									gdouble _tmp32_ = 0.0;
									gdouble _tmp33_ = 0.0;
									cairo_t* _tmp34_ = NULL;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp27_ = cr;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp28_ = ix;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp29_ = square_size;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp30_ = iy;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp31_ = square_size;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp32_ = square_size;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp33_ = square_size;
#line 59 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_rectangle (_tmp27_, _tmp28_ * _tmp29_, _tmp30_ * _tmp31_, _tmp32_, _tmp33_);
#line 60 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp34_ = cr;
#line 60 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_fill (_tmp34_);
#line 339 "QRCode.c"
								}
							}
						}
					}
				}
			}
		}
#line 65 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp35_ = cr;
#line 65 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_restore (_tmp35_);
#line 351 "QRCode.c"
	}
#line 67 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	result = FALSE;
#line 67 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	return result;
#line 357 "QRCode.c"
}


void qr_code_save_as_png (QRCode* self, const gchar* name) {
	QRcode* _tmp0_ = NULL;
#line 70 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	g_return_if_fail (self != NULL);
#line 70 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	g_return_if_fail (name != NULL);
#line 71 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_tmp0_ = self->priv->qrcode;
#line 71 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	if (_tmp0_ != NULL) {
#line 371 "QRCode.c"
		gint width = 0;
		gint height = 0;
		gint _tmp1_ = 0;
		gint _tmp2_ = 0;
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gdouble square_size = 0.0;
		gint _tmp6_ = 0;
		QRcode* _tmp7_ = NULL;
		gint _tmp8_ = 0;
		gdouble _tmp9_ = 0.0;
		cairo_surface_t* surface = NULL;
		gint _tmp10_ = 0;
		gint _tmp11_ = 0;
		cairo_surface_t* _tmp12_ = NULL;
		cairo_t* context = NULL;
		cairo_surface_t* _tmp13_ = NULL;
		cairo_t* _tmp14_ = NULL;
		cairo_t* _tmp15_ = NULL;
		cairo_t* _tmp51_ = NULL;
		cairo_surface_t* _tmp52_ = NULL;
		const gchar* _tmp53_ = NULL;
		const gchar* _tmp54_ = NULL;
		gchar* _tmp55_ = NULL;
		gchar* _tmp56_ = NULL;
		gchar* _tmp57_ = NULL;
		gchar* _tmp58_ = NULL;
#line 74 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp1_ = gtk_widget_get_allocated_width ((GtkWidget*) self);
#line 74 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		width = _tmp1_;
#line 75 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp2_ = gtk_widget_get_allocated_height ((GtkWidget*) self);
#line 75 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		height = _tmp2_;
#line 78 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp3_ = height;
#line 78 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp4_ = width;
#line 78 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		if (_tmp3_ < _tmp4_) {
#line 413 "QRCode.c"
			gint _tmp5_ = 0;
#line 79 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			_tmp5_ = height;
#line 79 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			width = _tmp5_;
#line 419 "QRCode.c"
		}
#line 82 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp6_ = width;
#line 82 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp7_ = self->priv->qrcode;
#line 82 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp8_ = _tmp7_->width;
#line 82 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		square_size = (gdouble) (_tmp6_ / _tmp8_);
#line 83 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp9_ = square_size;
#line 83 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		if (_tmp9_ < QR_CODE_MIN_SQUARE_SIZE) {
#line 84 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			square_size = QR_CODE_MIN_SQUARE_SIZE;
#line 435 "QRCode.c"
		}
#line 88 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp10_ = width;
#line 88 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp11_ = height;
#line 88 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp12_ = cairo_image_surface_create (CAIRO_FORMAT_ARGB32, _tmp10_, _tmp11_);
#line 88 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		surface = _tmp12_;
#line 89 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp13_ = surface;
#line 89 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp14_ = cairo_create (_tmp13_);
#line 89 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		context = _tmp14_;
#line 91 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp15_ = context;
#line 91 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_save (_tmp15_);
#line 455 "QRCode.c"
		{
			gint iy = 0;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
			iy = 0;
#line 460 "QRCode.c"
			{
				gboolean _tmp16_ = FALSE;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
				_tmp16_ = TRUE;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
				while (TRUE) {
#line 467 "QRCode.c"
					gint _tmp18_ = 0;
					QRcode* _tmp19_ = NULL;
					gint _tmp20_ = 0;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					if (!_tmp16_) {
#line 473 "QRCode.c"
						gint _tmp17_ = 0;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						_tmp17_ = iy;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						iy = _tmp17_ + 1;
#line 479 "QRCode.c"
					}
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp16_ = FALSE;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp18_ = iy;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp19_ = self->priv->qrcode;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					_tmp20_ = _tmp19_->width;
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					if (!(_tmp18_ < _tmp20_)) {
#line 95 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						break;
#line 493 "QRCode.c"
					}
					{
						gint ix = 0;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
						ix = 0;
#line 499 "QRCode.c"
						{
							gboolean _tmp21_ = FALSE;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
							_tmp21_ = TRUE;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
							while (TRUE) {
#line 506 "QRCode.c"
								gint _tmp23_ = 0;
								QRcode* _tmp24_ = NULL;
								gint _tmp25_ = 0;
								QRcode* _tmp26_ = NULL;
								guint8* _tmp27_ = NULL;
								gint _tmp27__length1 = 0;
								gint _tmp28_ = 0;
								QRcode* _tmp29_ = NULL;
								gint _tmp30_ = 0;
								gint _tmp31_ = 0;
								guint8 _tmp32_ = 0U;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (!_tmp21_) {
#line 520 "QRCode.c"
									gint _tmp22_ = 0;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp22_ = ix;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									ix = _tmp22_ + 1;
#line 526 "QRCode.c"
								}
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp21_ = FALSE;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp23_ = ix;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp24_ = self->priv->qrcode;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp25_ = _tmp24_->width;
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (!(_tmp23_ < _tmp25_)) {
#line 96 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									break;
#line 540 "QRCode.c"
								}
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp26_ = self->priv->qrcode;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp27_ = _tmp26_->data;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp27__length1 = -1;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp28_ = iy;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp29_ = self->priv->qrcode;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp30_ = _tmp29_->width;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp31_ = ix;
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								_tmp32_ = _tmp27_[(_tmp28_ * _tmp30_) + _tmp31_];
#line 103 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
								if (((gint) (_tmp32_ & 1)) != 0) {
#line 560 "QRCode.c"
									cairo_t* _tmp33_ = NULL;
									cairo_t* _tmp34_ = NULL;
									gint _tmp35_ = 0;
									gdouble _tmp36_ = 0.0;
									gint _tmp37_ = 0;
									gdouble _tmp38_ = 0.0;
									gdouble _tmp39_ = 0.0;
									gdouble _tmp40_ = 0.0;
									cairo_t* _tmp41_ = NULL;
#line 104 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp33_ = context;
#line 104 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_set_source_rgb (_tmp33_, (gdouble) 0, (gdouble) 0, (gdouble) 0);
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp34_ = context;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp35_ = ix;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp36_ = square_size;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp37_ = iy;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp38_ = square_size;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp39_ = square_size;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp40_ = square_size;
#line 105 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_rectangle (_tmp34_, _tmp35_ * _tmp36_, _tmp37_ * _tmp38_, _tmp39_, _tmp40_);
#line 106 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp41_ = context;
#line 106 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_fill (_tmp41_);
#line 107 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									g_print ("\u2588\u2588");
#line 596 "QRCode.c"
								} else {
									cairo_t* _tmp42_ = NULL;
									cairo_t* _tmp43_ = NULL;
									gint _tmp44_ = 0;
									gdouble _tmp45_ = 0.0;
									gint _tmp46_ = 0;
									gdouble _tmp47_ = 0.0;
									gdouble _tmp48_ = 0.0;
									gdouble _tmp49_ = 0.0;
									cairo_t* _tmp50_ = NULL;
#line 109 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp42_ = context;
#line 109 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_set_source_rgb (_tmp42_, (gdouble) 255, (gdouble) 255, (gdouble) 255);
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp43_ = context;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp44_ = ix;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp45_ = square_size;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp46_ = iy;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp47_ = square_size;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp48_ = square_size;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp49_ = square_size;
#line 110 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_rectangle (_tmp43_, _tmp44_ * _tmp45_, _tmp46_ * _tmp47_, _tmp48_, _tmp49_);
#line 111 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									_tmp50_ = context;
#line 111 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									cairo_fill (_tmp50_);
#line 112 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
									g_print ("  ");
#line 633 "QRCode.c"
								}
							}
						}
					}
#line 115 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
					g_print ("\n");
#line 640 "QRCode.c"
				}
			}
		}
#line 118 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp51_ = context;
#line 118 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_restore (_tmp51_);
#line 120 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp52_ = surface;
#line 120 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp53_ = name;
#line 120 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		cairo_surface_write_to_png (_tmp52_, _tmp53_);
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp54_ = self->Text;
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp55_ = g_strconcat ("INFO: Succesfully saved the QR Code! (\"", _tmp54_, NULL);
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp56_ = _tmp55_;
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp57_ = g_strconcat (_tmp56_, "\")\n", NULL);
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_tmp58_ = _tmp57_;
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		g_print ("%s", _tmp58_);
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_g_free0 (_tmp58_);
#line 121 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_g_free0 (_tmp56_);
#line 71 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_cairo_destroy0 (context);
#line 71 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
		_cairo_surface_destroy0 (surface);
#line 674 "QRCode.c"
	}
}


static void qr_code_class_init (QRCodeClass * klass) {
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	qr_code_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	g_type_class_add_private (klass, sizeof (QRCodePrivate));
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	((GtkWidgetClass *) klass)->draw = qr_code_real_draw;
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	G_OBJECT_CLASS (klass)->finalize = qr_code_finalize;
#line 688 "QRCode.c"
}


static void qr_code_instance_init (QRCode * self) {
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self->priv = QR_CODE_GET_PRIVATE (self);
#line 695 "QRCode.c"
}


static void qr_code_finalize (GObject* obj) {
	QRCode * self;
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_QR_CODE, QRCode);
#line 2 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_QRcode_free0 (self->priv->qrcode);
#line 5 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_g_free0 (self->Title);
#line 6 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	_g_free0 (self->Text);
#line 1 "/home/haecker-felix/Dokumente/Projekte/genQR/src/QRCode.vala"
	G_OBJECT_CLASS (qr_code_parent_class)->finalize (obj);
#line 711 "QRCode.c"
}


GType qr_code_get_type (void) {
	static volatile gsize qr_code_type_id__volatile = 0;
	if (g_once_init_enter (&qr_code_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (QRCodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) qr_code_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (QRCode), 0, (GInstanceInitFunc) qr_code_instance_init, NULL };
		GType qr_code_type_id;
		qr_code_type_id = g_type_register_static (gtk_drawing_area_get_type (), "QRCode", &g_define_type_info, 0);
		g_once_init_leave (&qr_code_type_id__volatile, qr_code_type_id);
	}
	return qr_code_type_id__volatile;
}



