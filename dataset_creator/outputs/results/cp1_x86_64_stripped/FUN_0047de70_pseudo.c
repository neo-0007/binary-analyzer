
undefined8
FUN_0047de70(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004eb050(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_0043b840();
  if ((int)uVar2 != 0) {
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if ((ulong)(long)iVar1 <= param_4) {
        if ((param_6 == *(ulong *)(param_1 + 0x160)) || (*(ulong *)(param_1 + 0x160) == 0)) {
          iVar1 = FUN_004f7800(0,param_5,param_6 & 0xffffffff,param_2,&local_44,
                               *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                               *(undefined8 *)(param_1 + 0x10));
          if (0 < iVar1) {
            *param_3 = (ulong)local_44;
            uVar2 = 1;
            goto LAB_0047dee0;
          }
        }
        uVar2 = 0;
      }
    }
  }
LAB_0047dee0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

