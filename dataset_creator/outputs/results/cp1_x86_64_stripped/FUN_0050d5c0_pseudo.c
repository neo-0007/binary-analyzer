
uint FUN_0050d5c0(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  if ((param_2 != 0) && (lVar3 = FUN_004b8260(param_2,param_1[8]), lVar3 == 0)) {
    return 0;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_0050d69e:
    lVar3 = 0;
    uVar1 = 1;
  }
  else {
    pcVar4 = *(code **)(*param_1 + 0x120);
    if (pcVar4 != (code *)0x0) {
      lVar3 = 0;
      if (param_5 == 0) {
        param_5 = FUN_004b2a70(param_1[0x15]);
        if (param_5 == 0) {
          return 0;
        }
        pcVar4 = *(code **)(*param_1 + 0x120);
        lVar3 = param_5;
      }
      if (param_3 != 0) {
        uVar1 = (*pcVar4)(param_1,param_3,param_1[0xc],param_5);
        if ((uVar1 == 0) || (uVar1 = 1, param_4 == 0)) goto LAB_0050d664;
        pcVar4 = *(code **)(*param_1 + 0x120);
      }
      iVar2 = (*pcVar4)(param_1,param_4,param_1[0xd],param_5);
      uVar1 = (uint)(iVar2 != 0);
      goto LAB_0050d664;
    }
    if (param_3 != 0) {
      lVar3 = FUN_004b8260(param_3,param_1[0xc]);
      if (lVar3 == 0) {
        uVar1 = 0;
        lVar3 = 0;
        goto LAB_0050d664;
      }
      if (param_4 == 0) goto LAB_0050d69e;
    }
    lVar3 = FUN_004b8260(param_4,param_1[0xd]);
    uVar1 = (uint)(lVar3 != 0);
    lVar3 = 0;
  }
LAB_0050d664:
  FUN_004b2b50(lVar3);
  return uVar1;
}

