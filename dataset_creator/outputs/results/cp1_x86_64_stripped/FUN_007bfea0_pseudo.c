
int FUN_007bfea0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  LOCK();
  bVar4 = DAT_0094b498 == 0;
  if (bVar4) {
    DAT_0094b498 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_00709590(&DAT_0094b498);
  }
  if ((DAT_0094b5e0 == 0) && (DAT_0094b5e0 = FUN_00711600(0xf8,8), DAT_0094b5e0 == 0)) {
    iVar3 = -1;
  }
  else {
    iVar3 = DAT_0093f0c4;
    if (DAT_0093f0c4 == 0x100) {
      iVar3 = -1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
    }
    else {
      lVar2 = (long)DAT_0093f0c4;
      DAT_0093f0c4 = DAT_0093f0c4 + 1;
      *(undefined8 *)(DAT_0094b5e0 + -0x40 + lVar2 * 8) = param_1;
    }
  }
  iVar1 = DAT_0094b498;
  LOCK();
  DAT_0094b498 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094b498);
    return iVar3;
  }
  return iVar3;
}

