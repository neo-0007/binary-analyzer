
undefined8 FUN_0053b740(int *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == (int *)0x0) || (param_3 == (ulong *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/exchange.c",0x1fe,"EVP_PKEY_derive");
    FUN_0051f8f0(6,0xc0102,0);
    uVar3 = 0xffffffff;
  }
  else if (*param_1 == 0x800) {
    if (*(long *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0053b78a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 10) + 0x48))();
      return uVar3;
    }
    lVar1 = *(long *)(param_1 + 0x1e);
    if ((lVar1 == 0) ||
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xb8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/exchange.c",0x210,"EVP_PKEY_derive");
      FUN_0051f8f0(6,0x96,0);
      uVar3 = 0xfffffffe;
    }
    else {
      if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_0053b7b3:
                    /* WARNING: Could not recover jumptable at 0x0053b7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,UNRECOVERED_JUMPTABLE);
        return uVar3;
      }
      iVar2 = FUN_0040fb50(*(undefined8 *)(param_1 + 0x22));
      uVar4 = (ulong)iVar2;
      if (uVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/exchange.c",0x214,"EVP_PKEY_derive");
        FUN_0051f8f0(6,0xa3,0);
        uVar3 = 0;
      }
      else if (param_2 == 0) {
        *param_3 = uVar4;
        uVar3 = 1;
      }
      else {
        if (uVar4 <= *param_3) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x1e) + 0xb8);
          goto LAB_0053b7b3;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/exchange.c",0x214,"EVP_PKEY_derive");
        FUN_0051f8f0(6,0x9b,0);
        uVar3 = 0;
      }
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/exchange.c",0x203,"EVP_PKEY_derive");
    FUN_0051f8f0(6,0x97,0);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

