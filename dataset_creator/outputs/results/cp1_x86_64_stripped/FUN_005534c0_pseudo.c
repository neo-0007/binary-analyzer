
ulong FUN_005534c0(undefined8 param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,code *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (ulong)((uint)param_5 & 7);
  if ((param_5 & 7) != 0) {
    uVar3 = 0;
    goto LAB_005535a7;
  }
  uVar3 = uVar5;
  if (0x7fffffef < param_5 - 0x10) goto LAB_005535a7;
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_58,param_1);
    local_60 = local_58;
    *param_3 = local_50;
    FUN_004227b0(&local_58,0x10);
    lVar2 = 8;
LAB_0055354d:
    puVar4 = &DAT_00806740;
    if (param_2 != (undefined *)0x0) {
      puVar4 = param_2;
    }
    iVar1 = FUN_00422820(&local_60,puVar4,4);
    if (iVar1 == 0) {
      uVar3 = (ulong)(local_60._4_4_ >> 0x18 | (local_60._4_4_ & 0xff0000) >> 8 |
                      (local_60._4_4_ & 0xff00) << 8 | local_60._4_4_ << 0x18);
      if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar3) &&
          (uVar3 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
         (iVar1 = FUN_00422820((long)param_3 + uVar3,&DAT_00941268,lVar2 - uVar3), iVar1 == 0))
      goto LAB_005535a7;
    }
  }
  else {
    lVar2 = FUN_00552fe0(param_1,&local_60);
    if (param_5 - 8 == lVar2) goto LAB_0055354d;
  }
  FUN_004227b0(param_3,param_5);
  uVar3 = uVar5;
LAB_005535a7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

