
long FUN_006baeb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  plVar3 = &local_28;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(char **)(param_1 + 0x18) == 'E') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = FUN_006b8b90(param_1,0x2f,0,0);
      return uVar2;
    }
  }
  else {
    local_28 = 0;
    do {
      lVar1 = FUN_006bae30(param_1);
      if (lVar1 == 0) {
LAB_006baf25:
        lVar1 = 0;
        goto LAB_006baf27;
      }
      lVar1 = FUN_006b8b90(param_1,0x2f,lVar1,0);
      *plVar3 = lVar1;
      if (lVar1 == 0) goto LAB_006baf25;
      plVar3 = (long *)(lVar1 + 0x18);
    } while (**(char **)(param_1 + 0x18) != 'E');
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    lVar1 = local_28;
LAB_006baf27:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

