
void ossl_curve448_scalar_encode(long param_1,ulong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar2 = 0;
    uVar3 = uVar5;
    do {
      uVar4 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      bVar1 = (byte)iVar2;
      iVar2 = iVar2 + 8;
      *(char *)(param_1 + uVar4) = (char)(*param_2 >> (bVar1 & 0x3f));
    } while (iVar2 != 0x40);
    uVar5 = uVar5 + 8;
    param_2 = param_2 + 1;
  } while (uVar5 != 0x38);
  return;
}

