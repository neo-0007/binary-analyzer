
void FUN_0051e390(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_0051e1a0();
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x200 + lVar4 * 4) & 1) == 0) {
        *(undefined8 *)(lVar3 + 0x100 + lVar4 * 8) = 0;
        *(undefined8 *)(lVar3 + 0x180 + lVar4 * 8) = 0;
        *(undefined4 *)(lVar3 + 0x200 + lVar4 * 4) = 0;
      }
      else {
        puVar1 = *(undefined1 **)(lVar3 + 0x100 + lVar4 * 8);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(lVar3 + 0x200 + lVar4 * 4) = 1;
        }
      }
      *(undefined4 *)(lVar3 + 0x40 + lVar4 * 4) = 0;
      uVar2 = *(undefined8 *)(lVar3 + 0x240 + lVar4 * 8);
      *(undefined4 *)(lVar3 + lVar4 * 4) = 0;
      *(undefined8 *)(lVar3 + 0x80 + lVar4 * 8) = 0;
      *(undefined4 *)(lVar3 + 0x2c0 + lVar4 * 4) = 0xffffffff;
      FUN_0041ad60(uVar2,"../crypto/err/err_local.h",0x56);
      *(undefined8 *)(lVar3 + 0x240 + lVar4 * 8) = 0;
      FUN_0041ad60(*(undefined8 *)(lVar3 + 0x300 + lVar4 * 8),"../crypto/err/err_local.h",0x58);
      *(undefined8 *)(lVar3 + 0x300 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    *(undefined8 *)(lVar3 + 0x380) = 0;
  }
  return;
}

