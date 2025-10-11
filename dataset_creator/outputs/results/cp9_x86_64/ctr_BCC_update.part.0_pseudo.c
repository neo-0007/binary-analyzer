
undefined8 ctr_BCC_update_part_0(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar6 != 0) && (uVar7 = 0x10 - lVar6, uVar7 <= param_3)) {
    memcpy((void *)(param_1 + 100 + lVar6),param_2,uVar7);
    uVar4 = 0x20;
    local_78 = *(undefined8 *)(param_1 + 100);
    uStack_70 = *(undefined8 *)(param_1 + 0x6c);
    if (*(long *)(param_1 + 0x28) != 0x10) {
      uVar4 = 0x30;
      local_58 = local_78;
      uStack_50 = uStack_70;
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
    iVar2 = ctr_BCC_block(param_1,param_1 + 0x80,&local_78,uVar4);
    if (iVar2 == 0) {
LAB_00476ee5:
      uVar4 = 0;
      goto LAB_00476ee7;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    param_3 = lVar6 + -0x10 + param_3;
    param_2 = (undefined8 *)((long)param_2 + uVar7);
  }
  if (0xf < param_3) {
    do {
      local_78 = *param_2;
      uStack_70 = param_2[1];
      uVar4 = 0x20;
      if (*(long *)(param_1 + 0x28) != 0x10) {
        uVar4 = 0x30;
        local_58 = local_78;
        uStack_50 = uStack_70;
      }
      local_68 = local_78;
      uStack_60 = uStack_70;
      iVar2 = ctr_BCC_block(param_1,param_1 + 0x80,&local_78,uVar4);
      if (iVar2 == 0) goto LAB_00476ee5;
      param_3 = param_3 - 0x10;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
  }
  uVar4 = 1;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 100 + *(long *)(param_1 + 0x78));
    uVar3 = (uint)param_3;
    uVar7 = param_3 & 0xffffffff;
    if (uVar3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)puVar1 + (uVar7 - 2)) = *(undefined2 *)((long)param_2 + (uVar7 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar1 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar1 + (uVar7 - 4)) = *(undefined4 *)((long)param_2 + (uVar7 - 4));
      }
    }
    else {
      *puVar1 = *param_2;
      *(undefined8 *)((long)puVar1 + ((param_3 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
      lVar6 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar3) {
        uVar7 = 0;
        do {
          uVar5 = (int)uVar7 + 8;
          *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)((long)param_2 + (uVar7 - lVar6));
          uVar7 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + param_3;
    uVar4 = 1;
  }
LAB_00476ee7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

