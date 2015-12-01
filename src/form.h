/*
 * Copyright (C) 2015 Andrea Zagli <azagli@libero.it>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __ZAK_FORM_GDAEX_PROVIDER_H__
#define __ZAK_FORM_GDAEX_PROVIDER_H__


#include <glib-object.h>

#include <libgdaex/libgdaex.h>


G_BEGIN_DECLS


#define ZAK_FORM_GDAEX_TYPE_PROVIDER zak_form_gdaex_provider_get_type ()
G_DECLARE_FINAL_TYPE (ZakFormGdaexProvider, zak_form_gdaex_provider, ZAK_FORM_GDAEX, PROVIDER, GObject)

struct _ZakFormGdaexProviderClass
{
	GObjectClass parent_class;
};


ZakFormGdaexProvider *zak_form_gdaex_provider_new (GdaEx *gdaex, const gchar *table);


G_END_DECLS


#endif /* __ZAK_FORM_GDAEX_PROVIDER_H__ */
