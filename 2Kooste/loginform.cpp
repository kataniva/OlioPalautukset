#include "loginform.h"

string LoginForm::getLabelLogin() const
{
    return labelLogin;
}

void LoginForm::initilizeForm()
{
    objF.setLabel("Form Label");
    cout << objF.getLabel() << endl;
}

void LoginForm::setLabelLogin(const string &newLabelLogin)
{
    labelLogin = newLabelLogin;
}

LoginForm::LoginForm()
{

}
