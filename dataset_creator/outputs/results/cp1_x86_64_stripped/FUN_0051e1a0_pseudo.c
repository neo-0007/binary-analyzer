
long FUN_0051e1a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = (undefined4 *)FUN_006d2700();
  uVar1 = *puVar4;
  iVar3 = FUN_00419fe0(0x40000,0);
  if ((((iVar3 != 0) && (iVar3 = FUN_00422340(&DAT_00941204,FUN_0051d9c0), iVar3 != 0)) &&
      (DAT_009411e0 != 0)) && (lVar5 = FUN_00422380(&DAT_009411fc), lVar5 != -1)) {
    if (lVar5 != 0) {
LAB_0051e20b:
      *puVar4 = uVar1;
      return lVar5;
    }
    iVar3 = FUN_00422390(&DAT_009411fc,0xffffffffffffffff);
    if (iVar3 != 0) {
      lVar5 = FUN_0041aec0(0x388,"../crypto/err/err.c",0x296);
      if (lVar5 != 0) {
        iVar3 = FUN_0041abd0(0,0,FUN_0051da50);
        if ((iVar3 != 0) && (iVar3 = FUN_00422390(&DAT_009411fc,lVar5), iVar3 != 0)) {
          FUN_00419fe0(2,0);
          goto LAB_0051e20b;
        }
        lVar6 = 0;
        do {
          if ((*(byte *)(lVar5 + 0x200 + lVar6 * 4) & 1) != 0) {
            FUN_0041ad60(*(undefined8 *)(lVar5 + 0x100 + lVar6 * 8),"../crypto/err/err_local.h",0x18
                        );
          }
          uVar2 = *(undefined8 *)(lVar5 + 0x240 + lVar6 * 8);
          *(undefined8 *)(lVar5 + 0x100 + lVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0x180 + lVar6 * 8) = 0;
          *(undefined4 *)(lVar5 + 0x200 + lVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0x40 + lVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + lVar6 * 4) = 0;
          *(undefined8 *)(lVar5 + 0x80 + lVar6 * 8) = 0;
          *(undefined4 *)(lVar5 + 0x2c0 + lVar6 * 4) = 0xffffffff;
          FUN_0041ad60(uVar2,"../crypto/err/err_local.h",0x56);
          *(undefined8 *)(lVar5 + 0x240 + lVar6 * 8) = 0;
          FUN_0041ad60(*(undefined8 *)(lVar5 + 0x300 + lVar6 * 8),"../crypto/err/err_local.h",0x58);
          *(undefined8 *)(lVar5 + 0x300 + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x10);
        FUN_0041ad60(lVar5,"../crypto/err/err.c",0xcb);
      }
      FUN_00422390(&DAT_009411fc,0);
      return 0;
    }
  }
  return 0;
}

