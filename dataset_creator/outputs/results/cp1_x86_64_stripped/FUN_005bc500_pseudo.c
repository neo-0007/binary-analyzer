
int FUN_005bc500(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                undefined8 param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_00409860();
  if (lVar3 == 0) {
    iVar2 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0xe0,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_0051f8f0(6,0x83,0);
    puVar5 = (undefined8 *)0x0;
    goto LAB_005bc5f6;
  }
  uVar4 = FUN_005bbf60();
  puVar5 = (undefined8 *)FUN_004a12d0(uVar4,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0xe9,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_0051f8f0(6,0x72,0);
    goto LAB_005bc5f6;
  }
  iVar1 = FUN_0040a180(param_1);
  if (iVar1 < 0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0xef,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_0051f8f0(6,0x82,0);
    goto LAB_005bc5f6;
  }
  lVar3 = (long)iVar1;
  if (puVar5[4] == 0) {
LAB_005bc630:
    iVar2 = FUN_0049f890(&local_90,puVar5[1]);
    if (iVar2 != 0) {
      iVar2 = FUN_0049f890(&local_98,puVar5[2]);
      if (iVar2 != 0) {
        iVar2 = FUN_0049f890(&local_a0,puVar5[3]);
        if (iVar2 != 0) {
          iVar2 = FUN_005fe8c0(0,0,0,0,local_90,local_98,local_a0,0,0,0,param_8,param_9);
          if (iVar2 != 0) {
            iVar2 = FUN_005fe8c0(param_2,(long)param_3,*(undefined8 *)((int *)*puVar5 + 2),
                                 (long)*(int *)*puVar5,local_90,local_98,local_a0,0,local_88,lVar3,
                                 param_8,param_9);
            if (iVar2 != 0) {
              iVar2 = FUN_00538a80(param_1,0,0,local_88,0,param_7);
            }
            goto LAB_005bc5e5;
          }
        }
      }
    }
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x104,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_0051f8f0(6,0xab,0);
  }
  else {
    iVar2 = FUN_0049f890();
    if ((iVar2 != 0) && (local_90 == lVar3)) goto LAB_005bc630;
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0xfa,"PKCS5_v2_scrypt_keyivgen_ex");
    FUN_0051f8f0(6,0x7b,0);
  }
LAB_005bc5e5:
  if (iVar1 != 0) {
    FUN_004227b0(local_88,lVar3);
  }
LAB_005bc5f6:
  FUN_005bbff0(puVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

