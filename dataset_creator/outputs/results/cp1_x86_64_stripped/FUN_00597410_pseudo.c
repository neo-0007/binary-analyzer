
int FUN_00597410(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    DAT_00941388 = 1;
    DAT_00941398 = (undefined *)FUN_006fda20("/dev/tty","r");
    if (DAT_00941398 == (undefined *)0x0) {
      DAT_00941398 = PTR_DAT_0093e078;
    }
    DAT_00941390 = (undefined *)FUN_006fda20("/dev/tty",&DAT_00821677);
    if (DAT_00941390 == (undefined *)0x0) {
      DAT_00941390 = PTR_DAT_0093e068;
    }
    iVar2 = 1;
    uVar3 = FUN_00702290(DAT_00941398);
    iVar4 = FUN_0076e9c0(uVar3,&DAT_009413e0);
    if (iVar4 == -1) {
      puVar5 = (uint *)FUN_006d2700();
      uVar1 = *puVar5;
      if ((uVar1 == 0x19) || ((uVar1 < 0x17 && ((0x480062UL >> ((ulong)uVar1 & 0x3f) & 1) != 0)))) {
        DAT_00941388 = 0;
        return 1;
      }
      FUN_0051f420();
      iVar2 = 0;
      FUN_0051f540("../crypto/ui/ui_openssl.c",0x1cb,"open_console");
      FUN_0051f8f0(0x28,0x6c,"errno=%d",*puVar5);
    }
  }
  return iVar2;
}

