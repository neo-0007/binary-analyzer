
void FUN_00776580(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_17c;
  short local_178 [64];
  undefined1 local_f8 [200];
  long local_30;
  
  uVar4 = param_1 & 0xffffffff;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < param_2) {
    if (param_2 < 0x10) {
      local_17c = 0x80;
      iVar3 = FUN_00770fa0(param_1,local_178,&local_17c);
      if (iVar3 < 0) {
        FUN_00795560(local_f8,200,"Unexpected netlink response of size %zd on descriptor %d\n",
                     param_2,uVar4);
      }
      else {
        FUN_00795560(local_f8,200,
                     "Unexpected netlink response of size %zd on descriptor %d (address family %d)\n"
                     ,param_2,uVar4,local_178[0]);
      }
      goto LAB_00776677;
    }
    goto LAB_007765b8;
  }
  iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  local_17c = 0x80;
  iVar1 = FUN_00770fa0(param_1,local_178,&local_17c);
  if (iVar1 < 0) {
    FUN_00795560(local_f8,200,"Unexpected error %d on netlink descriptor %d.\n",iVar3,uVar4);
    goto LAB_00776677;
  }
  if (local_178[0] == 0x10) {
    if (iVar3 == 0xb) {
      uVar2 = FUN_0076db30(uVar4,3,0);
      if ((-1 < (int)uVar2) && ((uVar2 & 0x800) == 0)) goto LAB_00776634;
    }
    else if (iVar3 < 0xc) {
      if (iVar3 != 9) goto LAB_00776634;
    }
    else if ((0x17 < iVar3 - 0x58U) || ((0x880001UL >> ((ulong)(iVar3 - 0x58U) & 0x3f) & 1) == 0)) {
LAB_00776634:
      *(int *)(in_FS_OFFSET + -0x58) = iVar3;
LAB_007765b8:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return;
    }
  }
  FUN_00795560(local_f8,200,"Unexpected error %d on netlink descriptor %d (address family %d).\n",
               iVar3,uVar4,local_178[0]);
LAB_00776677:
                    /* WARNING: Subroutine does not return */
  FUN_00703110(local_f8);
}

