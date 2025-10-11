
undefined8
encode_string_constprop_0(undefined1 *param_1,ulong *param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == (void *)0x0) {
    *param_2 = 0;
    return 1;
  }
  uVar5 = param_4 << 3;
  if (uVar5 == 0) {
    uVar4 = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar4 = uVar5;
    do {
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 >> 8;
      if (uVar4 == 0) break;
    } while (uVar2 < 8);
    uVar4 = (ulong)uVar2;
  }
  uVar1 = uVar4 + 1 + param_4;
  if (uVar1 < 0x105) {
    *param_1 = (char)uVar2;
    uVar3 = uVar4;
    do {
      param_1[uVar3] = (char)uVar5;
      uVar5 = uVar5 >> 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    memcpy(param_1 + uVar4 + 1,param_3,param_4);
    *param_2 = uVar1;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x201,"encode_string");
  ERR_set_error(0x39,0xca,0);
  return 0;
}

