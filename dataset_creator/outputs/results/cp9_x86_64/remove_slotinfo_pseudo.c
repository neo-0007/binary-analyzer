
undefined8 remove_slotinfo(long param_1,ulong *param_2,long param_3,char param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((ulong)(param_1 - param_3) < *param_2) {
    lVar4 = (param_1 - param_3) + 1;
    if (param_2[lVar4 * 2 + 1] != 0) {
      param_2[lVar4 * 2] = _dl_tls_generation + 1;
      param_2[lVar4 * 2 + 1] = 0;
    }
    if (_dl_tls_max_dtv_idx != param_1) {
      _dl_tls_dtv_gaps = 1;
      return 1;
    }
  }
  else if (param_2[1] == 0) {
    if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("! should_be_there","dl-close.c",0x3c,"remove_slotinfo");
    }
  }
  else {
    uVar1 = remove_slotinfo(param_1,param_2[1],*param_2 + param_3,param_4);
    if ((char)uVar1 != '\0') {
      return uVar1;
    }
    param_1 = *param_2 + param_3;
  }
  uVar3 = _dl_tls_static_nelem + 1;
  if (param_3 != 0) {
    uVar3 = 0;
  }
  uVar2 = param_1 - param_3;
  do {
    if (uVar2 <= uVar3) {
      return 0;
    }
    lVar4 = param_3 + -1 + uVar2;
    uVar2 = uVar2 - 1;
  } while (param_2[uVar2 * 2 + 3] == 0);
  _dl_tls_max_dtv_idx = lVar4;
  return 1;
}

