
undefined8 FUN_004cb7e0(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_2 == 0 && param_4 == 0) {
    if (param_5 == 0 && param_3 == 0) {
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar2 = FUN_00538aa0(*param_1,0,0,0,&DAT_007e9c20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_004096f0(*param_1);
      thunk_FUN_00713720(param_1 + 9,0,(long)iVar2);
      *(undefined4 *)(param_1 + 0x11) = 0;
    }
  }
  else {
    if (param_4 != 0) {
      *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
      iVar2 = FUN_00538aa0(*param_1,param_4,param_5,0,0);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
      lVar4 = FUN_00409860(*param_1);
      if ((((lVar4 != 0) && (iVar2 = FUN_005375b0(*param_1,param_3 & 0xffffffff), iVar2 != 0)) &&
          (iVar2 = FUN_00538aa0(*param_1,0,0,param_2,&DAT_007e9c20), iVar2 != 0)) &&
         (iVar2 = FUN_004096f0(*param_1), -1 < iVar2)) {
        puVar1 = param_1 + 9;
        iVar3 = FUN_00409710(*param_1,puVar1,&DAT_007e9c20,iVar2);
        if (0 < iVar3) {
          FUN_004cb570(param_1 + 1,puVar1,iVar2);
          FUN_004cb570(param_1 + 5,param_1 + 1,iVar2);
          FUN_004227b0(puVar1,(long)iVar2);
          iVar3 = FUN_00538aa0(*param_1,0,0,0,&DAT_007e9c20);
          if (iVar3 != 0) {
            thunk_FUN_00713720(puVar1,0,(long)iVar2);
            *(undefined4 *)(param_1 + 0x11) = 0;
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}

