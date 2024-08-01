
#ifndef _PHPGTK_PANGOLAYOUT_H_
#define _PHPGTK_PANGOLAYOUT_H_

    #include <phpcpp.h>

    #include "../G/GObject.h"

    #include "PangoContext.h"
    #include "PangoLayoutLine.h"

    class PangoLayout_ : public GObject_
    {
        /**
         * Publics
         */
        public:

            /**
             *  C++ constructor and destructor
             */
            PangoLayout_();
            ~PangoLayout_();

            void __construct(Php::Parameters &parameters);

            void set_text(Php::Parameters &parameters);

            void set_markup(Php::Parameters &parameters);

            void set_width(Php::Parameters &parameters);

            Php::Value get_line(Php::Parameters &parameters);

            Php::Value get_text();

            Php::Value get_width();

            Php::Value xy_to_index(Php::Parameters &parameters);

            Php::Value get_extents();

            Php::Value get_size();

            Php::Value get_pixel_size();

            void set_spacing(Php::Parameters &parameters);

            Php::Value get_spacing();

            void set_line_spacing(Php::Parameters &parameters);

            Php::Value get_line_spacing();
    };

#endif
