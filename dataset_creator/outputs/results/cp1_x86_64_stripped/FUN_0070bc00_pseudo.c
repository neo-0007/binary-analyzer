
undefined4 FUN_0070bc00(void)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  if ((*(uint *)(lVar3 + 0x30c) & 0x60) == 0x60) {
    return *(undefined4 *)(lVar3 + 0x638);
  }
  piVar1 = (int *)(lVar3 + 0x618);
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar4 != 0) {
    FUN_00709590(piVar1);
  }
  uVar2 = *(uint *)(lVar3 + 0x30c);
  if ((uVar2 & 0x20) == 0) {
    iVar4 = FUN_007693a0(*(undefined4 *)(lVar3 + 0x2d0),lVar3 + 0x638);
    if (iVar4 == 0) {
      uVar2 = *(uint *)(lVar3 + 0x30c);
      *(uint *)(lVar3 + 0x30c) = uVar2 | 0x20;
      goto joined_r0x0070bcf9;
    }
    if ((*(byte *)(lVar3 + 0x30c) & 0x40) == 0) {
      iVar4 = FUN_00769400(*(undefined4 *)(lVar3 + 0x2d0));
      *(int *)(lVar3 + 0x63c) = iVar4;
      if (iVar4 != -1) {
        *(uint *)(lVar3 + 0x30c) = *(uint *)(lVar3 + 0x30c) | 0x40;
      }
    }
LAB_0070bcd6:
    uVar5 = 0xffffffff;
  }
  else {
joined_r0x0070bcf9:
    if ((uVar2 & 0x40) == 0) {
      iVar4 = FUN_00769400(*(undefined4 *)(lVar3 + 0x2d0));
      *(int *)(lVar3 + 0x63c) = iVar4;
      if (iVar4 == -1) goto LAB_0070bcd6;
      *(uint *)(lVar3 + 0x30c) = *(uint *)(lVar3 + 0x30c) | 0x40;
    }
    uVar5 = *(undefined4 *)(lVar3 + 0x638);
  }
  LOCK();
  iVar4 = *(int *)(lVar3 + 0x618);
  *(int *)(lVar3 + 0x618) = 0;
  UNLOCK();
  if (1 < iVar4) {
    FUN_00709660(piVar1);
  }
  return uVar5;
}

