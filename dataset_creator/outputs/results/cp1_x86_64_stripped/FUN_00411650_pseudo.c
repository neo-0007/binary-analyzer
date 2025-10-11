
undefined8 FUN_00411650(undefined8 param_1,long param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if (param_2 == 0) goto LAB_004116ee;
  FUN_0041e290(&local_b8);
  local_68 = local_98;
  local_88 = local_b8;
  uStack_80 = uStack_b0;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  FUN_0041e470(&local_b8);
  local_60 = local_b8;
  uStack_58 = uStack_b0;
  local_40 = local_98;
  local_50 = local_a8;
  uStack_48 = uStack_a0;
  iVar1 = FUN_00411220(param_1,&local_88);
  if ((iVar1 == 0) || (iVar1 = FUN_0041ce50(&local_88), iVar1 == 0)) {
LAB_004116ec:
    uVar2 = 0;
  }
  else {
    if (param_5 == (long *)0x0) {
      if (iVar1 == 0) goto LAB_004116ec;
    }
    else {
      *param_5 = local_68;
    }
    uVar2 = 0;
    if (param_4 != local_68) {
      if (param_3 == 0) {
        uVar2 = 1;
      }
      else {
        *(undefined1 *)(param_3 + local_68) = 0;
        uVar2 = 1;
      }
    }
  }
LAB_004116ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

