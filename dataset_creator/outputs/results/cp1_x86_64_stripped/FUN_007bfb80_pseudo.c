
undefined4 FUN_007bfb80(uint *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint *puVar6;
  long lVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  
  uVar3 = *param_1;
  puVar6 = param_1;
  if (uVar3 == 0) {
LAB_007bfbb2:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffff;
  }
  do {
    if (0xff < uVar3) goto LAB_007bfbb2;
    uVar3 = puVar6[1];
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if (DAT_0094b490 - 0x10U < 8) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
    return 0xffffffff;
  }
  LOCK();
  bVar9 = DAT_0094b494 == 0;
  if (bVar9) {
    DAT_0094b494 = 1;
  }
  UNLOCK();
  if (!bVar9) {
    FUN_00709590(&DAT_0094b494);
  }
  if ((DAT_0094b488 != 0) || (DAT_0094b488 = FUN_00711600(0xff,8), DAT_0094b488 != 0)) {
    lVar1 = DAT_0094b488;
    lVar7 = (long)puVar6 - (long)param_1;
    puVar4 = (undefined8 *)FUN_007101b0(lVar7 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *(undefined8 *)(lVar1 + (ulong)(byte)*param_1 * 8);
      bVar5 = (byte)DAT_0094b490;
      DAT_0094b490 = DAT_0094b490 + 1;
      *(int *)(puVar4 + 1) = 1 << (bVar5 & 0x1f);
      FUN_00756660((long)puVar4 + 0xc,param_1 + 1,lVar7 >> 2);
      *(undefined8 **)(DAT_0094b488 + (ulong)(byte)*param_1 * 8) = puVar4;
      uVar8 = *(undefined4 *)(puVar4 + 1);
      goto LAB_007bfc76;
    }
  }
  uVar8 = 0xffffffff;
LAB_007bfc76:
  iVar2 = DAT_0094b494;
  LOCK();
  DAT_0094b494 = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(&DAT_0094b494);
  }
  return uVar8;
}

