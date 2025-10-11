
bool FUN_004658d0(long param_1,long param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x1ba,"ecdh_plain_derive");
    FUN_0051f8f0(0x39,0x80,0);
    return false;
  }
  uVar6 = 0;
  lVar4 = FUN_004ee2d0();
  if (lVar4 != 0) {
    iVar2 = FUN_004efad0(lVar4);
    uVar6 = (long)iVar2 + 7U >> 3;
  }
  if (param_2 == 0) {
    *param_3 = uVar6;
    return true;
  }
  lVar4 = FUN_004ee2d0(*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    return false;
  }
  lVar4 = FUN_004ef840(lVar4);
  if (lVar4 == 0) {
    return false;
  }
  if (param_4 <= uVar6) {
    uVar6 = param_4;
  }
  uVar3 = FUN_004ee6c0(*(undefined8 *)(param_1 + 8));
  if ((((uVar3 >> 0xc & 1) == *(uint *)(param_1 + 0x18)) ||
      (*(uint *)(param_1 + 0x18) == 0xffffffff)) || (iVar2 = FUN_004b7cc0(lVar4), iVar2 != 0)) {
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    lVar4 = FUN_004ed9d0(*(undefined8 *)(param_1 + 8));
    if (lVar4 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) == 1) {
      FUN_004ee8a0(lVar4,0x1000);
    }
    else {
      FUN_004ee930();
    }
  }
  uVar5 = FUN_004ee3f0(*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_004ef0d0(param_2,uVar6,uVar5,lVar4,0);
  bVar1 = 0 < iVar2;
  if (bVar1) {
    *param_3 = (long)iVar2;
  }
  if (*(long *)(param_1 + 8) == lVar4) {
    return bVar1;
  }
  FUN_004ed620(lVar4);
  return bVar1;
}

