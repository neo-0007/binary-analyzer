
undefined8
FUN_00477190(undefined1 *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,ulong param_7)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined1 *)0x0) {
    if (param_2 != (long *)0x0) {
      if (param_5 == 0) {
        param_6 = 0;
      }
      *param_2 = (((param_7 - 1) + (long)((int)param_4 + 2 + (int)param_6)) / param_7) * param_7;
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0x222,"bytepad");
    FUN_0051f8f0(0x39,0xc0102,0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_7 < 0x100) {
      *param_1 = 1;
      param_1[1] = (char)param_7;
      lVar1 = thunk_FUN_00713a50(param_1 + 2,param_3,param_4);
      lVar1 = lVar1 + param_4;
      if ((param_5 != 0) && (param_6 != 0)) {
        lVar1 = thunk_FUN_00713a50(lVar1,param_5,param_6);
        lVar1 = lVar1 + param_6;
      }
      iVar3 = (int)lVar1 - (int)param_1;
      iVar4 = (int)param_7 * (int)(((param_7 - 1) + (long)iVar3) / param_7);
      if (iVar3 != iVar4) {
        thunk_FUN_00713720(lVar1,0,(long)(iVar4 - iVar3));
      }
      uVar2 = 1;
      if (param_2 != (long *)0x0) {
        *param_2 = (long)iVar4;
        return uVar2;
      }
    }
  }
  return uVar2;
}

