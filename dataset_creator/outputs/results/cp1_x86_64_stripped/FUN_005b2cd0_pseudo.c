
uint FUN_005b2cd0(long param_1,undefined4 param_2,long param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uVar1 = FUN_0043b840();
  if (uVar1 == 0) goto LAB_005b2e66;
  if (*(int *)(param_1 + 0xf0) != 1) {
    FUN_005b2c70(param_1);
    if (*(int *)(param_1 + 0xf0) == 2) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x204,"ossl_prov_drbg_reseed");
      FUN_0051f8f0(0x39,0xc0,0);
      uVar1 = 0;
      goto LAB_005b2e66;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x208,"ossl_prov_drbg_reseed");
      FUN_0051f8f0(0x39,0xc1,0);
      uVar1 = 0;
      goto LAB_005b2e66;
    }
  }
  if (param_3 == 0) {
LAB_005b2d49:
    if (param_5 == 0) {
      param_6 = 0;
    }
    else if (*(ulong *)(param_1 + 0xb8) < param_6) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x21d,"ossl_prov_drbg_reseed");
      FUN_0051f8f0(0x39,0xb8,0);
      uVar1 = 0;
      goto LAB_005b2e66;
    }
    *(undefined4 *)(param_1 + 0xf0) = 2;
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd8) + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0xdc) = iVar2;
    }
    lVar6 = param_5;
    uVar7 = param_6;
    if (param_3 != 0) {
      uVar7 = 0;
      lVar6 = 0;
      iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_3,param_4,param_5,param_6);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg.c",0x239,"ossl_prov_drbg_reseed");
        FUN_0051f8f0(0x39,0xcc,0);
        uVar1 = 0;
        goto LAB_005b2e66;
      }
    }
    uVar4 = FUN_005b23c0(param_1,&local_48,*(undefined4 *)(param_1 + 0x80),
                         *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),param_2);
    if ((uVar4 < *(ulong *)(param_1 + 0x90)) || (*(ulong *)(param_1 + 0x98) < uVar4)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x248,"ossl_prov_drbg_reseed");
      FUN_0051f8f0(0x39,0xbd,0);
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))(param_1,local_48,uVar4,lVar6,uVar7);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 1;
        uVar5 = FUN_007607a0(0);
        *(undefined8 *)(param_1 + 200) = uVar5;
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar3 = FUN_005b20f0(param_1);
          *(undefined4 *)(param_1 + 0xe0) = uVar3;
        }
      }
    }
    FUN_005b2520(param_1,local_48,uVar4);
    uVar1 = (uint)(*(int *)(param_1 + 0xf0) == 1);
  }
  else {
    if (param_4 < *(ulong *)(param_1 + 0x90)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x20f,"ossl_prov_drbg_reseed");
      uVar5 = 0x7c;
    }
    else {
      if (param_4 <= *(ulong *)(param_1 + 0x98)) goto LAB_005b2d49;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x214,"ossl_prov_drbg_reseed");
      uVar5 = 0x6a;
    }
    FUN_0051f8f0(0x24,uVar5,0);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xf0) = 2;
  }
LAB_005b2e66:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

