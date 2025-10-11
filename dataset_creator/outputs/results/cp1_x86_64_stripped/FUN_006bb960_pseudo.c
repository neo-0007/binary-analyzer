
undefined8 FUN_006bb960(long param_1,char param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  plVar4 = &local_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (**(char **)(param_1 + 0x18) == param_2) {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = FUN_006b8b90(param_1,0x2e,0,0);
      return uVar3;
    }
  }
  else {
    do {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      lVar2 = FUN_006bb140(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      if (lVar2 == 0) {
LAB_006bb9e3:
        lVar2 = 0;
        goto LAB_006bb9e5;
      }
      lVar2 = FUN_006b8b90(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      if (lVar2 == 0) goto LAB_006bb9e3;
      plVar4 = (long *)(lVar2 + 0x18);
    } while (**(char **)(param_1 + 0x18) != param_2);
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    lVar2 = local_38;
LAB_006bb9e5:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

