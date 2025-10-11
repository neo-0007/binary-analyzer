
ulong FUN_00597ba0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  uVar2 = DAT_0093cb38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = FUN_00596be0();
  puVar7 = (undefined8 *)FUN_00596eb0(uVar6,uVar2);
  iVar3 = FUN_005970e0(param_2);
  pcVar1 = (code *)*puVar7;
  uVar6 = FUN_005968e0(param_1);
  iVar4 = 0x400;
  if (iVar3 < 0x401) {
    iVar4 = iVar3;
  }
  uVar8 = (*pcVar1)(auStack_438,iVar4,*(undefined4 *)(puVar7 + 1),uVar6);
  if (-1 < (int)uVar8) {
    auStack_438[(int)uVar8] = 0;
    uVar5 = FUN_00597100(param_1,param_2,auStack_438,uVar8 & 0xffffffff);
    uVar8 = (ulong)(~uVar5 >> 0x1f);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

