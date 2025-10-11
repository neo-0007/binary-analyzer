
void BN_CTX_end(BN_CTX *ctx)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (ctx == (BN_CTX *)0x0) {
    return;
  }
  if (*(int *)(ctx + 0x34) != 0) {
    *(int *)(ctx + 0x34) = *(int *)(ctx + 0x34) + -1;
    return;
  }
  iVar4 = *(int *)(ctx + 0x28);
  *(uint *)(ctx + 0x28) = iVar4 - 1U;
  uVar1 = *(uint *)(*(long *)(ctx + 0x20) + (ulong)(iVar4 - 1U) * 4);
  uVar2 = *(uint *)(ctx + 0x30);
  if (uVar1 < uVar2) {
    uVar5 = *(int *)(ctx + 0x18) - 1U & 0xf;
    iVar4 = (uVar2 - 1) - uVar1;
    *(uint *)(ctx + 0x18) = (*(int *)(ctx + 0x18) - uVar2) + uVar1;
    do {
      iVar3 = iVar4 + -1;
      if (uVar5 == 0) {
        *(undefined8 *)(ctx + 8) = *(undefined8 *)(*(long *)(ctx + 8) + 0x180);
        if (iVar4 == 0) break;
        uVar5 = 0xe;
      }
      else {
        uVar5 = uVar5 - 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)(ctx + 0x30) = uVar1;
  *(undefined4 *)(ctx + 0x38) = 0;
  return;
}

