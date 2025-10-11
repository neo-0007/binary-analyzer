
ulong general_allocate_string
                (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = general_allocate_prompt_constprop_0(param_2,param_3,param_4,param_5,param_6);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar1);
        return 0xffffffff;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_7;
    *(undefined4 *)(lVar1 + 0x2c) = param_8;
    *(undefined8 *)(lVar1 + 0x30) = param_9;
    uVar2 = OPENSSL_sk_push(lVar3,lVar1);
    if ((int)uVar2 < 1) {
      free_string(lVar1);
      return (ulong)((int)uVar2 - 1);
    }
  }
  return uVar2;
}

