
undefined8
FUN_004821c0(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004eb050(*(undefined8 *)(param_1 + 0x10));
  uVar2 = (ulong)iVar1;
  if (param_2 != 0) {
    uVar3 = 0;
    if ((param_4 < uVar2) ||
       ((*(ulong *)(param_1 + 0x170) != 0 && (*(ulong *)(param_1 + 0x170) != param_6))))
    goto LAB_00482220;
    iVar1 = FUN_00591320(param_5,param_6 & 0xffffffff,param_2,&local_44,
                         *(undefined8 *)(param_1 + 0x10));
    uVar3 = 0;
    if (iVar1 < 1) goto LAB_00482220;
    uVar2 = (ulong)local_44;
  }
  *param_3 = uVar2;
  uVar3 = 1;
LAB_00482220:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

