
void FUN_005cb9d0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (DAT_009427b8 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      puVar2 = (undefined8 *)(DAT_009427c0 + lVar5);
      FUN_0041ad60(*puVar2,"../crypto/conf/conf_ssl.c",0x31);
      if (puVar2[2] != 0) {
        uVar1 = 0;
        do {
          lVar3 = uVar1 * 0x10;
          uVar1 = uVar1 + 1;
          FUN_0041ad60(*(undefined8 *)(puVar2[1] + lVar3),"../crypto/conf/conf_ssl.c",0x33);
          FUN_0041ad60(*(undefined8 *)(puVar2[1] + 8 + lVar3),"../crypto/conf/conf_ssl.c",0x34);
        } while (uVar1 < (ulong)puVar2[2]);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x18;
      FUN_0041ad60(puVar2[1],"../crypto/conf/conf_ssl.c",0x36);
    } while (uVar4 < DAT_009427b8);
  }
  FUN_0041ad60(DAT_009427c0,"../crypto/conf/conf_ssl.c",0x38);
  DAT_009427c0 = 0;
  DAT_009427b8 = 0;
  return;
}

