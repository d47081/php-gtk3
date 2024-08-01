
#ifndef _PHPGTK_GTK_H_
#define _PHPGTK_GTK_H_

	#include <phpcpp.h>
	#include <iostream>
	#include <gtk/gtk.h>

	/**
	 * Dependency:
	 *  show_uri_on_window
	 */
	#include "GtkWindow.h" 

	/**
	 *  
	 */
	class Gtk_ : public Php::Base
	{
		/**
		 * Privates
		 */
		private:
			/**
			 * 
			 */
			GtkWidget *widget;

            struct st_timeout_add;

		/**
		 * Publics
		 */
		public:
			/**
			 *  C++ constructor/destructor
			 */
			Gtk_();

			/**
			 * Gtk loop
			 *		https://developer.gnome.org/gtk3/stable/gtk3-General.html#gtk-main
			 */
			static void main();

			/**
			 * Gtk main quit
			 *		https://developer.gnome.org/gtk3/stable/gtk3-General.html#gtk-main-quit
			 */
			static void main_quit();

			static Php::Value timeout_add(Php::Parameters &parameters);
			static Php::Value source_remove(Php::Parameters &parameters);
			static Php::Value show_uri_on_window(Php::Parameters &parameters);
			static gint timeout_add_callback(gpointer data);

			static Php::Value events_pending();
			static Php::Value main_iteration();
			static Php::Value get_major_version();
			static Php::Value get_micro_version();
			static Php::Value get_minor_version();
			static void init();

	};

#endif