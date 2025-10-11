
undefined8 FUN_006dda80(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 local_b8 [48];
  ulong local_88;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  DAT_009460d0 = FUN_006e8e30("GCONV_PATH");
  if ((DAT_009460d0 == 0) &&
     (iVar1 = FUN_0076e620("/usr/lib/x86_64-linux-gnu/gconv/gconv-modules.cache",0,0), iVar1 != -1))
  {
    iVar2 = FUN_0076d7f0(iVar1,local_b8);
    if ((iVar2 < 0) || (local_88 < 0x10)) {
LAB_006ddc61:
      FUN_0076e4b0(iVar1);
      uVar5 = 0xffffffff;
      goto LAB_006ddbaf;
    }
    DAT_009460f8 = local_88;
    DAT_00946100 = (int *)FUN_0076f020(0,local_88,1,1,iVar1,0);
    uVar4 = DAT_009460f8;
    if (DAT_00946100 == (int *)0xffffffffffffffff) {
      DAT_00946100 = (int *)FUN_007101b0(DAT_009460f8);
      if (DAT_00946100 == (int *)0x0) goto LAB_006ddc61;
      uVar6 = 0;
      do {
        lVar3 = FUN_0076d9c0(iVar1,(long)DAT_00946100 + uVar6,uVar4 - uVar6);
        if (lVar3 == -1) {
          FUN_007104f0(DAT_00946100);
          DAT_00946100 = (int *)0x0;
          goto LAB_006ddc61;
        }
        uVar6 = uVar6 + lVar3;
        uVar4 = DAT_009460f8;
      } while (uVar6 < DAT_009460f8);
      DAT_009460f0 = 1;
    }
    FUN_0076e4b0(iVar1);
    if ((((*DAT_00946100 == 0x20010324) && (*(ushort *)(DAT_00946100 + 1) < DAT_009460f8)) &&
        (*(ushort *)((long)DAT_00946100 + 6) < DAT_009460f8)) &&
       (((*(ushort *)(DAT_00946100 + 2) != 0 &&
         ((ulong)*(ushort *)((long)DAT_00946100 + 6) + (ulong)*(ushort *)(DAT_00946100 + 2) * 4 <=
          DAT_009460f8)) &&
        ((*(ushort *)((long)DAT_00946100 + 10) < DAT_009460f8 &&
         (uVar5 = 0, *(ushort *)(DAT_00946100 + 3) <= DAT_009460f8)))))) goto LAB_006ddbaf;
    if (DAT_009460f0 == 0) {
      FUN_0076f080(DAT_00946100,DAT_009460f8);
    }
    else {
      FUN_007104f0();
      DAT_009460f0 = 0;
    }
    DAT_00946100 = (int *)0x0;
  }
  uVar5 = 0xffffffff;
LAB_006ddbaf:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

