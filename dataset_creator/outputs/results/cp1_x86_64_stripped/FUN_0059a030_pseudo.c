
undefined8
FUN_0059a030(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar1 = FUN_00436480(param_3);
  if (0 < iVar1) {
    iVar1 = param_5;
    if (param_2 != 0) {
      iVar1 = param_5 + 4;
      FUN_004ae9e0(param_1,&DAT_0080b2dc,param_5,&DAT_0083e5c2,param_2);
    }
    for (iVar6 = 0; iVar2 = FUN_00436480(param_3), iVar6 < iVar2; iVar6 = iVar6 + 1) {
      uVar3 = FUN_004364a0(param_3,iVar6);
      uVar4 = FUN_005a2b00(uVar3);
      if ((((param_4 & 0x2000) == 0) || (iVar2 = FUN_00423da0(uVar4), iVar2 == 0x52)) ||
         (iVar2 = FUN_00423da0(uVar4), iVar2 == 0x5a)) {
        if ((iVar1 != 0) && (iVar2 = FUN_004ae9e0(param_1,"%*s",iVar1,&DAT_0083e5c2), iVar2 < 1)) {
          return 0;
        }
        FUN_004a0450(param_1,uVar4);
        iVar2 = FUN_005a2b40(uVar3);
        pcVar5 = "";
        if (iVar2 != 0) {
          pcVar5 = "critical";
        }
        iVar2 = FUN_004ae9e0(param_1,": %s\n",pcVar5);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = FUN_00599df0(param_1,uVar3,param_4,iVar1 + 4);
        if (iVar2 == 0) {
          FUN_004ae9e0(param_1,"%*s",iVar1 + 4,&DAT_0083e5c2);
          uVar3 = FUN_005a2b20(uVar3);
          FUN_005b55e0(param_1,uVar3);
        }
        iVar2 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
        if (iVar2 < 1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

