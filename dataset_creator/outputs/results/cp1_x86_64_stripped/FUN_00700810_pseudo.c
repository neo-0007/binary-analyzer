
undefined8 FUN_00700810(uint *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  uVar3 = *(undefined8 *)(param_1 + 0x26);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00701fb0(uVar3);
  if ((param_2 == '\x01') || (iVar1 < 1)) {
    uVar4 = *(undefined8 *)(param_1 + 6);
    local_28 = uVar4;
    while( true ) {
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar2 + 0x58);
      iVar1 = FUN_00701eb0(uVar3,lVar2 + 0x58,uVar4,*(undefined8 *)(param_1 + 2),&local_28,
                           *(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x38));
      if (iVar1 == 2) break;
      if (iVar1 != 1) {
        plVar5 = *(long **)(param_1 + 0x28);
        lVar2 = plVar5[1];
        goto LAB_007008c0;
      }
      uVar4 = *(undefined8 *)(param_1 + 6);
    }
    *param_1 = *param_1 | 0x20;
    uVar3 = 0xffffffff;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x28);
    lVar2 = plVar5[1] + ((*(long *)(param_1 + 2) - *(long *)(param_1 + 6)) / (long)iVar1) * 4;
    plVar5[1] = lVar2;
LAB_007008c0:
    *plVar5 = lVar2;
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

