
bool FUN_005b3080(long param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
                 undefined8 param_6,ulong param_7)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0xf0) != 1) {
    FUN_005b2c70(param_1);
    if (*(int *)(param_1 + 0xf0) == 2) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x276,"ossl_prov_drbg_generate");
      FUN_0051f8f0(0x39,0xc0,0);
      return false;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x27a,"ossl_prov_drbg_generate");
      FUN_0051f8f0(0x39,0xc1,0);
      return false;
    }
  }
  if (*(uint *)(param_1 + 0x80) < param_4) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x27f,"ossl_prov_drbg_generate");
    FUN_0051f8f0(0x39,0xb5,0);
    return false;
  }
  if (*(ulong *)(param_1 + 0x88) < param_3) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x284,"ossl_prov_drbg_generate");
    FUN_0051f8f0(0x39,0xc4,0);
    return false;
  }
  if (*(ulong *)(param_1 + 0xb8) < param_7) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
    FUN_0051f8f0(0x39,0xb8,0);
    return false;
  }
  iVar1 = thunk_FUN_00768c70();
  bVar3 = iVar1 != *(int *)(param_1 + 0x78);
  if (bVar3) {
    *(int *)(param_1 + 0x78) = iVar1;
  }
  if ((*(uint *)(param_1 + 0xc4) != 0) && (*(uint *)(param_1 + 0xc4) <= *(uint *)(param_1 + 0xc0)))
  {
    bVar3 = true;
  }
  if (*(long *)(param_1 + 0xd0) < 1) {
LAB_005b3125:
    if (*(long *)(param_1 + 0x30) != 0) {
LAB_005b3233:
      iVar1 = FUN_005b20f0(param_1);
      if (iVar1 != *(int *)(param_1 + 0xe0)) goto LAB_005b3247;
    }
    if (!bVar3 && param_5 == 0) goto LAB_005b3139;
  }
  else {
    lVar2 = FUN_007607a0(0);
    if ((*(long *)(param_1 + 200) <= lVar2) &&
       (lVar2 - *(long *)(param_1 + 200) < *(long *)(param_1 + 0xd0))) goto LAB_005b3125;
    if (*(long *)(param_1 + 0x30) != 0) {
      bVar3 = true;
      goto LAB_005b3233;
    }
  }
LAB_005b3247:
  iVar1 = FUN_005b2cd0(param_1,param_5,0,0,param_6,param_7);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x2a4,"ossl_prov_drbg_generate");
    FUN_0051f8f0(0x39,0xc5,0);
    return false;
  }
  param_7 = 0;
  param_6 = 0;
LAB_005b3139:
  iVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_3,param_6,param_7);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 2;
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x2ad,"ossl_prov_drbg_generate");
    FUN_0051f8f0(0x39,0xbf,0);
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  return iVar1 != 0;
}

