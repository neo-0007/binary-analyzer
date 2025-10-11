
ulong general_allocate_boolean_constprop_0
                (long param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_4 == (char *)0x0) {
    ERR_new();
    uVar7 = 0xa0;
  }
  else {
    if (param_5 != (char *)0x0) {
      cVar1 = *param_4;
      pcVar6 = param_4;
      while (cVar1 != '\0') {
        pcVar2 = strchr(param_5,(int)cVar1);
        if (pcVar2 != (char *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ui/ui_lib.c",0xa6,"general_allocate_boolean");
          ERR_set_error(0x28,0x68,0);
        }
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar2;
      }
      lVar3 = general_allocate_prompt_constprop_0(param_2,param_6,3,param_7,param_8);
      if (lVar3 == 0) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        lVar5 = OPENSSL_sk_new_null();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) {
          free_string(lVar3);
          return 0xffffffff;
        }
      }
      *(char **)(lVar3 + 0x30) = param_4;
      *(char **)(lVar3 + 0x38) = param_5;
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      uVar4 = OPENSSL_sk_push(lVar5,lVar3);
      if ((int)uVar4 < 1) {
        free_string(lVar3);
        return (ulong)((int)uVar4 - 1);
      }
      return uVar4;
    }
    ERR_new();
    uVar7 = 0xa2;
  }
  ERR_set_debug("../crypto/ui/ui_lib.c",uVar7,"general_allocate_boolean");
  ERR_set_error(0x28,0xc0102,0);
  return 0xffffffff;
}

