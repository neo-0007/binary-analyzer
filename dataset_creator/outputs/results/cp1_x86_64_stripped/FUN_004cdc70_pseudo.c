
uint FUN_004cdc70(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    lVar6 = FUN_004cdbd0();
    if (lVar6 == 0) {
      lVar4 = 0;
      bVar7 = true;
      uVar2 = 0;
    }
    else {
      FUN_0051f000();
      lVar4 = FUN_004cc650(param_1,0);
      if (lVar4 != 0) goto LAB_004cdcb5;
      bVar7 = true;
      uVar2 = 0;
    }
LAB_004cddd1:
    FUN_0041ad60(lVar6,"../crypto/conf/conf_mod.c",0xba);
LAB_004cdcf8:
    FUN_004cc6e0(lVar4);
    if (((param_4 & 2) == 0) || (!bVar7)) {
      if ((int)uVar2 < 1) {
LAB_004cdd80:
        FUN_0051f1a0();
        return uVar2;
      }
      goto LAB_004cdd14;
    }
  }
  else {
    FUN_0051f000();
    lVar4 = FUN_004cc650(param_1,0);
    lVar6 = param_2;
    if (lVar4 != 0) {
LAB_004cdcb5:
      iVar1 = FUN_004cc7d0(lVar4,lVar6,0);
      if (iVar1 < 1) {
        bVar7 = true;
        uVar2 = 0;
        if ((param_4 & 0x10) != 0) {
          uVar3 = FUN_0051e9f0();
          uVar2 = uVar3 & 0x7fffffff;
          if ((uVar3 & 0x80000000) == 0) {
            uVar2 = uVar3 & 0x7fffff;
          }
          uVar2 = (uint)(uVar2 == 0x72);
        }
      }
      else {
        uVar2 = FUN_004cd3e0(lVar4,param_3,param_4);
        lVar5 = FUN_004ccf20(lVar4,0,"config_diagnostics");
        bVar7 = lVar5 == 0;
      }
      if (param_2 == 0) goto LAB_004cddd1;
      goto LAB_004cdcf8;
    }
    FUN_004cc6e0(0);
    if ((param_4 & 2) == 0) {
      uVar2 = 0;
      goto LAB_004cdd80;
    }
  }
  uVar2 = 1;
LAB_004cdd14:
  FUN_0051f050();
  return uVar2;
}

