
undefined8 FUN_007bdc70(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  if (0xff < param_1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffff;
  }
  LOCK();
  bVar4 = DAT_0094b480 == 0;
  if (bVar4) {
    DAT_0094b480 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_00709590(&DAT_0094b480);
  }
  if (DAT_0094b478 == 0) {
    DAT_0094b5d8 = FUN_00711600(0x100,0x10);
    if (DAT_0094b5d8 == 0) {
      uVar3 = 0xffffffff;
      goto LAB_007bdcc0;
    }
    DAT_0094b478 = DAT_0094b5d8 + 0x800;
  }
  lVar2 = DAT_0094b5d8;
  *(undefined8 *)(DAT_0094b478 + (long)(int)param_1 * 8) = param_2;
  uVar3 = 0;
  *(undefined8 *)(lVar2 + (long)(int)param_1 * 8) = param_3;
LAB_007bdcc0:
  iVar1 = DAT_0094b480;
  LOCK();
  DAT_0094b480 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094b480);
  }
  return uVar3;
}

