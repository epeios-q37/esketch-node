/*
	Copyright (C) 2007-2017 Claude SIMON (http://q37.info/contact/).

	This file is part of esketch.

	esketch is free software: you can redistribute it and/or
	modify it under the terms of the GNU Affero General Public License as
	published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

	esketch is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
	Affero General Public License for more details.

	You should have received a copy of the GNU Affero General Public License
	along with esketch. If not, see <http://www.gnu.org/licenses/>.
*/

#include "sclnjs.h"
#include "sclmisc.h"

#include "nodeq.h"

# define NAME_MC			"eSketchNJS"
# define NAME_LC			"esketchnjs"
# define NAME_UC			"ESKETCHNJS"
# define WEBSITE_URL		"http://q37.info/"
# define AUTHOR_NAME		"Claude SIMON"
# define AUTHOR_CONTACT		"http://q37.info/contact/"
# define OWNER_NAME			"Claude SIMON"
# define OWNER_CONTACT		"http://q37.info/contact/"
# define COPYRIGHT			COPYRIGHT_YEARS " " OWNER_NAME " (" OWNER_CONTACT ")"	

namespace {
	void GetText_( const sclnjs::sArguments &Arguments )
	{
	qRH
		v8q::sString RawInput;
		str::wString Input, Text;
	qRB
		RawInput.Init();
		Arguments.Get( RawInput );

		Input.Init();
		RawInput.Get( Input );

		Text.Init();
		sclmisc::GetBaseTranslation( "GetText", Text, Input );

		Arguments.SetReturnValue( v8q::sString( Text ) );
	qRR
	qRT
	qRE
	}

}

void sclnjs::SCLNJSRegister( sclnjs::sRegistrar &Registrar )
{
	Registrar.Register( GetText_ );
}

SCLNJS_MODULE( esketch );

const char *sclmisc::SCLMISCTargetName = NAME_LC;
const char *sclmisc::SCLMISCProductName = NAME_MC;
const char *sclnjs::SCLNJSProductVersion = VERSION;
