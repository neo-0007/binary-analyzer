
/* WARNING: Type propagation algorithm not settling */

bool FUN_005b2610(long param_1,uint param_2,undefined4 param_3,char *param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  long local_58 [3];
  long local_40;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = 0;
  if (uVar1 < param_2) {
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x172,"ossl_prov_drbg_instantiate");
    FUN_0051f8f0(0x39,0xb5,0);
    goto LAB_005b28d3;
  }
  uVar11 = *(ulong *)(param_1 + 0x90);
  uVar10 = *(ulong *)(param_1 + 0x98);
  if (param_4 == (char *)0x0) {
    param_5 = 0x1d;
    param_4 = "OpenSSL NIST SP 800-90A DRBG";
    if (*(ulong *)(param_1 + 0xb0) < 0x1d) goto LAB_005b286a;
  }
  else if (*(ulong *)(param_1 + 0xb0) < param_5) {
LAB_005b286a:
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../providers/implementations/rands/drbg.c",0x17e,"ossl_prov_drbg_instantiate");
    FUN_0051f8f0(0x39,0xc3,0);
    goto LAB_005b28d3;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (*(int *)(param_1 + 0xf0) == 2) {
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x184,"ossl_prov_drbg_instantiate");
      FUN_0051f8f0(0x39,0xc0,0);
    }
    else {
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x186,"ossl_prov_drbg_instantiate");
      FUN_0051f8f0(0x39,0xb9,0);
    }
    goto LAB_005b28d3;
  }
  uVar5 = *(ulong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xf0) = 2;
  uVar4 = uVar5;
  if (uVar5 == 0) {
LAB_005b2745:
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xd8) + 1;
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      *(int *)(param_1 + 0xdc) = iVar3;
    }
    uVar5 = FUN_005b23c0(param_1,&local_60,uVar1,uVar11,uVar10,param_3);
    if ((uVar5 < uVar11) || (uVar10 < uVar5)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x1c8,"ossl_prov_drbg_instantiate");
      FUN_0051f8f0(0x39,0xbd,0);
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x10))(param_1,local_60,uVar5,local_68,uVar4,param_4,param_5);
      if (iVar3 == 0) {
        FUN_005b2520(param_1,local_60,uVar5,0x5b277b);
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/rands/drbg.c",0x1cf,"ossl_prov_drbg_instantiate")
        ;
        FUN_0051f8f0(0x39,0xbc,0);
      }
      else {
        FUN_005b2520(param_1,local_60,uVar5,0x5b277b);
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 1;
        uVar6 = FUN_007607a0(0);
        *(undefined8 *)(param_1 + 200) = uVar6;
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar11 = uVar11 + uVar5;
        uVar1 = uVar1 + (uVar1 >> 1);
        uVar10 = uVar10 + lVar2;
        uVar4 = 0;
        goto LAB_005b2745;
      }
      uVar6 = FUN_00485290(*(undefined8 *)(param_1 + 8));
      puVar7 = (undefined8 *)FUN_00417730(uVar6,6,&DAT_00913080);
      if (puVar7 == (undefined8 *)0x0) {
        uVar4 = *(ulong *)(param_1 + 0xa0);
        if (uVar4 == 0) goto LAB_005b2745;
        uVar4 = 0;
      }
      else {
        if ((((*(long *)(param_1 + 0x30) == 0) || (*(code **)(param_1 + 0x58) == (code *)0x0)) ||
            (uVar4 = (**(code **)(param_1 + 0x58))
                               (*(long *)(param_1 + 0x30),0,0,*(undefined8 *)(param_1 + 0xa0),
                                *(undefined8 *)(param_1 + 0xa8)), uVar4 == 0)) ||
           (lVar8 = FUN_0041ad90(uVar4,"../providers/implementations/rands/drbg.c",0x14c),
           lVar8 == 0)) {
LAB_005b2af2:
          local_58[1] = 0;
          local_58[0] = param_1;
          FUN_004223f0(puVar7 + 1,1,local_58 + 1,*puVar7);
          uVar4 = FUN_0043c270(*(undefined8 *)(param_1 + 8),&local_68,uVar5,lVar2,local_58,0x10);
          lVar8 = local_68;
        }
        else {
          uVar9 = (**(code **)(param_1 + 0x58))
                            (*(undefined8 *)(param_1 + 0x30),lVar8,0,*(undefined8 *)(param_1 + 0xa0)
                             ,*(undefined8 *)(param_1 + 0xa8));
          if (uVar4 != uVar9) {
            FUN_0041ad60(lVar8,"../providers/implementations/rands/drbg.c",0x153);
            goto LAB_005b2af2;
          }
        }
        local_68 = lVar8;
        if ((*(ulong *)(param_1 + 0xa0) <= uVar4) && (uVar4 <= *(ulong *)(param_1 + 0xa8)))
        goto LAB_005b2745;
      }
      FUN_0051f420();
      uVar6 = 0x1b5;
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x58))(*(long *)(param_1 + 0x30),0,uVar1,uVar5,lVar2);
      if (uVar4 == 0) {
        FUN_0051f420();
        uVar6 = 0x192;
      }
      else {
        local_68 = FUN_0041ad90(uVar4,"../providers/implementations/rands/drbg.c",0x195);
        if (local_68 == 0) {
          FUN_0051f420();
          uVar6 = 0x197;
        }
        else {
          uVar5 = (**(code **)(param_1 + 0x58))
                            (*(undefined8 *)(param_1 + 0x30),local_68,
                             *(undefined4 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xa0),
                             *(undefined8 *)(param_1 + 0xa8));
          if (uVar5 == uVar4) goto LAB_005b2745;
          FUN_0051f420();
          uVar6 = 0x19e;
        }
      }
    }
    FUN_0051f540("../providers/implementations/rands/drbg.c",uVar6,"ossl_prov_drbg_instantiate");
    FUN_0051f8f0(0x39,0xbe,0);
  }
LAB_005b28d3:
  if (local_68 != 0) {
    FUN_0043c2f0(*(undefined8 *)(param_1 + 8),local_68,uVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return *(int *)(param_1 + 0xf0) == 1;
}

