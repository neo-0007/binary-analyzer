
undefined8 FUN_007abcf0(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined1 auStack_1b8 [57];
  undefined8 uStack_17f;
  undefined4 local_177;
  undefined4 uStack_173;
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00768bf0(auStack_1b8);
  if (iVar1 == 0) {
    uVar8 = 0;
    lVar2 = thunk_FUN_007129d0(&local_177);
    uVar4 = (uint)param_2;
    uVar3 = lVar2 + 1;
    if (uVar3 <= param_2) {
      uVar4 = (uint)uVar3;
    }
    if (uVar4 < 8) {
      if ((uVar4 & 4) == 0) {
        if (uVar4 != 0) {
          *(undefined1 *)param_1 = (undefined1)local_177;
          if ((uVar4 & 2) != 0) {
            *(undefined2 *)((long)param_1 + ((ulong)uVar4 - 2)) =
                 *(undefined2 *)((long)&uStack_17f + (ulong)uVar4 + 6);
          }
        }
      }
      else {
        *(undefined4 *)param_1 = local_177;
        *(undefined4 *)((long)param_1 + ((ulong)uVar4 - 4)) =
             *(undefined4 *)((long)&uStack_17f + (ulong)uVar4 + 4);
      }
    }
    else {
      *param_1 = CONCAT44(uStack_173,local_177);
      *(undefined8 *)((long)param_1 + ((ulong)uVar4 - 8)) =
           *(undefined8 *)((long)&uStack_17f + (ulong)uVar4);
      lVar2 = (long)param_1 - (long)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      puVar6 = (undefined8 *)((long)&local_177 - lVar2);
      puVar7 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
      for (uVar5 = (ulong)(uVar4 + (int)lVar2 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
        puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
      }
    }
    if (param_2 < uVar3) {
      uVar8 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x24;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

