
undefined8
FUN_0047a230(ulong param_1,long param_2,long param_3,char param_4,undefined8 param_5,
            undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char local_46;
  uint local_45;
  char local_41;
  long local_40;
  
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (int)param_1 * 8;
  local_46 = '\x01';
  local_45 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | (int)param_1 << 0x1b;
  uVar4 = 5;
  if (param_4 != -1) {
    uVar4 = 6;
    local_41 = param_4;
  }
  while( true ) {
    uVar5 = FUN_0043c7e0(param_2);
    iVar3 = FUN_00407430(uVar6,uVar5,0);
    if ((((iVar3 == 0) || (iVar3 = FUN_00405f60(uVar6,&local_46,uVar4), iVar3 == 0)) ||
        (iVar3 = FUN_00405f60(uVar6,param_5,param_6), iVar3 == 0)) ||
       (((param_7 != 0 && (iVar3 = FUN_00405f60(uVar6,param_7,param_8), iVar3 == 0)) ||
        ((param_9 != 0 && (iVar3 = FUN_00405f60(uVar6,param_9,param_10), iVar3 == 0))))))
    goto LAB_0047a360;
    if (param_1 < *(ulong *)(param_2 + 0x20)) break;
    iVar3 = FUN_00406ca0(uVar6,param_3,0);
    if (iVar3 == 0) goto LAB_0047a360;
    param_1 = param_1 - *(long *)(param_2 + 0x20);
    if (param_1 == 0) {
      uVar6 = 1;
      goto LAB_0047a362;
    }
    local_46 = local_46 + '\x01';
    param_3 = param_3 + *(long *)(param_2 + 0x20);
  }
  lVar1 = param_2 + 0x106;
  iVar3 = FUN_00406ca0(uVar6,lVar1,0);
  if (iVar3 != 0) {
    thunk_FUN_00713a50(param_3,lVar1,param_1);
    FUN_004227b0(lVar1,*(undefined8 *)(param_2 + 0x20));
    uVar6 = 1;
    goto LAB_0047a362;
  }
LAB_0047a360:
  uVar6 = 0;
LAB_0047a362:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

