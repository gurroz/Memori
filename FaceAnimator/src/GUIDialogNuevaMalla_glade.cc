// generated 2007/10/25 16:08:00 CLST by cristi@cristi-laptop.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/cristi/svn/CC69F/TreeGrowthSimulator.glade
// for gtk 2.10.11 and gtkmm 2.10.8
//
// Please modify the corresponding derived classes in ./src/GUIDialogNuevaMalla.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
////#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "GUIDialogNuevaMalla_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/adjustment.h>

GUIDialogNuevaMalla_glade::GUIDialogNuevaMalla_glade(
)
{  GUIDialogNuevaMalla = this;
   gmm_data = new GlademmData(get_accel_group());
   cancelbutton2 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   okbutton3 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   label12 = Gtk::manage(new class Gtk::Label("Tipo de figura: "));
   comboTipoFigura = Gtk::manage(new class Gtk::Combo());
   hbox9 = Gtk::manage(new class Gtk::HBox(false, 0));
   label13 = Gtk::manage(new class Gtk::Label("Altura: "));

   Gtk::Adjustment *spinbuttonAltura_adj = Gtk::manage(new class Gtk::Adjustment(100, 0, 1000, 1, 10, 10));
   spinbuttonAltura = Gtk::manage(new class Gtk::SpinButton(*spinbuttonAltura_adj, 1, 0));
   label14 = Gtk::manage(new class Gtk::Label("Radio: "));

   Gtk::Adjustment *spinbuttonRadio_adj = Gtk::manage(new class Gtk::Adjustment(10, 0, 1000, 1, 10, 10));
   spinbuttonRadio = Gtk::manage(new class Gtk::SpinButton(*spinbuttonRadio_adj, 1, 0));
   label15 = Gtk::manage(new class Gtk::Label("Numero de anillos: "));

   Gtk::Adjustment *spinbuttonNumeroDeAnillos_adj = Gtk::manage(new class Gtk::Adjustment(100, 0, 1000, 1, 10, 10));
   spinbuttonNumeroDeAnillos = Gtk::manage(new class Gtk::SpinButton(*spinbuttonNumeroDeAnillos_adj, 1, 0));
   label16 = Gtk::manage(new class Gtk::Label("Puntos por anillo:"));

   Gtk::Adjustment *spinbuttonPuntosPorAnillo_adj = Gtk::manage(new class Gtk::Adjustment(100, 0, 1000, 1, 10, 10));
   spinbuttonPuntosPorAnillo = Gtk::manage(new class Gtk::SpinButton(*spinbuttonPuntosPorAnillo_adj, 1, 0));
   label17 = Gtk::manage(new class Gtk::Label("Tipo de malla: "));
   comboTipoMalla = Gtk::manage(new class Gtk::Combo());
   table3 = Gtk::manage(new class Gtk::Table(2, 2, false));
   alignment10 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label45 = Gtk::manage(new class Gtk::Label("<b>Propiedades</b>"));
   frameCilindro = Gtk::manage(new class Gtk::Frame());
   label51 = Gtk::manage(new class Gtk::Label("Archivo medula: "));
   label52 = Gtk::manage(new class Gtk::Label("Radio: "));
   label53 = Gtk::manage(new class Gtk::Label("Numero de anillos: "));
   label54 = Gtk::manage(new class Gtk::Label("Puntos por anillo: "));

   Gtk::Adjustment *spinbuttonMedulaRadio_adj = Gtk::manage(new class Gtk::Adjustment(10, 0, 100, 1, 10, 10));
   spinbuttonMedulaRadio = Gtk::manage(new class Gtk::SpinButton(*spinbuttonMedulaRadio_adj, 1, 0));

   Gtk::Adjustment *spinbuttonMedulaNumeroDeAnillos_adj = Gtk::manage(new class Gtk::Adjustment(100, 0, 1000, 1, 10, 10));
   spinbuttonMedulaNumeroDeAnillos = Gtk::manage(new class Gtk::SpinButton(*spinbuttonMedulaNumeroDeAnillos_adj, 1, 0));

   Gtk::Adjustment *spinbuttonMedulaPuntosPorAnillo_adj = Gtk::manage(new class Gtk::Adjustment(100, 0, 1000, 1, 10, 10));
   spinbuttonMedulaPuntosPorAnillo = Gtk::manage(new class Gtk::SpinButton(*spinbuttonMedulaPuntosPorAnillo_adj, 1, 0));
   entryMedulaArchivo = Gtk::manage(new class Gtk::Entry());
   buttonMedulaExplorarArchivo = Gtk::manage(new class Gtk::Button("Explorar..."));
   hbox10 = Gtk::manage(new class Gtk::HBox(false, 0));
   label55 = Gtk::manage(new class Gtk::Label("Tipo de malla: "));
   comboMedulaTipoMalla = Gtk::manage(new class Gtk::Combo());
   table10 = Gtk::manage(new class Gtk::Table(2, 2, false));
   alignment12 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label50 = Gtk::manage(new class Gtk::Label("<b>Propiedades</b>"));
   frameMedula = Gtk::manage(new class Gtk::Frame());
   vbox9 = Gtk::manage(new class Gtk::VBox(false, 0));
   cancelbutton2->set_flags(Gtk::CAN_FOCUS);
   cancelbutton2->set_flags(Gtk::CAN_DEFAULT);
   cancelbutton2->set_relief(Gtk::RELIEF_NORMAL);
   okbutton3->set_flags(Gtk::CAN_FOCUS);
   okbutton3->set_flags(Gtk::CAN_DEFAULT);
   okbutton3->set_relief(Gtk::RELIEF_NORMAL);
   GUIDialogNuevaMalla->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   label12->set_alignment(0,0.5);
   label12->set_padding(0,0);
   label12->set_justify(Gtk::JUSTIFY_LEFT);
   label12->set_line_wrap(false);
   label12->set_use_markup(false);
   label12->set_selectable(false);
   comboTipoFigura->get_entry()->set_flags(Gtk::CAN_FOCUS);
   comboTipoFigura->get_entry()->set_visibility(true);
   comboTipoFigura->get_entry()->set_editable(false);
   comboTipoFigura->get_entry()->set_max_length(0);
   comboTipoFigura->get_entry()->set_text("");
   comboTipoFigura->get_entry()->set_has_frame(true);
   comboTipoFigura->get_entry()->set_activates_default(false);
   comboTipoFigura->set_case_sensitive(false);
   {

      const char * const items[] = { "Cilindro", "A partir de Medula", 0 };
      comboTipoFigura->set_popdown_strings(items);
   }
   comboTipoFigura->get_entry()->set_text("");
   hbox9->pack_start(*label12, Gtk::PACK_SHRINK, 0);
   hbox9->pack_start(*comboTipoFigura);
   label13->set_alignment(0,0.5);
   label13->set_padding(0,0);
   label13->set_justify(Gtk::JUSTIFY_LEFT);
   label13->set_line_wrap(false);
   label13->set_use_markup(false);
   label13->set_selectable(false);
   spinbuttonAltura->set_flags(Gtk::CAN_FOCUS);
   spinbuttonAltura->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonAltura->set_numeric(true);
   spinbuttonAltura->set_digits(0);
   spinbuttonAltura->set_wrap(false);
   label14->set_alignment(0,0.5);
   label14->set_padding(0,0);
   label14->set_justify(Gtk::JUSTIFY_LEFT);
   label14->set_line_wrap(false);
   label14->set_use_markup(false);
   label14->set_selectable(false);
   spinbuttonRadio->set_flags(Gtk::CAN_FOCUS);
   spinbuttonRadio->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonRadio->set_numeric(true);
   spinbuttonRadio->set_digits(0);
   spinbuttonRadio->set_wrap(false);
   label15->set_alignment(0,0.5);
   label15->set_padding(0,0);
   label15->set_justify(Gtk::JUSTIFY_LEFT);
   label15->set_line_wrap(false);
   label15->set_use_markup(false);
   label15->set_selectable(false);
   spinbuttonNumeroDeAnillos->set_flags(Gtk::CAN_FOCUS);
   spinbuttonNumeroDeAnillos->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonNumeroDeAnillos->set_numeric(true);
   spinbuttonNumeroDeAnillos->set_digits(0);
   spinbuttonNumeroDeAnillos->set_wrap(false);
   label16->set_alignment(0,0.5);
   label16->set_padding(0,0);
   label16->set_justify(Gtk::JUSTIFY_LEFT);
   label16->set_line_wrap(false);
   label16->set_use_markup(false);
   label16->set_selectable(false);
   spinbuttonPuntosPorAnillo->set_flags(Gtk::CAN_FOCUS);
   spinbuttonPuntosPorAnillo->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonPuntosPorAnillo->set_numeric(true);
   spinbuttonPuntosPorAnillo->set_digits(0);
   spinbuttonPuntosPorAnillo->set_wrap(false);
   label17->set_alignment(0,0.5);
   label17->set_padding(0,0);
   label17->set_justify(Gtk::JUSTIFY_LEFT);
   label17->set_line_wrap(false);
   label17->set_use_markup(false);
   label17->set_selectable(false);
   comboTipoMalla->get_entry()->set_flags(Gtk::CAN_FOCUS);
   comboTipoMalla->get_entry()->set_visibility(true);
   comboTipoMalla->get_entry()->set_editable(false);
   comboTipoMalla->get_entry()->set_max_length(0);
   comboTipoMalla->get_entry()->set_text("");
   comboTipoMalla->get_entry()->set_has_frame(true);
   comboTipoMalla->get_entry()->set_activates_default(false);
   comboTipoMalla->set_case_sensitive(false);
   {

      const char * const items[] = { "Triangulos", "Cuadrilateros", 0 };
      comboTipoMalla->set_popdown_strings(items);
   }
   comboTipoMalla->get_entry()->set_text("");
   table3->set_row_spacings(0);
   table3->set_col_spacings(0);
   table3->attach(*label13, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*spinbuttonAltura, 1, 2, 0, 1, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label14, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*spinbuttonRadio, 1, 2, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label15, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*spinbuttonNumeroDeAnillos, 1, 2, 2, 3, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label16, 0, 1, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*spinbuttonPuntosPorAnillo, 1, 2, 3, 4, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*label17, 0, 1, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table3->attach(*comboTipoMalla, 1, 2, 4, 5, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   alignment10->add(*table3);
   label45->set_alignment(0.5,0.5);
   label45->set_padding(0,0);
   label45->set_justify(Gtk::JUSTIFY_LEFT);
   label45->set_line_wrap(false);
   label45->set_use_markup(true);
   label45->set_selectable(false);
   frameCilindro->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   frameCilindro->set_label_align(0,0.5);
   frameCilindro->add(*alignment10);
   frameCilindro->set_label_widget(*label45);
   label51->set_alignment(0,0.5);
   label51->set_padding(0,0);
   label51->set_justify(Gtk::JUSTIFY_LEFT);
   label51->set_line_wrap(false);
   label51->set_use_markup(false);
   label51->set_selectable(false);
   label52->set_alignment(0,0.5);
   label52->set_padding(0,0);
   label52->set_justify(Gtk::JUSTIFY_LEFT);
   label52->set_line_wrap(false);
   label52->set_use_markup(false);
   label52->set_selectable(false);
   label53->set_alignment(0,0.5);
   label53->set_padding(0,0);
   label53->set_justify(Gtk::JUSTIFY_LEFT);
   label53->set_line_wrap(false);
   label53->set_use_markup(false);
   label53->set_selectable(false);
   label54->set_alignment(0,0.5);
   label54->set_padding(0,0);
   label54->set_justify(Gtk::JUSTIFY_LEFT);
   label54->set_line_wrap(false);
   label54->set_use_markup(false);
   label54->set_selectable(false);
   spinbuttonMedulaRadio->set_flags(Gtk::CAN_FOCUS);
   spinbuttonMedulaRadio->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonMedulaRadio->set_numeric(false);
   spinbuttonMedulaRadio->set_digits(0);
   spinbuttonMedulaRadio->set_wrap(false);
   spinbuttonMedulaNumeroDeAnillos->set_flags(Gtk::CAN_FOCUS);
   spinbuttonMedulaNumeroDeAnillos->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonMedulaNumeroDeAnillos->set_numeric(false);
   spinbuttonMedulaNumeroDeAnillos->set_digits(0);
   spinbuttonMedulaNumeroDeAnillos->set_wrap(false);
   spinbuttonMedulaPuntosPorAnillo->set_flags(Gtk::CAN_FOCUS);
   spinbuttonMedulaPuntosPorAnillo->set_update_policy(Gtk::UPDATE_ALWAYS);
   spinbuttonMedulaPuntosPorAnillo->set_numeric(false);
   spinbuttonMedulaPuntosPorAnillo->set_digits(0);
   spinbuttonMedulaPuntosPorAnillo->set_wrap(false);
   entryMedulaArchivo->set_flags(Gtk::CAN_FOCUS);
   entryMedulaArchivo->set_visibility(true);
   entryMedulaArchivo->set_editable(false);
   entryMedulaArchivo->set_max_length(0);
   entryMedulaArchivo->set_text("");
   entryMedulaArchivo->set_has_frame(true);
   entryMedulaArchivo->set_activates_default(false);
   buttonMedulaExplorarArchivo->set_flags(Gtk::CAN_FOCUS);
   buttonMedulaExplorarArchivo->set_relief(Gtk::RELIEF_NORMAL);
   hbox10->pack_start(*entryMedulaArchivo);
   hbox10->pack_start(*buttonMedulaExplorarArchivo, Gtk::PACK_SHRINK, 0);
   label55->set_alignment(0,0.5);
   label55->set_padding(0,0);
   label55->set_justify(Gtk::JUSTIFY_LEFT);
   label55->set_line_wrap(false);
   label55->set_use_markup(false);
   label55->set_selectable(false);
   comboMedulaTipoMalla->get_entry()->set_flags(Gtk::CAN_FOCUS);
   comboMedulaTipoMalla->get_entry()->set_visibility(true);
   comboMedulaTipoMalla->get_entry()->set_editable(false);
   comboMedulaTipoMalla->get_entry()->set_max_length(0);
   comboMedulaTipoMalla->get_entry()->set_text("");
   comboMedulaTipoMalla->get_entry()->set_has_frame(true);
   comboMedulaTipoMalla->get_entry()->set_activates_default(false);
   comboMedulaTipoMalla->set_case_sensitive(false);
   {

      const char * const items[] = { "Triangulos", "Cuadrilateros", 0 };
      comboMedulaTipoMalla->set_popdown_strings(items);
   }
   comboMedulaTipoMalla->get_entry()->set_text("");
   table10->set_row_spacings(0);
   table10->set_col_spacings(0);
   table10->attach(*label51, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*label52, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*label53, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*label54, 0, 1, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*spinbuttonMedulaRadio, 1, 2, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*spinbuttonMedulaNumeroDeAnillos, 1, 2, 2, 3, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*spinbuttonMedulaPuntosPorAnillo, 1, 2, 3, 4, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*hbox10, 1, 2, 0, 1, Gtk::FILL, Gtk::FILL, 0, 0);
   table10->attach(*label55, 0, 1, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table10->attach(*comboMedulaTipoMalla, 1, 2, 4, 5, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   alignment12->add(*table10);
   label50->set_alignment(0.5,0.5);
   label50->set_padding(0,0);
   label50->set_justify(Gtk::JUSTIFY_LEFT);
   label50->set_line_wrap(false);
   label50->set_use_markup(true);
   label50->set_selectable(false);
   frameMedula->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   frameMedula->set_label_align(0,0.5);
   frameMedula->add(*alignment12);
   frameMedula->set_label_widget(*label50);
   vbox9->pack_start(*hbox9);
   vbox9->pack_start(*frameCilindro);
   vbox9->pack_start(*frameMedula);
   GUIDialogNuevaMalla->get_vbox()->set_homogeneous(false);
   GUIDialogNuevaMalla->get_vbox()->set_spacing(0);
   GUIDialogNuevaMalla->get_vbox()->pack_start(*vbox9);
   GUIDialogNuevaMalla->set_title("Nueva Malla");
   GUIDialogNuevaMalla->set_modal(false);
   GUIDialogNuevaMalla->property_window_position().set_value(Gtk::WIN_POS_NONE);
   GUIDialogNuevaMalla->set_resizable(true);
   GUIDialogNuevaMalla->property_destroy_with_parent().set_value(false);
   GUIDialogNuevaMalla->set_has_separator(true);
   GUIDialogNuevaMalla->add_action_widget(*cancelbutton2, -6);
   GUIDialogNuevaMalla->add_action_widget(*okbutton3, -5);
   cancelbutton2->show();
   okbutton3->show();
   label12->show();
   comboTipoFigura->show();
   hbox9->show();
   label13->show();
   spinbuttonAltura->show();
   label14->show();
   spinbuttonRadio->show();
   label15->show();
   spinbuttonNumeroDeAnillos->show();
   label16->show();
   spinbuttonPuntosPorAnillo->show();
   label17->show();
   comboTipoMalla->show();
   table3->show();
   alignment10->show();
   label45->show();
   label51->show();
   label52->show();
   label53->show();
   label54->show();
   spinbuttonMedulaRadio->show();
   spinbuttonMedulaNumeroDeAnillos->show();
   spinbuttonMedulaPuntosPorAnillo->show();
   entryMedulaArchivo->show();
   buttonMedulaExplorarArchivo->show();
   hbox10->show();
   label55->show();
   comboMedulaTipoMalla->show();
   table10->show();
   alignment12->show();
   label50->show();
   frameMedula->show();
   vbox9->show();
   GUIDialogNuevaMalla->show();
   comboTipoFigura->get_entry()->signal_changed().connect(sigc::mem_fun(*this, &GUIDialogNuevaMalla_glade::on_combo_entryTipoFigura_changed), false);
   buttonMedulaExplorarArchivo->signal_clicked().connect(sigc::mem_fun(*this, &GUIDialogNuevaMalla_glade::on_buttonMedulaExplorarArchivo_clicked), false);
}

GUIDialogNuevaMalla_glade::~GUIDialogNuevaMalla_glade()
{  delete gmm_data;
}
