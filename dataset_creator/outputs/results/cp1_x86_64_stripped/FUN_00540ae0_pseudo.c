
int FUN_00540ae0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                undefined8 param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = FUN_00409860();
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar12 = 0;
    iVar3 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p5_crpt2.c",0xc1,"PKCS5_v2_PBKDF2_keyivgen_ex");
    FUN_0051f8f0(6,0x83,0);
    puVar9 = (undefined8 *)0x0;
    goto LAB_00540c80;
  }
  uVar2 = FUN_0040a180(param_1);
  uVar12 = (ulong)uVar2;
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: keylen <= sizeof(key)","../crypto/evp/p5_crpt2.c",0xc5);
  }
  uVar8 = FUN_005bb930();
  puVar9 = (undefined8 *)FUN_004a12d0(uVar8,param_4);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p5_crpt2.c",0xcc,"PKCS5_v2_PBKDF2_keyivgen_ex");
    uVar8 = 0x72;
  }
  else {
    iVar3 = FUN_0040a180(param_1);
    if (-1 < iVar3) {
      uVar12 = (ulong)iVar3;
      if (puVar9[2] != 0) {
        uVar10 = FUN_0049fa00();
        if (uVar10 != uVar12) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/p5_crpt2.c",0xda,"PKCS5_v2_PBKDF2_keyivgen_ex");
          uVar8 = 0x7b;
          goto LAB_00540dbc;
        }
      }
      uVar4 = 0xa3;
      if ((undefined8 *)puVar9[3] != (undefined8 *)0x0) {
        uVar4 = FUN_00423da0(*(undefined8 *)puVar9[3],0xa3);
      }
      iVar5 = FUN_00539690(1,uVar4,0,&local_8c,0);
      if (iVar5 == 0) {
        FUN_0051f420();
        lVar7 = 0;
        FUN_0051f540("../crypto/evp/p5_crpt2.c",0xe4,"PKCS5_v2_PBKDF2_keyivgen_ex");
        FUN_0051f8f0(6,0x7d,0);
        iVar3 = 0;
        goto LAB_00540c80;
      }
      uVar8 = FUN_00423b00(local_8c);
      lVar7 = FUN_004069d0(param_8,uVar8,param_9);
      lVar11 = lVar7;
      if (lVar7 == 0) {
        uVar8 = FUN_00423b00(local_8c);
        lVar11 = FUN_0040d800(uVar8);
        if (lVar11 != 0) goto LAB_00540bfa;
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p5_crpt2.c",0xec,"PKCS5_v2_PBKDF2_keyivgen_ex");
        uVar8 = 0x7d;
      }
      else {
LAB_00540bfa:
        if (*(int *)*puVar9 == 4) {
          puVar1 = *(undefined4 **)((int *)*puVar9 + 2);
          uVar4 = *puVar1;
          uVar8 = *(undefined8 *)(puVar1 + 2);
          uVar6 = FUN_0049fa00(puVar9[1]);
          iVar3 = FUN_00540470(param_2,param_3,uVar8,uVar4,uVar6,lVar11,iVar3,local_88,param_8,
                               param_9);
          if (iVar3 != 0) {
            iVar3 = FUN_00538a80(param_1,0,0,local_88,0,param_7);
          }
          goto LAB_00540c80;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p5_crpt2.c",0xf1,"PKCS5_v2_PBKDF2_keyivgen_ex");
        uVar8 = 0x7e;
      }
      iVar3 = 0;
      FUN_0051f8f0(6,uVar8,0);
      goto LAB_00540c80;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p5_crpt2.c",0xd2,"PKCS5_v2_PBKDF2_keyivgen_ex");
    uVar8 = 0x82;
  }
LAB_00540dbc:
  lVar7 = 0;
  iVar3 = 0;
  FUN_0051f8f0(6,uVar8,0);
LAB_00540c80:
  FUN_004227b0(local_88,uVar12);
  FUN_005bb9c0(puVar9);
  FUN_00406a50(lVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

