
/* std::__sso_string::TEMPNAMEPLACEHOLDERVALUE(std::__sso_string&&) */

__sso_string * __thiscall std::__sso_string::operator=(__sso_string *this,__sso_string *param_1)

{
  __sso_string *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t __n;
  __sso_string *__src;
  __sso_string *__dest;
  
  p_Var1 = param_1 + 0x10;
  __src = *(__sso_string **)param_1;
  __dest = *(__sso_string **)this;
  if (__src == p_Var1) {
    if (param_1 != this) {
      __n = *(size_t *)(param_1 + 8);
      if (__n != 0) {
        if (__n == 1) {
          *__dest = param_1[0x10];
          __n = *(size_t *)(param_1 + 8);
          __dest = *(__sso_string **)this;
        }
        else {
          memcpy(__dest,__src,__n);
          __n = *(size_t *)(param_1 + 8);
          __dest = *(__sso_string **)this;
        }
      }
      *(size_t *)(this + 8) = __n;
      __dest[__n] = (__sso_string)0x0;
      __src = *(__sso_string **)param_1;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (__dest == this + 0x10) {
      *(__sso_string **)this = __src;
      *(undefined8 *)(this + 8) = uVar2;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      *(__sso_string **)this = __src;
      uVar3 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(this + 8) = uVar2;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
      if (__dest != (__sso_string *)0x0) {
        *(__sso_string **)param_1 = __dest;
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        __src = __dest;
        goto LAB_006b6151;
      }
    }
    *(__sso_string **)param_1 = p_Var1;
    __src = p_Var1;
  }
LAB_006b6151:
  *(undefined8 *)(param_1 + 8) = 0;
  *__src = (__sso_string)0x0;
  return this;
}

