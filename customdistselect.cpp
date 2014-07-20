/*
customdistselect.cpp from UNetbootin <http://unetbootin.sourceforge.net>
Copyright (C) 2007-2008 Geza Kovacs <geza0kovacs@gmail.com>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License at <http://www.gnu.org/licenses/> for more details.
*/

if (customver::tr("iscustomver-no") == "iscustomver-yes")
{
	if (customver::tr("Custom UNetbootin Build") != "Custom UNetbootin Build")
		this->setWindowTitle(customver::tr("Custom UNetbootin Build"));
	distroselect->clear();
		distroselect->addItem(customver::tr("Distro Name 1"), (QStringList() << customver::tr("default-distro1version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro1site.org\">http://www.distro1site.org</a><br/>"
		"<b>Description:</b> This distro 1 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 1.") <<
		customver::tr("distro1version-1.0") << customver::tr("someotherversion1-1") << customver::tr("someotherversion1-1_x64") << customver::tr("someotherversion1-1_Live") << customver::tr("someotherversion1-1_Live_x64") << customver::tr("someotherversion1-2") << customver::tr("someotherversion1-2_x64") << customver::tr("someotherversion1-2_Live") << customver::tr("someotherversion1-2_Live_x64") << customver::tr("someotherversion1-3") << customver::tr("someotherversion1-3_x64") << customver::tr("someotherversion1-3_Live") << customver::tr("someotherversion1-3_Live_x64") << customver::tr("someotherversion1-4") << customver::tr("someotherversion1-4_x64") << customver::tr("someotherversion1-4_Live") << customver::tr("someotherversion1-4_Live_x64") << customver::tr("someotherversion1-5") << customver::tr("someotherversion1-5_x64") << customver::tr("someotherversion1-5_Live") << customver::tr("someotherversion1-5_Live_x64") << customver::tr("someotherversion1-6") << customver::tr("someotherversion1-6_x64") << customver::tr("someotherversion1-6_Live") << customver::tr("someotherversion1-6_Live_x64") << customver::tr("someotherversion1-7") << customver::tr("someotherversion1-7_x64") << customver::tr("someotherversion1-7_Live") << customver::tr("someotherversion1-7_Live_x64") << customver::tr("someotherversion1-8") << customver::tr("someotherversion1-8_x64") << customver::tr("someotherversion1-8_Live") << customver::tr("someotherversion1-8_Live_x64") << customver::tr("someotherversion1-9") << customver::tr("someotherversion1-9_x64") << customver::tr("someotherversion1-9_Live") << customver::tr("someotherversion1-9_Live_x64")));
	if (customver::tr("Distro Name 2") != "Distro Name 2" && !customver::tr("Distro Name 2").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 2"), (QStringList() << customver::tr("default-distro2version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro2site.org\">http://www.distro2site.org</a><br/>"
		"<b>Description:</b> This distro 2 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 2.") <<
		customver::tr("distro2version-1.0") << customver::tr("someotherversion2-1") << customver::tr("someotherversion2-1_x64") << customver::tr("someotherversion2-1_Live") << customver::tr("someotherversion2-1_Live_x64") << customver::tr("someotherversion2-2") << customver::tr("someotherversion2-2_x64") << customver::tr("someotherversion2-2_Live") << customver::tr("someotherversion2-2_Live_x64") << customver::tr("someotherversion2-3") << customver::tr("someotherversion2-3_x64") << customver::tr("someotherversion2-3_Live") << customver::tr("someotherversion2-3_Live_x64") << customver::tr("someotherversion2-4") << customver::tr("someotherversion2-4_x64") << customver::tr("someotherversion2-4_Live") << customver::tr("someotherversion2-4_Live_x64") << customver::tr("someotherversion2-5") << customver::tr("someotherversion2-5_x64") << customver::tr("someotherversion2-5_Live") << customver::tr("someotherversion2-5_Live_x64") << customver::tr("someotherversion2-6") << customver::tr("someotherversion2-6_x64") << customver::tr("someotherversion2-6_Live") << customver::tr("someotherversion2-6_Live_x64") << customver::tr("someotherversion2-7") << customver::tr("someotherversion2-7_x64") << customver::tr("someotherversion2-7_Live") << customver::tr("someotherversion2-7_Live_x64") << customver::tr("someotherversion2-8") << customver::tr("someotherversion2-8_x64") << customver::tr("someotherversion2-8_Live") << customver::tr("someotherversion2-8_Live_x64") << customver::tr("someotherversion2-9") << customver::tr("someotherversion2-9_x64") << customver::tr("someotherversion2-9_Live") << customver::tr("someotherversion2-9_Live_x64")));
	}
	if (customver::tr("Distro Name 3") != "Distro Name 3" && !customver::tr("Distro Name 3").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 3"), (QStringList() << customver::tr("default-distro3version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro3site.org\">http://www.distro3site.org</a><br/>"
		"<b>Description:</b> This distro 3 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 3.") <<
		customver::tr("distro3version-1.0") << customver::tr("someotherversion3-1") << customver::tr("someotherversion3-1_x64") << customver::tr("someotherversion3-1_Live") << customver::tr("someotherversion3-1_Live_x64") << customver::tr("someotherversion3-2") << customver::tr("someotherversion3-2_x64") << customver::tr("someotherversion3-2_Live") << customver::tr("someotherversion3-2_Live_x64") << customver::tr("someotherversion3-3") << customver::tr("someotherversion3-3_x64") << customver::tr("someotherversion3-3_Live") << customver::tr("someotherversion3-3_Live_x64") << customver::tr("someotherversion3-4") << customver::tr("someotherversion3-4_x64") << customver::tr("someotherversion3-4_Live") << customver::tr("someotherversion3-4_Live_x64") << customver::tr("someotherversion3-5") << customver::tr("someotherversion3-5_x64") << customver::tr("someotherversion3-5_Live") << customver::tr("someotherversion3-5_Live_x64") << customver::tr("someotherversion3-6") << customver::tr("someotherversion3-6_x64") << customver::tr("someotherversion3-6_Live") << customver::tr("someotherversion3-6_Live_x64") << customver::tr("someotherversion3-7") << customver::tr("someotherversion3-7_x64") << customver::tr("someotherversion3-7_Live") << customver::tr("someotherversion3-7_Live_x64") << customver::tr("someotherversion3-8") << customver::tr("someotherversion3-8_x64") << customver::tr("someotherversion3-8_Live") << customver::tr("someotherversion3-8_Live_x64") << customver::tr("someotherversion3-9") << customver::tr("someotherversion3-9_x64") << customver::tr("someotherversion3-9_Live") << customver::tr("someotherversion3-9_Live_x64")));
	}
	if (customver::tr("Distro Name 4") != "Distro Name 4" && !customver::tr("Distro Name 4").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 4"), (QStringList() << customver::tr("default-distro4version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro4site.org\">http://www.distro4site.org</a><br/>"
		"<b>Description:</b> This distro 4 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 4.") <<
		customver::tr("distro4version-1.0") << customver::tr("someotherversion4-1") << customver::tr("someotherversion4-1_x64") << customver::tr("someotherversion4-1_Live") << customver::tr("someotherversion4-1_Live_x64") << customver::tr("someotherversion4-2") << customver::tr("someotherversion4-2_x64") << customver::tr("someotherversion4-2_Live") << customver::tr("someotherversion4-2_Live_x64") << customver::tr("someotherversion4-3") << customver::tr("someotherversion4-3_x64") << customver::tr("someotherversion4-3_Live") << customver::tr("someotherversion4-3_Live_x64") << customver::tr("someotherversion4-4") << customver::tr("someotherversion4-4_x64") << customver::tr("someotherversion4-4_Live") << customver::tr("someotherversion4-4_Live_x64") << customver::tr("someotherversion4-5") << customver::tr("someotherversion4-5_x64") << customver::tr("someotherversion4-5_Live") << customver::tr("someotherversion4-5_Live_x64") << customver::tr("someotherversion4-6") << customver::tr("someotherversion4-6_x64") << customver::tr("someotherversion4-6_Live") << customver::tr("someotherversion4-6_Live_x64") << customver::tr("someotherversion4-7") << customver::tr("someotherversion4-7_x64") << customver::tr("someotherversion4-7_Live") << customver::tr("someotherversion4-7_Live_x64") << customver::tr("someotherversion4-8") << customver::tr("someotherversion4-8_x64") << customver::tr("someotherversion4-8_Live") << customver::tr("someotherversion4-8_Live_x64") << customver::tr("someotherversion4-9") << customver::tr("someotherversion4-9_x64") << customver::tr("someotherversion4-9_Live") << customver::tr("someotherversion4-9_Live_x64")));
	}
	if (customver::tr("Distro Name 5") != "Distro Name 5" && !customver::tr("Distro Name 5").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 5"), (QStringList() << customver::tr("default-distro5version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro5site.org\">http://www.distro5site.org</a><br/>"
		"<b>Description:</b> This distro 5 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 5.") <<
		customver::tr("distro5version-1.0") << customver::tr("someotherversion5-1") << customver::tr("someotherversion5-1_x64") << customver::tr("someotherversion5-1_Live") << customver::tr("someotherversion5-1_Live_x64") << customver::tr("someotherversion5-2") << customver::tr("someotherversion5-2_x64") << customver::tr("someotherversion5-2_Live") << customver::tr("someotherversion5-2_Live_x64") << customver::tr("someotherversion5-3") << customver::tr("someotherversion5-3_x64") << customver::tr("someotherversion5-3_Live") << customver::tr("someotherversion5-3_Live_x64") << customver::tr("someotherversion5-4") << customver::tr("someotherversion5-4_x64") << customver::tr("someotherversion5-4_Live") << customver::tr("someotherversion5-4_Live_x64") << customver::tr("someotherversion5-5") << customver::tr("someotherversion5-5_x64") << customver::tr("someotherversion5-5_Live") << customver::tr("someotherversion5-5_Live_x64") << customver::tr("someotherversion5-6") << customver::tr("someotherversion5-6_x64") << customver::tr("someotherversion5-6_Live") << customver::tr("someotherversion5-6_Live_x64") << customver::tr("someotherversion5-7") << customver::tr("someotherversion5-7_x64") << customver::tr("someotherversion5-7_Live") << customver::tr("someotherversion5-7_Live_x64") << customver::tr("someotherversion5-8") << customver::tr("someotherversion5-8_x64") << customver::tr("someotherversion5-8_Live") << customver::tr("someotherversion5-8_Live_x64") << customver::tr("someotherversion5-9") << customver::tr("someotherversion5-9_x64") << customver::tr("someotherversion5-9_Live") << customver::tr("someotherversion5-9_Live_x64")));
	}
	if (customver::tr("Distro Name 6") != "Distro Name 6" && !customver::tr("Distro Name 6").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 6"), (QStringList() << customver::tr("default-distro6version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro6site.org\">http://www.distro6site.org</a><br/>"
		"<b>Description:</b> This distro 6 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 6.") <<
		customver::tr("distro6version-1.0") << customver::tr("someotherversion6-1") << customver::tr("someotherversion6-1_x64") << customver::tr("someotherversion6-1_Live") << customver::tr("someotherversion6-1_Live_x64") << customver::tr("someotherversion6-2") << customver::tr("someotherversion6-2_x64") << customver::tr("someotherversion6-2_Live") << customver::tr("someotherversion6-2_Live_x64") << customver::tr("someotherversion6-3") << customver::tr("someotherversion6-3_x64") << customver::tr("someotherversion6-3_Live") << customver::tr("someotherversion6-3_Live_x64") << customver::tr("someotherversion6-4") << customver::tr("someotherversion6-4_x64") << customver::tr("someotherversion6-4_Live") << customver::tr("someotherversion6-4_Live_x64") << customver::tr("someotherversion6-5") << customver::tr("someotherversion6-5_x64") << customver::tr("someotherversion6-5_Live") << customver::tr("someotherversion6-5_Live_x64") << customver::tr("someotherversion6-6") << customver::tr("someotherversion6-6_x64") << customver::tr("someotherversion6-6_Live") << customver::tr("someotherversion6-6_Live_x64") << customver::tr("someotherversion6-7") << customver::tr("someotherversion6-7_x64") << customver::tr("someotherversion6-7_Live") << customver::tr("someotherversion6-7_Live_x64") << customver::tr("someotherversion6-8") << customver::tr("someotherversion6-8_x64") << customver::tr("someotherversion6-8_Live") << customver::tr("someotherversion6-8_Live_x64") << customver::tr("someotherversion6-9") << customver::tr("someotherversion6-9_x64") << customver::tr("someotherversion6-9_Live") << customver::tr("someotherversion6-9_Live_x64")));
	}
	if (customver::tr("Distro Name 7") != "Distro Name 7" && !customver::tr("Distro Name 7").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 7"), (QStringList() << customver::tr("default-distro7version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro7site.org\">http://www.distro7site.org</a><br/>"
		"<b>Description:</b> This distro 7 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 7.") <<
		customver::tr("distro7version-1.0") << customver::tr("someotherversion7-1") << customver::tr("someotherversion7-1_x64") << customver::tr("someotherversion7-1_Live") << customver::tr("someotherversion7-1_Live_x64") << customver::tr("someotherversion7-2") << customver::tr("someotherversion7-2_x64") << customver::tr("someotherversion7-2_Live") << customver::tr("someotherversion7-2_Live_x64") << customver::tr("someotherversion7-3") << customver::tr("someotherversion7-3_x64") << customver::tr("someotherversion7-3_Live") << customver::tr("someotherversion7-3_Live_x64") << customver::tr("someotherversion7-4") << customver::tr("someotherversion7-4_x64") << customver::tr("someotherversion7-4_Live") << customver::tr("someotherversion7-4_Live_x64") << customver::tr("someotherversion7-5") << customver::tr("someotherversion7-5_x64") << customver::tr("someotherversion7-5_Live") << customver::tr("someotherversion7-5_Live_x64") << customver::tr("someotherversion7-6") << customver::tr("someotherversion7-6_x64") << customver::tr("someotherversion7-6_Live") << customver::tr("someotherversion7-6_Live_x64") << customver::tr("someotherversion7-7") << customver::tr("someotherversion7-7_x64") << customver::tr("someotherversion7-7_Live") << customver::tr("someotherversion7-7_Live_x64") << customver::tr("someotherversion7-8") << customver::tr("someotherversion7-8_x64") << customver::tr("someotherversion7-8_Live") << customver::tr("someotherversion7-8_Live_x64") << customver::tr("someotherversion7-9") << customver::tr("someotherversion7-9_x64") << customver::tr("someotherversion7-9_Live") << customver::tr("someotherversion7-9_Live_x64")));
	}
	if (customver::tr("Distro Name 8") != "Distro Name 8" && !customver::tr("Distro Name 8").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 8"), (QStringList() << customver::tr("default-distro8version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro8site.org\">http://www.distro8site.org</a><br/>"
		"<b>Description:</b> This distro 8 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 8.") <<
		customver::tr("distro8version-1.0") << customver::tr("someotherversion8-1") << customver::tr("someotherversion8-1_x64") << customver::tr("someotherversion8-1_Live") << customver::tr("someotherversion8-1_Live_x64") << customver::tr("someotherversion8-2") << customver::tr("someotherversion8-2_x64") << customver::tr("someotherversion8-2_Live") << customver::tr("someotherversion8-2_Live_x64") << customver::tr("someotherversion8-3") << customver::tr("someotherversion8-3_x64") << customver::tr("someotherversion8-3_Live") << customver::tr("someotherversion8-3_Live_x64") << customver::tr("someotherversion8-4") << customver::tr("someotherversion8-4_x64") << customver::tr("someotherversion8-4_Live") << customver::tr("someotherversion8-4_Live_x64") << customver::tr("someotherversion8-5") << customver::tr("someotherversion8-5_x64") << customver::tr("someotherversion8-5_Live") << customver::tr("someotherversion8-5_Live_x64") << customver::tr("someotherversion8-6") << customver::tr("someotherversion8-6_x64") << customver::tr("someotherversion8-6_Live") << customver::tr("someotherversion8-6_Live_x64") << customver::tr("someotherversion8-7") << customver::tr("someotherversion8-7_x64") << customver::tr("someotherversion8-7_Live") << customver::tr("someotherversion8-7_Live_x64") << customver::tr("someotherversion8-8") << customver::tr("someotherversion8-8_x64") << customver::tr("someotherversion8-8_Live") << customver::tr("someotherversion8-8_Live_x64") << customver::tr("someotherversion8-9") << customver::tr("someotherversion8-9_x64") << customver::tr("someotherversion8-9_Live") << customver::tr("someotherversion8-9_Live_x64")));
	}
	if (customver::tr("Distro Name 9") != "Distro Name 9" && !customver::tr("Distro Name 9").isEmpty())
	{
		distroselect->addItem(customver::tr("Distro Name 9"), (QStringList() << customver::tr("default-distro9version-1.0") <<
		customver::tr("<b>Homepage:</b> <a href=\"http://www.distro9site.org\">http://www.distro9site.org</a><br/>"
		"<b>Description:</b> This distro 9 is unique and great in these ways.<br/>"
		"<b>Install Notes:</b> You will have to do this to install this distribution 9.") <<
		customver::tr("distro9version-1.0") << customver::tr("someotherversion9-1") << customver::tr("someotherversion9-1_x64") << customver::tr("someotherversion9-1_Live") << customver::tr("someotherversion9-1_Live_x64") << customver::tr("someotherversion9-2") << customver::tr("someotherversion9-2_x64") << customver::tr("someotherversion9-2_Live") << customver::tr("someotherversion9-2_Live_x64") << customver::tr("someotherversion9-3") << customver::tr("someotherversion9-3_x64") << customver::tr("someotherversion9-3_Live") << customver::tr("someotherversion9-3_Live_x64") << customver::tr("someotherversion9-4") << customver::tr("someotherversion9-4_x64") << customver::tr("someotherversion9-4_Live") << customver::tr("someotherversion9-4_Live_x64") << customver::tr("someotherversion9-5") << customver::tr("someotherversion9-5_x64") << customver::tr("someotherversion9-5_Live") << customver::tr("someotherversion9-5_Live_x64") << customver::tr("someotherversion9-6") << customver::tr("someotherversion9-6_x64") << customver::tr("someotherversion9-6_Live") << customver::tr("someotherversion9-6_Live_x64") << customver::tr("someotherversion9-7") << customver::tr("someotherversion9-7_x64") << customver::tr("someotherversion9-7_Live") << customver::tr("someotherversion9-7_Live_x64") << customver::tr("someotherversion9-8") << customver::tr("someotherversion9-8_x64") << customver::tr("someotherversion9-8_Live") << customver::tr("someotherversion9-8_Live_x64") << customver::tr("someotherversion9-9") << customver::tr("someotherversion9-9_x64") << customver::tr("someotherversion9-9_Live") << customver::tr("someotherversion9-9_Live_x64")));
	}
}
