// generated 2008/3/5 13:40:45 CLST by cristi@cristi-laptop.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/cristi/svn/CC69F/TreeGrowthSimulator.glade
// for gtk 2.10.11 and gtkmm 2.10.8
//
// Please modify the corresponding derived classes in ./src/GUIVentanaPrincipal.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
//#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "GUIVentanaPrincipal_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtk/gtkimagemenuitem.h>
#include <gdkmm/pixbufloader.h>

static const unsigned char triangulo_png_data[] =
{       	137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,
	0,0,0,16,0,0,0,16,8,6,0,0,0,31,243,255,
	97,0,0,0,6,98,75,71,68,0,0,0,0,0,0,249,
	67,187,127,0,0,0,9,112,72,89,115,0,0,11,19,0,
	0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,
	7,216,3,5,16,30,6,99,195,135,154,0,0,0,29,116,
	69,88,116,67,111,109,109,101,110,116,0,67,114,101,97,116,
	101,100,32,119,105,116,104,32,84,104,101,32,71,73,77,80,
	239,100,37,110,0,0,0,65,73,68,65,84,56,203,99,96,
	32,12,254,227,147,100,98,160,49,248,79,200,21,76,244,176,
	29,111,88,48,209,203,118,156,226,76,244,180,29,171,60,19,
	45,109,23,32,199,149,255,41,241,230,127,114,92,203,68,175,
	144,199,169,143,145,66,3,24,0,248,102,18,12,188,39,185,
	44,0,0,0,0,73,69,78,68,174,66,96,130,

};
static const unsigned char cuadrado_png_data[] =
{       	137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,
	0,0,0,16,0,0,0,16,8,6,0,0,0,31,243,255,
	97,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,
	189,167,147,0,0,0,9,112,72,89,115,0,0,11,19,0,
	0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,
	7,216,3,5,16,31,15,3,4,14,127,0,0,0,29,116,
	69,88,116,67,111,109,109,101,110,116,0,67,114,101,97,116,
	101,100,32,119,105,116,104,32,84,104,101,32,71,73,77,80,
	239,100,37,110,0,0,0,35,73,68,65,84,56,203,99,96,
	160,16,48,66,233,255,148,26,68,174,1,255,153,40,181,121,
	212,128,81,3,134,137,1,20,231,70,0,255,150,4,23,67,
	110,71,68,0,0,0,0,73,69,78,68,174,66,96,130,

};

#include <gtkmm/image.h>
#include <gtkmm/stockid.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#endif //

static const unsigned char triangular_png_data[] =
{       	137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,
	0,0,0,48,0,0,0,32,8,6,0,0,0,84,212,251,
	28,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,
	189,167,147,0,0,0,9,112,72,89,115,0,0,11,19,0,
	0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,
	7,216,3,5,16,10,56,140,12,77,100,0,0,0,29,116,
	69,88,116,67,111,109,109,101,110,116,0,67,114,101,97,116,
	101,100,32,119,105,116,104,32,84,104,101,32,71,73,77,80,
	239,100,37,110,0,0,1,41,73,68,65,84,88,195,237,86,
	91,110,196,32,12,28,147,108,31,219,74,123,255,115,245,52,
	125,108,166,63,172,132,88,8,216,241,246,167,30,41,82,2,
	193,140,199,216,6,8,4,2,129,192,63,196,91,107,144,0,
	62,0,124,230,119,203,51,139,52,152,167,197,43,30,84,133,
	78,234,18,128,204,218,75,78,155,174,206,71,228,112,4,100,
	135,228,59,128,83,241,207,57,11,65,39,226,75,182,169,118,
	164,229,192,210,113,72,138,185,148,29,226,3,148,231,35,194,
	214,114,230,197,41,135,164,176,47,0,94,71,118,211,128,160,
	84,223,169,115,188,188,68,170,171,217,151,37,137,75,37,90,
	229,113,169,214,81,89,12,216,25,75,21,39,2,184,206,68,
	193,163,12,214,71,72,219,51,56,168,138,42,7,44,71,100,
	157,220,100,143,252,58,136,36,189,251,64,153,31,79,202,117,
	61,108,90,18,201,16,174,203,142,154,90,242,44,10,195,54,
	177,150,214,28,72,3,66,214,62,192,201,234,38,51,226,82,
	81,94,81,53,58,75,39,102,213,16,123,182,167,133,62,146,
	196,98,116,64,147,139,210,18,74,26,138,156,42,103,126,10,
	130,55,35,87,0,207,121,108,3,240,93,204,107,212,63,218,
	181,239,110,145,94,87,226,191,188,126,7,2,129,64,192,142,
	95,76,26,99,85,154,69,171,0,0,0,0,0,73,69,78,
	68,174,66,96,130,

};
static const unsigned char cuadrangular_png_data[] =
{       	137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,
	0,0,0,48,0,0,0,32,8,6,0,0,0,84,212,251,
	28,0,0,0,6,98,75,71,68,0,0,0,0,0,0,249,
	67,187,127,0,0,0,9,112,72,89,115,0,0,11,19,0,
	0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,
	7,216,3,5,16,23,11,204,176,64,110,0,0,0,29,116,
	69,88,116,67,111,109,109,101,110,116,0,67,114,101,97,116,
	101,100,32,119,105,116,104,32,84,104,101,32,71,73,77,80,
	239,100,37,110,0,0,0,136,73,68,65,84,88,195,237,152,
	75,14,192,32,8,68,209,218,251,31,121,220,117,209,164,169,
	84,7,107,156,183,38,124,6,129,68,51,177,14,89,18,8,
	33,134,147,28,182,112,218,191,249,138,204,253,10,136,159,20,
	128,173,118,59,8,237,87,7,122,149,194,78,29,0,211,121,
	254,184,54,147,51,49,90,17,37,80,237,145,119,100,152,98,
	104,180,193,202,51,96,145,202,223,213,57,30,108,206,78,53,
	169,91,12,1,201,208,10,0,121,102,116,137,167,189,75,86,
	172,18,121,53,39,198,106,186,232,250,118,17,66,108,72,5,
	229,134,43,254,43,195,216,221,0,0,0,0,73,69,78,68,
	174,66,96,130,

};

GUIVentanaPrincipal_glade::GUIVentanaPrincipal_glade(
) : Gtk::Window(Gtk::WINDOW_TOPLEVEL)
{  GUIVentanaPrincipal = this;
   gmm_data = new GlademmData(get_accel_group());
   nuevo1 = NULL;
   abrir1 = NULL;
   guardar1 = NULL;
   guardar_como1 = NULL;
   separatormenuitem1 = NULL;
   salir1 = NULL;
   menuitem1_menu = Gtk::manage(new class Gtk::Menu());
   menuitem1 = NULL;
   cortar1 = NULL;
   copiar1 = NULL;
   pegar1 = NULL;
   borrar1 = NULL;
   menuitem2_menu = Gtk::manage(new class Gtk::Menu());
   menuitem2 = NULL;

   image198 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-convert"), Gtk::IconSize(1)));
   deformar1 = NULL;
   image199 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-preferences"), Gtk::IconSize(1)));
   refinar1 = NULL;
   image200 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-zoom-out"), Gtk::IconSize(1)));
   desrefinar1 = NULL;
   image201 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-zoom-fit"), Gtk::IconSize(1)));
   mejorar1 = NULL;

   Glib::RefPtr<Gdk::PixbufLoader> _image202_loader=Gdk::PixbufLoader::create();
   _image202_loader->write(triangulo_png_data, sizeof triangulo_png_data);
   _image202_loader->close();
   image202 = Gtk::manage(new class Gtk::Image(_image202_loader->get_pixbuf()));
   _image202_loader=Glib::RefPtr<Gdk::PixbufLoader>();
   triangular1 = NULL;

   Glib::RefPtr<Gdk::PixbufLoader> _image203_loader=Gdk::PixbufLoader::create();
   _image203_loader->write(cuadrado_png_data, sizeof cuadrado_png_data);
   _image203_loader->close();
   image203 = Gtk::manage(new class Gtk::Image(_image203_loader->get_pixbuf()));
   _image203_loader=Glib::RefPtr<Gdk::PixbufLoader>();
   cuadrangular1 = NULL;
   separador4 = NULL;
   image204 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-info"), Gtk::IconSize(1)));
   informacion1 = NULL;
   malla1_menu = Gtk::manage(new class Gtk::Menu());
   malla1 = NULL;
   mostrar_caras1 = NULL;
   mostrar_arcos1 = NULL;
   mostrar_colores_segun_concentracion1 = NULL;
   mostrar_todos_los_frames1 = NULL;
   separador3 = NULL;
   image205 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-rewind"), Gtk::IconSize(1)));
   enlentecer_animacion1 = NULL;
   image206 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-stop"), Gtk::IconSize(1)));
   detener_animacion1 = NULL;
   image207 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-pause"), Gtk::IconSize(1)));
   pausar_animacion1 = NULL;
   image208 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-play"), Gtk::IconSize(1)));
   iniciar_animacion1 = NULL;
   image209 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-forward"), Gtk::IconSize(1)));
   apurar_animacion1 = NULL;
   menuitem3_menu = Gtk::manage(new class Gtk::Menu());
   menuitem3 = NULL;
   acerca_de1 = NULL;
   menuitem4_menu = Gtk::manage(new class Gtk::Menu());
   menuitem4 = NULL;
   menubar1 = Gtk::manage(new class Gtk::MenuBar());
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonNuevo = Gtk::manage(new class Gtk::ToolButton(Gtk::StockID("gtk-new")));
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonAbrir = Gtk::manage(new class Gtk::ToolButton(Gtk::StockID("gtk-open")));
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonGuardar = Gtk::manage(new class Gtk::ToolButton(Gtk::StockID("gtk-save")));
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   separatortoolitem1 = Gtk::manage(new class Gtk::SeparatorToolItem());
#endif //

   Gtk::Image *toolbuttonDeformar_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-convert"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDeformar = Gtk::manage(new class Gtk::ToolButton(*toolbuttonDeformar_img, "Deformar"));
#endif //

   Gtk::Image *toolbuttonRefinar_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-preferences"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonRefinar = Gtk::manage(new class Gtk::ToolButton(*toolbuttonRefinar_img, "Refinar"));
#endif //

   Gtk::Image *toolbuttonDesrefinar_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-zoom-out"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDesrefinar = Gtk::manage(new class Gtk::ToolButton(*toolbuttonDesrefinar_img, "Desrefinar"));
#endif //

   Gtk::Image *toolbuttonMejorar_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-zoom-fit"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonMejorar = Gtk::manage(new class Gtk::ToolButton(*toolbuttonMejorar_img, "Mejorar"));
#endif //

   Glib::RefPtr<Gdk::PixbufLoader> _toolbuttonTriangular_img_loader=Gdk::PixbufLoader::create();
   _toolbuttonTriangular_img_loader->write(triangular_png_data, sizeof triangular_png_data);
   _toolbuttonTriangular_img_loader->close();

   Gtk::Image *toolbuttonTriangular_img = Gtk::manage(new class Gtk::Image(_toolbuttonTriangular_img_loader->get_pixbuf()));
   _toolbuttonTriangular_img_loader=Glib::RefPtr<Gdk::PixbufLoader>();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonTriangular = Gtk::manage(new class Gtk::ToolButton(*toolbuttonTriangular_img, "Triangular"));
#endif //

   Glib::RefPtr<Gdk::PixbufLoader> _toolbuttonCuadrangular_img_loader=Gdk::PixbufLoader::create();
   _toolbuttonCuadrangular_img_loader->write(cuadrangular_png_data, sizeof cuadrangular_png_data);
   _toolbuttonCuadrangular_img_loader->close();

   Gtk::Image *toolbuttonCuadrangular_img = Gtk::manage(new class Gtk::Image(_toolbuttonCuadrangular_img_loader->get_pixbuf()));
   _toolbuttonCuadrangular_img_loader=Glib::RefPtr<Gdk::PixbufLoader>();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonCuadrangular = Gtk::manage(new class Gtk::ToolButton(*toolbuttonCuadrangular_img, "Cuadrangular"));
#endif //
   toolbar1 = Gtk::manage(new class Gtk::Toolbar());
   vboxDrawingArea = Gtk::manage(new class Gtk::VBox(false, 0));

   Gtk::Image *toolbuttonEnlentecer_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-rewind"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonEnlentecer = Gtk::manage(new class Gtk::ToolButton(*toolbuttonEnlentecer_img, ""));
#endif //

   Gtk::Image *toolbuttonDetenerAnimacion_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-stop"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDetenerAnimacion = Gtk::manage(new class Gtk::ToolButton(*toolbuttonDetenerAnimacion_img, "DetenerAnimacion"));
#endif //

   Gtk::Image *toolbuttonPausarAnimacion_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-pause"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonPausarAnimacion = Gtk::manage(new class Gtk::ToolButton(*toolbuttonPausarAnimacion_img, ""));
#endif //

   Gtk::Image *toolbuttonIniciarAnimacion_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-play"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonIniciarAnimacion = Gtk::manage(new class Gtk::ToolButton(*toolbuttonIniciarAnimacion_img, "Iniciar Animacion"));
#endif //

   Gtk::Image *toolbuttonApurar_img = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-media-forward"), Gtk::IconSize(3)));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonApurar = Gtk::manage(new class Gtk::ToolButton(*toolbuttonApurar_img, ""));
#endif //
   toolbarControlesAnimacion = Gtk::manage(new class Gtk::Toolbar());
   vboxVisualizador = Gtk::manage(new class Gtk::VBox(false, 0));
   alignmentVisualizador = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label1 = Gtk::manage(new class Gtk::Label("<b>Visualizador</b>"));
   frame1 = Gtk::manage(new class Gtk::Frame());
   textviewLog = Gtk::manage(new class Gtk::TextView());
   scrolledwindow1 = Gtk::manage(new class Gtk::ScrolledWindow());
   alignment2 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label2 = Gtk::manage(new class Gtk::Label("<b>Log</b>"));
   frame2 = Gtk::manage(new class Gtk::Frame());
   statusbar1 = Gtk::manage(new class Gtk::Statusbar());
   vbox1 = Gtk::manage(new class Gtk::VBox(false, 0));


   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-new")));
   nuevo1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();

   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-open")));
   abrir1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();

   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-save")));
   guardar1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();

   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-save-as")));
   guardar_como1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();

   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   separatormenuitem1 = (Gtk::MenuItem *)&menuitem1_menu->items().back();

   menuitem1_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-quit")));
   salir1 = (Gtk::ImageMenuItem *)&menuitem1_menu->items().back();

   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-cut")));
   cortar1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();

   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-copy")));
   copiar1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();

   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-paste")));
   pegar1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();

   menuitem2_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-delete")));
   borrar1 = (Gtk::ImageMenuItem *)&menuitem2_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Deformar...", *image198));
   deformar1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Refinar...", *image199));
   refinar1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Desrefinar...", *image200));
   desrefinar1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Mejorar", *image201));
   mejorar1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Triangular", Gtk::GMM_GTKMM_22_24(Menu_Helpers::,)AccelKey(GDK_t, Gdk::CONTROL_MASK), *image202));
   triangular1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Cuadrangular", *image203));
   cuadrangular1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   separador4 = (Gtk::MenuItem *)&malla1_menu->items().back();

   malla1_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Informacion...", *image204));
   informacion1 = (Gtk::ImageMenuItem *)&malla1_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem("Mostrar caras"));
   mostrar_caras1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem("Mostrar arcos"));
   mostrar_arcos1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem("Mostrar colores segun concentracion"));
   mostrar_colores_segun_concentracion1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::CheckMenuElem("Mostrar todos los frames"));
   mostrar_todos_los_frames1 = (Gtk::CheckMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::SeparatorElem());
   separador3 = (Gtk::MenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Enlentecer Animacion", *image205));
   enlentecer_animacion1 = (Gtk::ImageMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Detener Animacion", *image206));
   detener_animacion1 = (Gtk::ImageMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Pausar Animacion", *image207));
   pausar_animacion1 = (Gtk::ImageMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Iniciar Animacion", *image208));
   iniciar_animacion1 = (Gtk::ImageMenuItem *)&menuitem3_menu->items().back();

   menuitem3_menu->items().push_back(Gtk::Menu_Helpers::ImageMenuElem("Apurar Animacion", *image209));
   apurar_animacion1 = (Gtk::ImageMenuItem *)&menuitem3_menu->items().back();

   menuitem4_menu->items().push_back(Gtk::Menu_Helpers::StockMenuElem(Gtk::StockID("gtk-about")));
   acerca_de1 = (Gtk::ImageMenuItem *)&menuitem4_menu->items().back();

   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem("_Archivo", *menuitem1_menu));
   menuitem1 = (Gtk::MenuItem *)&menubar1->items().back();

   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem("_Editar", *menuitem2_menu));
   menuitem2 = (Gtk::MenuItem *)&menubar1->items().back();

   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem("_Malla", *malla1_menu));
   malla1 = (Gtk::MenuItem *)&menubar1->items().back();

   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem("_Ver", *menuitem3_menu));
   menuitem3 = (Gtk::MenuItem *)&menubar1->items().back();

   menubar1->items().push_back(Gtk::Menu_Helpers::MenuElem("A_yuda", *menuitem4_menu));
   menuitem4 = (Gtk::MenuItem *)&menubar1->items().back();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonNuevo);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::StockElem(Gtk::StockID("gtk-new"), Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonNuevo = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonAbrir);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::StockElem(Gtk::StockID("gtk-open"), Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonAbrir = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonGuardar);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::StockElem(Gtk::StockID("gtk-save"), Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonGuardar = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*separatortoolitem1);
#else //
   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::Space());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonDeformar);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Deformar", *toolbuttonDeformar_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonDeformar = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonRefinar);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Refinar", *toolbuttonRefinar_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonRefinar = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonDesrefinar);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Desrefinar", *toolbuttonDesrefinar_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonDesrefinar = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonMejorar);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Mejorar", *toolbuttonMejorar_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonMejorar = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonTriangular);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Triangular", *toolbuttonTriangular_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonTriangular = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->append(*toolbuttonCuadrangular);
#else //


   toolbar1->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Cuadrangular", *toolbuttonCuadrangular_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonCuadrangular = static_cast<Gtk::Button *>(toolbar1->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->append(*toolbuttonEnlentecer);
#else //


   toolbarControlesAnimacion->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("", *toolbuttonEnlentecer_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonEnlentecer = static_cast<Gtk::Button *>(toolbarControlesAnimacion->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->append(*toolbuttonDetenerAnimacion);
#else //


   toolbarControlesAnimacion->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("DetenerAnimacion", *toolbuttonDetenerAnimacion_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonDetenerAnimacion = static_cast<Gtk::Button *>(toolbarControlesAnimacion->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->append(*toolbuttonPausarAnimacion);
#else //


   toolbarControlesAnimacion->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("", *toolbuttonPausarAnimacion_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonPausarAnimacion = static_cast<Gtk::Button *>(toolbarControlesAnimacion->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->append(*toolbuttonIniciarAnimacion);
#else //


   toolbarControlesAnimacion->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("Iniciar Animacion", *toolbuttonIniciarAnimacion_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonIniciarAnimacion = static_cast<Gtk::Button *>(toolbarControlesAnimacion->tools().back().get_widget());
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->append(*toolbuttonApurar);
#else //


   toolbarControlesAnimacion->tools().push_back(Gtk::Toolbar_Helpers::ButtonElem("", *toolbuttonApurar_img, Gtk::Toolbar_Helpers::Callback0()));
   toolbuttonApurar = static_cast<Gtk::Button *>(toolbarControlesAnimacion->tools().back().get_widget());
#endif //
   image198->set_alignment(0.5,0.5);
   image198->set_padding(0,0);
   image199->set_alignment(0.5,0.5);
   image199->set_padding(0,0);
   image200->set_alignment(0.5,0.5);
   image200->set_padding(0,0);
   image201->set_alignment(0.5,0.5);
   image201->set_padding(0,0);
   image202->set_alignment(0.5,0.5);
   image202->set_padding(0,0);
   image203->set_alignment(0.5,0.5);
   image203->set_padding(0,0);
   image204->set_alignment(0.5,0.5);
   image204->set_padding(0,0);
   mostrar_caras1->set_active(true);
   mostrar_arcos1->set_active(true);
   mostrar_colores_segun_concentracion1->set_active(true);
   mostrar_todos_los_frames1->set_active(false);
   image205->set_alignment(0.5,0.5);
   image205->set_padding(0,0);
   image206->set_alignment(0.5,0.5);
   image206->set_padding(0,0);
   image207->set_alignment(0.5,0.5);
   image207->set_padding(0,0);
   image208->set_alignment(0.5,0.5);
   image208->set_padding(0,0);
   image209->set_alignment(0.5,0.5);
   image209->set_padding(0,0);
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonNuevo->set_visible_horizontal(true);
   toolbuttonNuevo->set_visible_vertical(true);
   toolbuttonNuevo->set_is_important(false);
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonAbrir->set_visible_horizontal(true);
   toolbuttonAbrir->set_visible_vertical(true);
   toolbuttonAbrir->set_is_important(false);
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonGuardar->set_visible_horizontal(true);
   toolbuttonGuardar->set_visible_vertical(true);
   toolbuttonGuardar->set_is_important(false);
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   separatortoolitem1->set_visible_horizontal(true);
   separatortoolitem1->set_visible_vertical(true);
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDeformar->set_visible_horizontal(true);
   toolbuttonDeformar->set_visible_vertical(true);
   toolbuttonDeformar->set_is_important(false);
#endif //
   toolbuttonDeformar_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonRefinar->set_visible_horizontal(true);
   toolbuttonRefinar->set_visible_vertical(true);
   toolbuttonRefinar->set_is_important(false);
#endif //
   toolbuttonRefinar_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDesrefinar->set_visible_horizontal(true);
   toolbuttonDesrefinar->set_visible_vertical(true);
   toolbuttonDesrefinar->set_is_important(false);
#endif //
   toolbuttonDesrefinar_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonMejorar->set_visible_horizontal(true);
   toolbuttonMejorar->set_visible_vertical(true);
   toolbuttonMejorar->set_is_important(false);
#endif //
   toolbuttonMejorar_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   _tooltips.set_tip(*toolbuttonTriangular, "convertir en malla de triángulos", "");
   toolbuttonTriangular->set_visible_horizontal(true);
   toolbuttonTriangular->set_visible_vertical(true);
   toolbuttonTriangular->set_is_important(false);
   toolbuttonTriangular->set_tooltip(_tooltips, "convertir en malla de triángulos");
#endif //
   toolbuttonTriangular_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   _tooltips.set_tip(*toolbuttonCuadrangular, "convertir en malla de cuadriláteros", "");
   toolbuttonCuadrangular->set_visible_horizontal(true);
   toolbuttonCuadrangular->set_visible_vertical(true);
   toolbuttonCuadrangular->set_is_important(false);
   toolbuttonCuadrangular->set_tooltip(_tooltips, "convertir en malla de cuadriláteros");
#endif //
   toolbuttonCuadrangular_img->show();
   toolbar1->set_tooltips(true);
   toolbar1->set_toolbar_style(Gtk::TOOLBAR_BOTH);
   toolbar1->set_orientation(Gtk::ORIENTATION_HORIZONTAL);
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbar1->set_show_arrow(true);
#endif //
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonEnlentecer->set_visible_horizontal(true);
   toolbuttonEnlentecer->set_visible_vertical(true);
   toolbuttonEnlentecer->set_is_important(false);
#endif //
   toolbuttonEnlentecer_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonDetenerAnimacion->set_visible_horizontal(true);
   toolbuttonDetenerAnimacion->set_visible_vertical(true);
   toolbuttonDetenerAnimacion->set_is_important(false);
#endif //
   toolbuttonDetenerAnimacion_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonPausarAnimacion->set_visible_horizontal(true);
   toolbuttonPausarAnimacion->set_visible_vertical(true);
   toolbuttonPausarAnimacion->set_is_important(false);
#endif //
   toolbuttonPausarAnimacion_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonIniciarAnimacion->set_visible_horizontal(true);
   toolbuttonIniciarAnimacion->set_visible_vertical(true);
   toolbuttonIniciarAnimacion->set_is_important(false);
#endif //
   toolbuttonIniciarAnimacion_img->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbuttonApurar->set_visible_horizontal(true);
   toolbuttonApurar->set_visible_vertical(true);
   toolbuttonApurar->set_is_important(false);
#endif //
   toolbuttonApurar_img->show();
   toolbarControlesAnimacion->set_tooltips(true);
   toolbarControlesAnimacion->set_toolbar_style(Gtk::TOOLBAR_ICONS);
   toolbarControlesAnimacion->set_orientation(Gtk::ORIENTATION_HORIZONTAL);
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   toolbarControlesAnimacion->set_show_arrow(true);
#endif //
   vboxVisualizador->pack_start(*vboxDrawingArea);
   vboxVisualizador->pack_start(*toolbarControlesAnimacion, Gtk::PACK_SHRINK, 0);
   alignmentVisualizador->add(*vboxVisualizador);
   label1->set_alignment(0.5,0.5);
   label1->set_padding(0,0);
   label1->set_justify(Gtk::JUSTIFY_LEFT);
   label1->set_line_wrap(false);
   label1->set_use_markup(true);
   label1->set_selectable(false);
   frame1->set_border_width(5);
   frame1->set_shadow_type(Gtk::SHADOW_NONE);
   frame1->set_label_align(0,0.5);
   frame1->add(*alignmentVisualizador);
   frame1->set_label_widget(*label1);
   textviewLog->set_flags(Gtk::CAN_FOCUS);
   textviewLog->set_editable(false);
   textviewLog->set_cursor_visible(true);
   textviewLog->set_pixels_above_lines(0);
   textviewLog->set_pixels_below_lines(0);
   textviewLog->set_pixels_inside_wrap(0);
   textviewLog->set_left_margin(0);
   textviewLog->set_right_margin(0);
   textviewLog->set_indent(0);
   textviewLog->set_wrap_mode(Gtk::WRAP_NONE);
   textviewLog->set_justification(Gtk::JUSTIFY_LEFT);
   scrolledwindow1->set_flags(Gtk::CAN_FOCUS);
   scrolledwindow1->set_shadow_type(Gtk::SHADOW_IN);
   scrolledwindow1->set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
   scrolledwindow1->property_window_placement().set_value(Gtk::CORNER_TOP_LEFT);
   scrolledwindow1->add(*textviewLog);
   alignment2->add(*scrolledwindow1);
   label2->set_alignment(0.5,0.5);
   label2->set_padding(0,0);
   label2->set_justify(Gtk::JUSTIFY_LEFT);
   label2->set_line_wrap(false);
   label2->set_use_markup(true);
   label2->set_selectable(false);
   frame2->set_border_width(5);
   frame2->set_shadow_type(Gtk::SHADOW_NONE);
   frame2->set_label_align(0,0.5);
   frame2->add(*alignment2);
   frame2->set_label_widget(*label2);
   vbox1->pack_start(*menubar1, Gtk::PACK_SHRINK, 0);
   vbox1->pack_start(*toolbar1, Gtk::PACK_SHRINK, 0);
   vbox1->pack_start(*frame1);
   vbox1->pack_start(*frame2, Gtk::PACK_SHRINK, 0);
   vbox1->pack_start(*statusbar1, Gtk::PACK_SHRINK, 0);
   GUIVentanaPrincipal->set_default_size(800,600);
   GUIVentanaPrincipal->set_modal(false);
   GUIVentanaPrincipal->property_window_position().set_value(Gtk::WIN_POS_NONE);
   GUIVentanaPrincipal->set_resizable(true);
   GUIVentanaPrincipal->property_destroy_with_parent().set_value(false);
   GUIVentanaPrincipal->add(*vbox1);
   nuevo1->show();
   abrir1->show();
   guardar1->show();
   guardar_como1->show();
   separatormenuitem1->show();
   salir1->show();
   menuitem1->show();
   cortar1->show();
   copiar1->show();
   pegar1->show();
   borrar1->show();
   menuitem2->show();
   image198->show();
   deformar1->show();
   image199->show();
   refinar1->show();
   image200->show();
   desrefinar1->show();
   image201->show();
   mejorar1->show();
   image202->show();
   triangular1->show();
   image203->show();
   cuadrangular1->show();
   separador4->show();
   image204->show();
   informacion1->show();
   malla1->show();
   mostrar_caras1->show();
   mostrar_arcos1->show();
   mostrar_colores_segun_concentracion1->show();
   mostrar_todos_los_frames1->show();
   separador3->show();
   image205->show();
   enlentecer_animacion1->show();
   image206->show();
   detener_animacion1->show();
   image207->show();
   pausar_animacion1->show();
   image208->show();
   iniciar_animacion1->show();
   image209->show();
   apurar_animacion1->show();
   menuitem3->show();
   acerca_de1->show();
   menuitem4->show();
   menubar1->show();
   toolbuttonNuevo->show();
   toolbuttonAbrir->show();
   toolbuttonGuardar->show();
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   separatortoolitem1->show();
#endif //
   toolbuttonDeformar->show();
   toolbuttonRefinar->show();
   toolbuttonDesrefinar->show();
   toolbuttonMejorar->show();
   toolbuttonTriangular->show();
   toolbuttonCuadrangular->show();
   toolbar1->show();
   vboxDrawingArea->show();
   toolbuttonEnlentecer->show();
   toolbuttonDetenerAnimacion->show();
   toolbuttonPausarAnimacion->show();
   toolbuttonIniciarAnimacion->show();
   toolbuttonApurar->show();
   toolbarControlesAnimacion->show();
   vboxVisualizador->show();
   alignmentVisualizador->show();
   label1->show();
   frame1->show();
   textviewLog->show();
   scrolledwindow1->show();
   alignment2->show();
   label2->show();
   frame2->show();
   statusbar1->show();
   vbox1->show();
   GUIVentanaPrincipal->show();
   nuevo1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_nuevo1_activate), false);
   abrir1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_abrir1_activate), false);
   guardar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_guardar1_activate), false);
   guardar_como1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_guardar_como1_activate), false);
   salir1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_salir1_activate), false);
   cortar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_cortar1_activate), false);
   copiar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_copiar1_activate), false);
   pegar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_pegar1_activate), false);
   borrar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_borrar1_activate), false);
   deformar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_deformar1_activate), false);
   refinar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_refinar1_activate), false);
   desrefinar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_desrefinar1_activate), false);
   mejorar1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mejorar1_activate), false);
   triangular1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_triangular1_activate), false);
   cuadrangular1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_cuadrangular1_activate), false);
   informacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_informacion1_activate), false);
   mostrar_caras1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mostrar_caras1_activate), false);
   mostrar_arcos1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mostrar_arcos1_activate), false);
   mostrar_colores_segun_concentracion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mostrar_colores_segun_concentracion1_activate), false);
   mostrar_todos_los_frames1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mostrar_todos_los_frames1_activate), false);
   enlentecer_animacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_enlentecer_animacion1_activate), false);
   detener_animacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_detener_animacion1_activate), false);
   pausar_animacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_pausar_animacion1_activate), false);
   iniciar_animacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_iniciar_animacion1_activate), false);
   apurar_animacion1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_apurar_animacion1_activate), false);
   acerca_de1->signal_activate().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_acerca_de1_activate), false);
   toolbuttonNuevo->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_toolbuttonNuevo_clicked), false);
   toolbuttonAbrir->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_toolbuttonAbrir_clicked), false);
   toolbuttonGuardar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_toolbuttonGuardar_clicked), false);
   toolbuttonDeformar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_deformar1_activate), false);
   toolbuttonRefinar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_refinar1_activate), false);
   toolbuttonDesrefinar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_desrefinar1_activate), false);
   toolbuttonMejorar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_mejorar1_activate), false);
   toolbuttonTriangular->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_triangular1_activate), false);
   toolbuttonCuadrangular->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_cuadrangular1_activate), false);
   toolbuttonEnlentecer->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_enlentecer_animacion1_activate), false);
   toolbuttonDetenerAnimacion->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_detener_animacion1_activate), false);
   toolbuttonPausarAnimacion->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_pausar_animacion1_activate), false);
   toolbuttonIniciarAnimacion->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_iniciar_animacion1_activate), false);
   toolbuttonApurar->signal_clicked().connect(sigc::mem_fun(*this, &GUIVentanaPrincipal_glade::on_apurar_animacion1_activate), false);
}

GUIVentanaPrincipal_glade::~GUIVentanaPrincipal_glade()
{  delete gmm_data;
}
