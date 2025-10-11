
undefined8 FUN_00607c10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_a4;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  iVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = 0;
  do {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) {
      uVar2 = 1;
LAB_00607d22:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar2;
    }
    uVar2 = FUN_004364a0(param_2,iVar3);
    iVar1 = FUN_00607a10(uVar2,local_68,local_58,param_3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
      goto LAB_00607d22;
    }
    iVar1 = FUN_00436480(param_1);
    if (iVar1 <= local_a4) {
LAB_00607d20:
      uVar2 = 0;
      goto LAB_00607d22;
    }
    while( true ) {
      uVar2 = FUN_004364a0(param_1,local_a4);
      iVar1 = FUN_00607a10(uVar2,local_88,local_78,param_3);
      if (iVar1 == 0) goto LAB_00607d20;
      iVar1 = thunk_FUN_00713570(local_78,local_58);
      if (-1 < iVar1) break;
      local_a4 = local_a4 + 1;
      iVar1 = FUN_00436480(param_1);
      if (iVar1 <= local_a4) goto LAB_00607d20;
    }
    iVar1 = thunk_FUN_00713570(local_88,local_68,(long)param_3);
    if (0 < iVar1) goto LAB_00607d20;
    iVar3 = iVar3 + 1;
  } while( true );
}

