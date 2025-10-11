
undefined8 FUN_00482320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00482280(param_1,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_00481af0(param_1,param_2), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x168) == 0) {
      lVar4 = FUN_00405f40();
      *(long *)(param_1 + 0x168) = lVar4;
      if (lVar4 == 0) goto LAB_00482356;
    }
    uVar2 = FUN_0040aaf0(*(undefined8 *)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x158) = 0;
    iVar1 = FUN_00546fe0(auStack_68,param_1 + 0x4b,0x100);
    if (((iVar1 != 0) &&
        (iVar1 = FUN_005b1de0(auStack_68,0xffffffff,*(undefined8 *)(param_1 + 0x10),uVar2),
        iVar1 != 0)) && (iVar1 = FUN_00547ad0(auStack_68), iVar1 != 0)) {
      FUN_005472b0(auStack_68,param_1 + 0x158);
      uVar3 = FUN_00547310(auStack_68);
      *(undefined8 *)(param_1 + 0x150) = uVar3;
    }
    FUN_00547da0(auStack_68);
    iVar1 = FUN_004073f0(*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x160),param_4);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
      uVar3 = 1;
      goto LAB_00482358;
    }
  }
LAB_00482356:
  uVar3 = 0;
LAB_00482358:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

