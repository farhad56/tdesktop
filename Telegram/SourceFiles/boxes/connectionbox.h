/*
This file is part of Telegram Desktop,
the official desktop version of Telegram messaging app, see https://telegram.org

Telegram Desktop is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

It is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

Full license: https://github.com/telegramdesktop/tdesktop/blob/master/LICENSE
Copyright (c) 2014 John Preston, https://desktop.telegram.org
*/
#pragma once

#include "gui/phoneinput.h"
#include "abstractbox.h"

class ConnectionBox : public AbstractBox {
	Q_OBJECT

public:

	ConnectionBox();
	void paintEvent(QPaintEvent *e);
	void resizeEvent(QResizeEvent *e);

public slots:

	void onChange();
	void onSave();

protected:

	void hideAll();
	void showAll();
	void showDone();

private:

	FlatButton _saveButton, _cancelButton;
	FlatInput _hostInput;
	PortInput _portInput;
	FlatInput _userInput, _passwordInput;
	FlatRadiobutton _autoRadio, _httpProxyRadio, _tcpProxyRadio;
	FlatCheckbox _tryIPv6;
};
