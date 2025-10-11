
/* std::__pad<wchar_t, std::char_traits<wchar_t> >::_S_pad(std::ios_base&, wchar_t, wchar_t*,
   wchar_t const*, long, long) */

void std::__pad<wchar_t,std::char_traits<wchar_t>>::_S_pad
               (ios_base *param_1,wchar_t param_2,wchar_t *param_3,wchar_t *param_4,long param_5,
               long param_6)

{
  wchar_t wVar1;
  ctype *pcVar2;
  wchar_t *pwVar3;
  long lVar4;
  long lVar5;
  wchar_t *pwVar6;
  
  lVar4 = param_5 - param_6;
  if ((*(uint *)(param_1 + 0x18) & 0xb0) == 0x20) {
    if (param_6 != 0) {
      __wmemcpy_chk(param_3,param_4,param_6,0x3fffffffffffffff);
    }
    if (lVar4 == 0) {
      return;
    }
    __wmemset_chk(param_3 + param_6,param_2,lVar4,0x3fffffffffffffff);
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 0xb0) == 0x10) {
    pcVar2 = use_facet<std::ctype<wchar_t>>((locale *)(param_1 + 0xd0));
    wVar1 = (**(code **)(*(long *)pcVar2 + 0x50))(pcVar2,0x2d);
    if ((*param_4 == wVar1) ||
       (wVar1 = (**(code **)(*(long *)pcVar2 + 0x50))(pcVar2,0x2b), *param_4 == wVar1)) {
      *param_3 = wVar1;
      pwVar6 = param_4 + 1;
      pwVar3 = param_3 + 1;
      lVar5 = 1;
      goto LAB_0069b128;
    }
    wVar1 = (**(code **)(*(long *)pcVar2 + 0x50))(pcVar2,0x30);
    if ((*param_4 != wVar1) || (param_6 < 2)) goto LAB_0069b125;
    wVar1 = (**(code **)(*(long *)pcVar2 + 0x50))(pcVar2,0x78);
    if ((param_4[1] == wVar1) ||
       (wVar1 = (**(code **)(*(long *)pcVar2 + 0x50))(pcVar2,0x58), param_4[1] == wVar1)) {
      pwVar3 = param_3 + 2;
      pwVar6 = param_4 + 2;
      lVar5 = 2;
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      goto LAB_0069b128;
    }
    lVar5 = 0;
    if (lVar4 == 0) goto LAB_0069b23f;
LAB_0069b210:
    __wmemset_chk(param_3,param_2,lVar4,0x3fffffffffffffff);
    pwVar3 = param_3;
  }
  else {
LAB_0069b125:
    lVar5 = 0;
    pwVar3 = param_3;
    pwVar6 = param_4;
LAB_0069b128:
    param_3 = pwVar3;
    param_4 = pwVar6;
    if (lVar4 != 0) goto LAB_0069b210;
  }
  param_6 = param_6 - lVar5;
  if (param_6 == 0) {
    return;
  }
  param_3 = pwVar3 + lVar4;
LAB_0069b23f:
  __wmemcpy_chk(param_3,param_4,param_6,0x3fffffffffffffff);
  return;
}

