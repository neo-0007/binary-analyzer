
int FUN_005467b0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar2 = FUN_004b7bb0(param_2);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  lVar4 = FUN_004b7440(param_2);
  uVar1 = (long)(iVar3 >> 3) - 1;
  *param_3 = (uint)(*(ulong *)(lVar4 + (uVar1 & 0xfffffffffffffff8)) >>
                   (sbyte)(((uint)uVar1 & 7) << 3)) & 0xff;
  iVar3 = FUN_00547420(param_1,(long)(iVar3 >> 3),&local_38);
  if (iVar3 != 0) {
    iVar3 = 1;
    if (local_38 != 0) {
      FUN_004b87d0(param_2);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

