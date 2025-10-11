
undefined8 FUN_004cbc00(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_26;
  char local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = thunk_FUN_00712710(param_1,0x3a);
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_00712ab0(param_1,&DAT_007e9c4d,4);
    if (iVar1 == 0) {
      param_1 = param_1 + 4;
    }
    iVar1 = (int)lVar2 - (int)param_1;
    if (iVar1 < 6) {
      FUN_0041c470(&local_26,param_1,(long)(iVar1 + 1));
      uVar3 = thunk_FUN_00712780(&local_26,"EMERG");
      if ((int)uVar3 == 0) goto LAB_004cbd20;
      iVar1 = thunk_FUN_00712780(&local_26,"ALERT");
      uVar3 = 1;
      if ((iVar1 == 0) || ((local_26 == 0x54495243 && (uVar3 = 2, local_22 == '\0'))))
      goto LAB_004cbd20;
      iVar1 = thunk_FUN_00712780(&local_26,"ERROR");
      uVar3 = 3;
      if ((iVar1 == 0) ||
         ((((local_26 == 0x4e524157 && (uVar3 = 4, local_22 == '\0')) ||
           ((local_26 == 0x45544f4e && (uVar3 = 5, local_22 == '\0')))) ||
          ((local_26 == 0x4f464e49 && (uVar3 = 6, local_22 == '\0')))))) goto LAB_004cbd20;
      iVar1 = thunk_FUN_00712780(&local_26,"DEBUG");
      uVar3 = 7;
      if (iVar1 == 0) goto LAB_004cbd20;
    }
  }
  uVar3 = 0xffffffff;
LAB_004cbd20:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

