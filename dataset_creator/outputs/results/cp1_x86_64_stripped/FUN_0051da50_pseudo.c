
void FUN_0051da50(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00422380(&DAT_009411fc);
  if (lVar2 != 0) {
    lVar3 = 0;
    FUN_00422390(&DAT_009411fc,0);
    do {
      if ((*(byte *)(lVar2 + 0x200 + lVar3 * 4) & 1) != 0) {
        FUN_0041ad60(*(undefined8 *)(lVar2 + 0x100 + lVar3 * 8),"../crypto/err/err_local.h",0x18);
      }
      uVar1 = *(undefined8 *)(lVar2 + 0x240 + lVar3 * 8);
      *(undefined8 *)(lVar2 + 0x100 + lVar3 * 8) = 0;
      *(undefined8 *)(lVar2 + 0x180 + lVar3 * 8) = 0;
      *(undefined4 *)(lVar2 + 0x200 + lVar3 * 4) = 0;
      *(undefined4 *)(lVar2 + 0x40 + lVar3 * 4) = 0;
      *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
      *(undefined8 *)(lVar2 + 0x80 + lVar3 * 8) = 0;
      *(undefined4 *)(lVar2 + 0x2c0 + lVar3 * 4) = 0xffffffff;
      FUN_0041ad60(uVar1,"../crypto/err/err_local.h",0x56);
      *(undefined8 *)(lVar2 + 0x240 + lVar3 * 8) = 0;
      FUN_0041ad60(*(undefined8 *)(lVar2 + 0x300 + lVar3 * 8),"../crypto/err/err_local.h",0x58);
      *(undefined8 *)(lVar2 + 0x300 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    FUN_0041ad60(lVar2,"../crypto/err/err.c",0xcb);
    return;
  }
  return;
}

