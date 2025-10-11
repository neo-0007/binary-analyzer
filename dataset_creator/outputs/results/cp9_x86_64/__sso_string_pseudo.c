
/* std::__sso_string::__sso_string(std::__sso_string&&) */

void __thiscall std::__sso_string::__sso_string(__sso_string *this,__sso_string *param_1)

{
  undefined8 uVar1;
  
  *(__sso_string **)this = this + 0x10;
  if (*(__sso_string **)param_1 == param_1 + 0x10) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  else {
    *(__sso_string **)this = *(__sso_string **)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(__sso_string **)param_1 = param_1 + 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  param_1[0x10] = (__sso_string)0x0;
  return;
}

