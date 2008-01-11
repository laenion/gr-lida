/*
 *
 * GR-lida by Monthy
 *
 * This file is part of GR-lida is a Frontend for DOSBox, ScummVM and VDMSound
 * Copyright (C) 2006  Pedro A. Garcia Rosado Aka Monthy
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 *
**/

#include "grlida_addedit_url.h"

frmAddEditURL::frmAddEditURL(QDialog *parent, Qt::WFlags flags)
	: QDialog( parent, flags )
{
	ui.setupUi(this);
	connect( ui.btnOk , SIGNAL( clicked() ), this, SLOT( on_btnOk() ) );
}

frmAddEditURL::~frmAddEditURL()
{

}

void frmAddEditURL::on_btnOk(){
	if(ui.txt_addedit_url_1->currentText()!="")
		QDialog::accept();
	else
		QMessageBox::information( this, "URL", tr("Debes poner almenos la url"));
}
