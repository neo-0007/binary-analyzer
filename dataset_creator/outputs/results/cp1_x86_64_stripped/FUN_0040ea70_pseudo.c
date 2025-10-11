
ulong FUN_0040ea70(long param_1,undefined4 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      uVar1 = FUN_0040e9b0(param_1,local_88,0x50);
      uVar3 = (ulong)uVar1;
      if ((int)uVar1 < 1) goto LAB_0040eb26;
      uVar4 = FUN_00420cf0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18));
      local_8c = 0;
      FUN_0051f000();
      uVar5 = FUN_004069d0(uVar4,local_88,0);
      FUN_0051f050();
      uVar4 = FUN_00418710(uVar4);
      FUN_00406a50(uVar5);
      iVar2 = FUN_00418920(uVar4,local_88);
      if (iVar2 != 0) {
        iVar2 = FUN_004182f0(uVar4,iVar2,FUN_0040da90,&local_8c);
        if (iVar2 != 0) {
          *param_2 = local_8c;
          goto LAB_0040eb26;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0xb0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0040ead6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
        return uVar3;
      }
      goto LAB_0040ebe3;
    }
    uVar3 = 0xfffffffe;
  }
LAB_0040eb26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_0040ebe3:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

