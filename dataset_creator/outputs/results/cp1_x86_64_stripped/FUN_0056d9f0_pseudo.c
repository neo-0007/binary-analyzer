
undefined4
FUN_0056d9f0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if (param_3 < 0x800) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_gen.c",0x5c,"ossl_rsa_fips186_4_gen_prob_primes");
    FUN_0051f8f0(4,0x78,0);
    return 0;
  }
  iVar1 = FUN_0056d150(param_4);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_gen.c",0x61,"ossl_rsa_fips186_4_gen_prob_primes");
    FUN_0051f8f0(4,0xb2,0);
    return 0;
  }
  FUN_004b2c00(param_5);
  lVar2 = FUN_004b2df0(param_5);
  lVar3 = FUN_004b2df0(param_5);
  lVar4 = FUN_004b2df0(param_5);
  if (lVar2 == 0) {
    if (lVar3 != 0) goto LAB_0056dbf2;
  }
  else if (lVar3 != 0) {
    if (lVar4 == 0) {
LAB_0056dbf2:
      uVar7 = 0;
    }
    else {
      FUN_004b7e70(lVar3,4);
      FUN_004b7e70(lVar4,4);
      if (*(long *)(param_1 + 0x40) == 0) {
        lVar5 = FUN_004b7700();
        *(long *)(param_1 + 0x40) = lVar5;
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_0056dc70;
        if (lVar5 != 0) goto LAB_0056dab8;
        goto LAB_0056dbf2;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
LAB_0056dc70:
        lVar6 = FUN_004b7700();
        lVar5 = *(long *)(param_1 + 0x40);
        *(long *)(param_1 + 0x48) = lVar6;
        if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_0056dbf2;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x40);
      }
LAB_0056dab8:
      FUN_004b7e70(lVar5,4);
      FUN_004b7e70(*(undefined8 *)(param_1 + 0x48),4);
      iVar1 = FUN_005c5440(*(undefined8 *)(param_1 + 0x40),lVar3,0,0,0,0,0,param_3,param_4,param_5,
                           param_6);
      if (iVar1 == 0) goto LAB_0056dbf2;
      do {
        do {
          iVar1 = FUN_005c5440(*(undefined8 *)(param_1 + 0x48),lVar4,0,0,0,0,0,param_3,param_4,
                               param_5,param_6);
          if (iVar1 == 0) goto LAB_0056dbf2;
          iVar1 = FUN_0056d190(lVar2,lVar3,lVar4);
          if (iVar1 < 0) goto LAB_0056dbf2;
        } while (iVar1 == 0);
        iVar1 = FUN_0056d190(lVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
        if (iVar1 < 0) goto LAB_0056dbf2;
      } while (iVar1 == 0);
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      uVar7 = 1;
    }
    FUN_004b7780(lVar3);
    goto LAB_0056dbff;
  }
  uVar7 = 0;
LAB_0056dbff:
  if (lVar4 != 0) {
    FUN_004b7780(lVar4);
  }
  FUN_004b7780(lVar2);
  FUN_004b2d50(param_5);
  return uVar7;
}

