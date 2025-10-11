
undefined8 FUN_0043bfc0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  iVar1 = FUN_0041c9c0(param_2,"TLS-GROUP");
  if (iVar1 == 0) {
    ppuVar3 = &PTR_s_tls_group_name_008eade0;
    do {
      iVar1 = (*param_3)(ppuVar3,param_4);
      if (iVar1 == 0) goto LAB_0043bfe7;
      ppuVar3 = ppuVar3 + 0x32;
    } while (ppuVar3 != (undefined **)&DAT_008efc00);
    uVar2 = 1;
  }
  else {
LAB_0043bfe7:
    uVar2 = 0;
  }
  return uVar2;
}

