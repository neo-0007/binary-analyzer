
undefined8 FUN_004389f0(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int iStack_1c8;
  undefined8 local_1c4;
  int local_1bc;
  undefined1 local_1b8 [130];
  undefined1 local_136 [262];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1bc = -1;
  local_1c4 = 0xffffffffffffffff;
  iVar1 = FUN_00768bf0(local_1b8);
  if (iVar1 == 0) {
    uVar7 = 0;
    lVar2 = FUN_00713460(local_136,&DAT_007dd6bb);
    if (lVar2 == 0) {
      iVar6 = -1;
      iVar1 = -1;
      uVar3 = 0xffffffff;
    }
    else {
      lVar5 = 1;
      do {
        iVar1 = FUN_006e94d0(lVar2,0,10);
        (&iStack_1c8)[lVar5] = iVar1;
        lVar2 = FUN_00713460(0);
        iVar1 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (iVar1 < 3 && lVar2 != 0);
      uVar3 = local_1c4 & 0xffffffff;
      iVar4 = 0xff;
      if (local_1bc < 0x100) {
        iVar4 = local_1bc;
      }
      iVar1 = local_1c4._4_4_;
      iVar6 = local_1bc;
      if (0x400ff < (int)local_1c4 * 0x10000 + local_1c4._4_4_ * 0x100 + iVar4) {
        iVar1 = FUN_00771200(0x26,5,0);
        if (iVar1 == -1) {
          FUN_00438980(0x6d,0x35b);
        }
        else {
          FUN_0076dc30(iVar1);
          uVar7 = 1;
        }
        goto LAB_00438aec;
      }
    }
    FUN_00771c50(PTR_DAT_0093e068,1,"ALG_ERR: ASYNC AFALG not supported this kernel(%d.%d.%d)\n",
                 uVar3,iVar1,iVar6);
    FUN_00771c50(PTR_DAT_0093e068,1,
                 "ALG_ERR: ASYNC AFALG requires kernel version %d.%d.%d or later\n",4,1,0);
    FUN_00438980(0x6b,0x353);
  }
  else {
    uVar7 = 0;
    FUN_00438980(0x6f,0x342);
  }
LAB_00438aec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

