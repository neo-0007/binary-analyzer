
ulong FUN_004f19a0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    if ((param_1[0x12] == 0) ||
       ((lVar4 = 0, param_4 == 0 && (lVar4 = FUN_004b2b40(), param_4 = lVar4, lVar4 == 0)))) {
      uVar2 = 0;
    }
    else {
      FUN_004b2c00(param_4);
      lVar3 = FUN_004b2df0(param_4);
      if (((lVar3 == 0) || (iVar1 = FUN_004b8190(lVar3,2), iVar1 == 0)) ||
         (iVar1 = FUN_004b18d0(lVar3,param_1[2],lVar3), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_004b3fc0(param_2,param_3,lVar3,param_1[2],param_4,param_1[0x12]);
        uVar2 = (ulong)(iVar1 != 0);
      }
      FUN_004b2d50(param_4);
      FUN_004b2b50(lVar4);
    }
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004f19db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 400))();
  return uVar2;
}

