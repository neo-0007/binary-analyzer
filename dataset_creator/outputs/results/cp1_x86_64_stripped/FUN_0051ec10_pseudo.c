
undefined8 FUN_0051ec10(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_006d2700();
  uVar1 = *puVar3;
  iVar2 = FUN_00419fe0(0x40000,0);
  if (iVar2 != 0) {
    iVar2 = FUN_00422340(&DAT_00941204,FUN_0051d9c0);
    if ((iVar2 != 0) && (DAT_009411e0 != 0)) {
      uVar4 = FUN_00422380(&DAT_009411fc);
      *param_1 = uVar4;
      iVar2 = FUN_00422390(&DAT_009411fc,0xffffffffffffffff);
      if (iVar2 != 0) {
        *puVar3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}

