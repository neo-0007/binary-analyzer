
undefined8
buf2hexstr_sep(char *param_1,ulong param_2,ulong *param_3,byte *param_4,long param_5,char param_6)

{
  byte *pbVar1;
  ulong uVar2;
  
  if (param_6 == '\0') {
    uVar2 = param_5 * 2 + 1;
  }
  else {
    uVar2 = param_5 * 3;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar2;
  }
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (param_2 < uVar2) {
    ERR_new();
    ERR_set_debug("../crypto/o_str.c",0xee,"buf2hexstr_sep");
    ERR_set_error(0xf,0x74,0);
    return 0;
  }
  pbVar1 = param_4 + param_5;
  if (param_5 != 0) {
    do {
      while( true ) {
        *param_1 = "0123456789ABCDEF"[*param_4 >> 4];
        param_1[1] = "0123456789ABCDEF"[*param_4 & 0xf];
        if (param_6 == '\0') break;
        param_4 = param_4 + 1;
        param_1[2] = param_6;
        param_1 = param_1 + 3;
        if (pbVar1 == param_4) goto LAB_0041ac5f;
      }
      param_4 = param_4 + 1;
      param_1 = param_1 + 2;
    } while (pbVar1 != param_4);
  }
LAB_0041ac5f:
  param_1[(ulong)(param_6 == '\0') - 1] = '\0';
  return 1;
}

