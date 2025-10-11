
undefined8 FUN_0040ff10(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_40;
  long local_38;
  long local_30;
  
  lVar2 = *(long *)(param_1 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_2 + 0x18);
  local_40 = 0;
  local_38 = 0;
  if (lVar2 == 0) {
    if (lVar4 != 0) {
      if (*param_1 != 0) {
        uVar3 = FUN_00423b00(*param_1);
        iVar1 = FUN_0053e720(*(undefined8 *)(param_2 + 0x18),uVar3);
        if (iVar1 == 0) goto LAB_00410108;
        iVar1 = *param_2;
        lVar4 = *(long *)(param_2 + 0x18);
        if (iVar1 == 0) {
          lVar2 = *(long *)(param_1 + 0x18);
          goto LAB_0041009a;
        }
        if (lVar4 == 0) goto LAB_00410078;
        lVar2 = *(long *)(param_1 + 0x18);
      }
      lVar5 = *(long *)(param_1 + 0x1a);
      lVar6 = *(long *)(param_2 + 0x1a);
LAB_00410039:
      local_40 = lVar2;
      local_38 = lVar4;
      if ((*(long *)(lVar4 + 0xb0) != 0) &&
         (lVar4 = FUN_0040fbe0(param_1,0,&local_38,0), lVar4 != 0)) {
        local_40 = local_38;
        bVar7 = false;
        goto LAB_0040ffe8;
      }
LAB_004100b8:
      lVar4 = lVar5;
      if (local_40 != 0) goto LAB_0040ff78;
    }
  }
  else {
    if (lVar4 != 0) {
      uVar3 = FUN_0053da00(param_1);
      goto LAB_0040ffb8;
    }
    iVar1 = *param_2;
    if (iVar1 != 0) {
LAB_00410078:
      uVar3 = FUN_00423b00(iVar1);
      iVar1 = FUN_0053e720(*(undefined8 *)(param_1 + 0x18),uVar3);
      if (iVar1 == 0) {
LAB_00410108:
        uVar3 = 0xffffffff;
        goto LAB_0040ffb8;
      }
      lVar2 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x18);
LAB_0041009a:
      lVar5 = *(long *)(param_1 + 0x1a);
      lVar6 = *(long *)(param_2 + 0x1a);
      local_40 = lVar2;
      local_38 = lVar4;
      if (lVar4 != 0) goto LAB_00410039;
      goto LAB_004100b8;
    }
    lVar4 = *(long *)(param_1 + 0x1a);
    lVar6 = *(long *)(param_2 + 0x1a);
    local_40 = lVar2;
LAB_0040ff78:
    if ((*(long *)(local_40 + 0xb0) == 0) ||
       (lVar2 = FUN_0040fbe0(param_2,0,&local_40,0), lVar2 == 0)) {
      bVar7 = local_38 != local_40;
    }
    else {
      local_38 = local_40;
      bVar7 = false;
      lVar6 = lVar2;
    }
LAB_0040ffe8:
    if ((local_40 != 0) && (!bVar7)) {
      uVar3 = FUN_0053eaa0(local_40,lVar4,lVar6,param_3);
      goto LAB_0040ffb8;
    }
  }
  uVar3 = 0xfffffffe;
LAB_0040ffb8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

