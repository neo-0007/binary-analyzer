
/* std::__sso_string::~__sso_string() */

void __thiscall std::__sso_string::~__sso_string(__sso_string *this)

{
  if (*(__sso_string **)this != this + 0x10) {
    operator_delete(*(__sso_string **)this);
    return;
  }
  return;
}

