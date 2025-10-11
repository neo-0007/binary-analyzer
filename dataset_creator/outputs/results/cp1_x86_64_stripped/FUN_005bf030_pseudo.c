
undefined8 FUN_005bf030(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_0041aec0(0x28,"../crypto/bio/bf_readbuff.c",0x37);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = FUN_0041aec0(0x1000,"../crypto/bio/bf_readbuff.c",0x3c);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_0041ad60(puVar1,"../crypto/bio/bf_readbuff.c",0x3e);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar3 = 1;
      *(undefined4 **)(param_1 + 0x40) = puVar1;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return uVar3;
}

