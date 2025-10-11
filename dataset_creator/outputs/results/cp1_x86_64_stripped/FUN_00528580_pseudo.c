
bool FUN_00528580(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = FUN_004098f0();
  if ((((*(long *)(lVar3 + 0x1f0) == 0) || (*(long *)(lVar3 + 0x1f8) == 0)) ||
      (param_2 == 0 || param_3 == 0)) || (param_4 < 0x10)) {
    bVar4 = false;
  }
  else if (param_4 < 0x1000001) {
    if (*(code **)(lVar3 + 0x210) != (code *)0x0) {
      (**(code **)(lVar3 + 0x210))
                (param_3,param_2,param_4,*(long *)(lVar3 + 0x1f0),*(long *)(lVar3 + 0x1f8),
                 param_1 + 0x28);
      return true;
    }
    uVar1 = FUN_004098b0(param_1);
    iVar2 = FUN_00553630(lVar3 + 0x1f0,param_1 + 0x28,param_3,param_2,param_4,uVar1);
    bVar4 = iVar2 == 0;
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_aes.c",0xcb9,"aes_xts_cipher");
    FUN_0051f8f0(6,0xbf,0);
    bVar4 = false;
  }
  return bVar4;
}

